/*
 * XREFs of RtlBeginReadTickLock @ 0x140447880
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1404476B0 (RtlGetMultiTimePrecise.c)
 *     KeQueryProcessAvailableCpus @ 0x1405E57A0 (KeQueryProcessAvailableCpus.c)
 *     KeQuerySystemAvailableCpus @ 0x1405E5860 (KeQuerySystemAvailableCpus.c)
 *     KeQueryCpuSetInformation @ 0x140B6A8B4 (KeQueryCpuSetInformation.c)
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
