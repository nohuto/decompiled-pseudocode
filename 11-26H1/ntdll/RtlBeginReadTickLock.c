/*
 * XREFs of RtlBeginReadTickLock @ 0x180077C30
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x180077A60 (RtlGetMultiTimePrecise.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBeginReadTickLock(__int64 *a1)
{
  __int64 result; // rax

  for ( result = *a1; (*a1 & 1) != 0; result = *a1 )
    _mm_pause();
  return result;
}
