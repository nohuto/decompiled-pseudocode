/*
 * XREFs of ?add_InstanceShown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1802070C0
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18020710C (-add@-$event@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::add_InstanceShown(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v5 = a1 + 40;
  if ( !a1 )
    v5 = 56LL;
  winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler>::add(v5, &v7, &v8);
  *a3 = v7;
  return 0LL;
}
