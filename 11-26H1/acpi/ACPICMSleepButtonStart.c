/*
 * XREFs of ACPICMSleepButtonStart @ 0x1400AE800
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonStart @ 0x1400AE5E4 (ACPICMButtonStart.c)
 */

__int64 __fastcall ACPICMSleepButtonStart(ULONG_PTR a1, __int64 a2)
{
  return ACPICMButtonStart(a1, a2, -2147483646);
}
