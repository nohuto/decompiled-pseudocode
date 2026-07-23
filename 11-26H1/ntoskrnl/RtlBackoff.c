/*
 * XREFs of RtlBackoff @ 0x140337F20
 * Callers:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlReleaseSwapReference @ 0x1403104F0 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x14031057C (RtlAcquireSwapReference.c)
 *     RtlpFcAddFeatureUsageDataToBuffer @ 0x1403105D8 (RtlpFcAddFeatureUsageDataToBuffer.c)
 *     KiEndPartialDpcProcessing @ 0x140337EB4 (KiEndPartialDpcProcessing.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x140358D6C (RtlpFcAddDelayedUsageReportToBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
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
    result = (unsigned int)KeNumberProcessors_0;
    if ( (_DWORD)KeNumberProcessors_0 == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  result = 10 * (v1 + ((v1 - 1) & (unsigned int)v3)) / MEMORY[0xFFFFF780000002D6];
  for ( i = 0; i < (unsigned int)result; ++i )
    _mm_pause();
  return result;
}
