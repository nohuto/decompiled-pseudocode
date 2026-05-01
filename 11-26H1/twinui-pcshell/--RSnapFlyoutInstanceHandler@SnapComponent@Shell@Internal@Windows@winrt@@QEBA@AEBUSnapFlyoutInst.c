/*
 * XREFs of ??RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUSnapFlyoutInstance@12345@@Z @ 0x1802697EC
 * Callers:
 *     ??$invoke@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInstance@implementation@23456@@impl@winrt@@YA_NAEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@1@AEBUSnapFlyoutInstance@implementation@34561@@Z @ 0x1800DC8A0 (--$invoke@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInst.c)
 *     ??$invoke@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInstance@implementation@23456@_N@impl@winrt@@YA_NAEBUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@1@AEBUSnapFlyoutInstance@implementation@34561@AEB_N@Z @ 0x1800DCDEC (--$invoke@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyou.c)
 *     ??$invoke@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@UDesktopSnapLayoutManager@implementation@23456@@impl@winrt@@YA_NAEBUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@1@AEBUDesktopSnapLayoutManager@implementation@34561@@Z @ 0x1800DD5D4 (--$invoke@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@UDesktop.c)
 *     ?Invoke@?$delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_77eaee1a30336fe222c0ee03e584614d_@@@impl@winrt@@UEAAHPEAX@Z @ 0x1805B4170 (-Invoke@-$delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@.c)
 *     ?Invoke@?$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_735bb2238cff7f690541b2a10058ef70_@@@impl@winrt@@UEAAHPEAX_N@Z @ 0x1805B42D0 (-Invoke@-$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Win_ea_1805B42D0.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::operator()(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = *a2;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, v3);
  return winrt::check_hresult(&v8, v4, &v6);
}
