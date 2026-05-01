/*
 * XREFs of ??1?$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D17F8
 * Callers:
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$3 @ 0x1806AE2A4 (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$3.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$4 @ 0x1806AE2BD (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$4.c)
 *     _TabletModePositionerHandoffContext_CreateInstance_::_1_::dtor$0 @ 0x1806CB222 (_TabletModePositionerHandoffContext_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::ViewRectProvider>::~ComPtr<KeyboardHosting::ViewRectProvider>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(a1);
}
