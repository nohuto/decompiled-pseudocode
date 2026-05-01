/*
 * XREFs of ?DismissPlaceMode@CDragVisualAcc@@UEAAXXZ @ 0x1805494E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ @ 0x18054A9E0 (-_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ.c)
 */

void __fastcall CDragVisualAcc::DismissPlaceMode(IRawElementProviderSimple *this)
{
  CDragVisualAcc::_DismissPlaceModeButtons(this - 4);
  LODWORD(this[2].lpVtbl) = 0;
}
