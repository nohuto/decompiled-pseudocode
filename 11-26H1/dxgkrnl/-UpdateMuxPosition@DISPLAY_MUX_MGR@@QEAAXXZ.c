/*
 * XREFs of ?UpdateMuxPosition@DISPLAY_MUX_MGR@@QEAAXXZ @ 0x14008FFF4
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     ?UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ @ 0x140090010 (-UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ.c)
 */

void __fastcall DISPLAY_MUX_MGR::UpdateMuxPosition(DISPLAY_MUX_PAIRING **this)
{
  DISPLAY_MUX_PAIRING::UpdateMuxPosition(this[9]);
}
