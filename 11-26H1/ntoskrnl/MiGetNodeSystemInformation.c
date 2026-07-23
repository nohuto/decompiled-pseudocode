/*
 * XREFs of MiGetNodeSystemInformation @ 0x140478A10
 * Callers:
 *     MiCreatePerNodeZeroingConductor @ 0x140885510 (MiCreatePerNodeZeroingConductor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeSystemInformation(unsigned int a1)
{
  return *(_QWORD *)(384LL * a1 + qword_140E2D838 + 376);
}
