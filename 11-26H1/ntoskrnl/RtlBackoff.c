/*
 * XREFs of RtlBackoff @ 0x140335EF0
 * Callers:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlReleaseSwapReference @ 0x1402C5854 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x1402C58E0 (RtlAcquireSwapReference.c)
 *     RtlpFcAddFeatureUsageDataToBuffer @ 0x1402C593C (RtlpFcAddFeatureUsageDataToBuffer.c)
 *     KiEndPartialDpcProcessing @ 0x140335E84 (KiEndPartialDpcProcessing.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x140356FCC (RtlpFcAddDelayedUsageReportToBuffer.c)
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
