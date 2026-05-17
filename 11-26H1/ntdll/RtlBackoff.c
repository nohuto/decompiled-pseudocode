/*
 * XREFs of RtlBackoff @ 0x180013BB0
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800137F4 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180013B08 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180014134 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x18002AA00 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800476B0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlTryAcquireSRWLockShared @ 0x180050CE0 (RtlTryAcquireSRWLockShared.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x180111428 (RtlpHpEnvAcquireGlobalLockExclusive.c)
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
