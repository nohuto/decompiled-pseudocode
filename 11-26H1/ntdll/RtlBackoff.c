/*
 * XREFs of RtlBackoff @ 0x18005F2E0
 * Callers:
 *     RtlpQueueWaitBlockToSRWLock @ 0x180015B00 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180031C30 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlTryAcquireSRWLockShared @ 0x18003B260 (RtlTryAcquireSRWLockShared.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005EF24 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005F238 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005F864 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x180110FA8 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  struct _TEB *result; // rax
  unsigned __int64 v3; // rax
  unsigned int i; // ecx

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = NtCurrentTeb();
    if ( result->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  result = (struct _TEB *)(10 * (v1 + ((v1 - 1) & (unsigned int)v3)) / MEMORY[0x7FFE02D6]);
  for ( i = 0; i < (unsigned int)result; ++i )
    _mm_pause();
  return result;
}
