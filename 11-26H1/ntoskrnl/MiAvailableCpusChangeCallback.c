/*
 * XREFs of MiAvailableCpusChangeCallback @ 0x14070E260
 * Callers:
 *     <none>
 * Callees:
 *     MiRefreshBackgroundZeroingAffinity @ 0x14070EA3C (MiRefreshBackgroundZeroingAffinity.c)
 *     MiWakeBackgroundZeroAffinityConductors @ 0x14070EC60 (MiWakeBackgroundZeroAffinityConductors.c)
 */

__int64 __fastcall MiAvailableCpusChangeCallback(__int64 a1)
{
  MiRefreshBackgroundZeroingAffinity();
  return MiWakeBackgroundZeroAffinityConductors(a1);
}
