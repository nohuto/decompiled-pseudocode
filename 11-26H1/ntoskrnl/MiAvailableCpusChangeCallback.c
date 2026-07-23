/*
 * XREFs of MiAvailableCpusChangeCallback @ 0x140712F60
 * Callers:
 *     <none>
 * Callees:
 *     MiRefreshBackgroundZeroingAffinity @ 0x14071373C (MiRefreshBackgroundZeroingAffinity.c)
 *     MiWakeBackgroundZeroAffinityConductors @ 0x140713960 (MiWakeBackgroundZeroAffinityConductors.c)
 */

__int64 __fastcall MiAvailableCpusChangeCallback(__int64 a1)
{
  MiRefreshBackgroundZeroingAffinity();
  return MiWakeBackgroundZeroAffinityConductors(a1);
}
