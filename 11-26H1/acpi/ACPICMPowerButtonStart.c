/*
 * XREFs of ACPICMPowerButtonStart @ 0x1400AE7E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonStart @ 0x1400AE5E4 (ACPICMButtonStart.c)
 */

__int64 __fastcall ACPICMPowerButtonStart(ULONG_PTR a1, __int64 a2)
{
  return ACPICMButtonStart(a1, a2, -2147483647);
}
