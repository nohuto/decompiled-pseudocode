/*
 * XREFs of ?StartDrag@JointResizeAcc@@UEAAXXZ @ 0x180518EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall JointResizeAcc::StartDrag(IRawElementProviderSimple *this)
{
  UiaRaiseAutomationEvent(this - 2, 20026);
}
