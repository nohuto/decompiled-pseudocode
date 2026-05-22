/*
 * XREFs of _CBaseInputObserverServer_11_::CBaseInputObserverServer_11__::_1_::dtor$0 @ 0x1801D7226
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInputObserverServer_11_::CBaseInputObserverServer_11__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
           *(_QWORD *)(a2 + 144) + 16LL,
           a2);
}
