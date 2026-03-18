/*
 * XREFs of MiGetNodeSystemInformation @ 0x14047F0A0
 * Callers:
 *     MiCreatePerNodeZeroingConductor @ 0x14087F110 (MiCreatePerNodeZeroingConductor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeSystemInformation(unsigned int a1)
{
  return *(_QWORD *)(384LL * a1 + qword_140E2D6B8 + 376);
}
