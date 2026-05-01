/*
 * XREFs of ?ShowFocus@AppResizeAcc@@UEAAXXZ @ 0x180511A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppResizeAcc::ShowFocus(IRawElementProviderSimple *this)
{
  UiaRaiseAutomationEvent(this - 2, 20005);
}
