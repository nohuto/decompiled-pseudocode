/*
 * XREFs of ?ShowFocus@CDragVisualAcc@@UEAAXXZ @ 0x1805276F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDragVisualAcc::ShowFocus(IRawElementProviderSimple *this)
{
  UiaRaiseAutomationEvent(this - 4, 30008);
  UiaRaiseAutomationEvent(this - 4, 20005);
  CDragVisualAcc::UpdateBoundingRect((CDragVisualAcc *)this);
}
