/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x1802382A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj2<ConnectedStandbyHelper>::_Destroy(
        __int64 a1,
        struct wil::details::wnf_subscription_state_base *a2)
{
  ConnectedStandbyHelper::~ConnectedStandbyHelper((ConnectedStandbyHelper *)(a1 + 16), a2);
}
