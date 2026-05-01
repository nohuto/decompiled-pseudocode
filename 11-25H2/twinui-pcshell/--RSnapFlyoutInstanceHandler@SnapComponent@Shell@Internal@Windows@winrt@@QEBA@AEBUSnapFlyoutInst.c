/*
 * XREFs of ??RSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUSnapFlyoutInstance@12345@@Z @ 0x1802718C0
 * Callers:
 *     ??$invoke@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@UDesktopSnapLayoutManager@implementation@23456@@impl@winrt@@YA_NAEBUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@1@AEBUDesktopSnapLayoutManager@implementation@34561@@Z @ 0x1800E072C (--$invoke@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@UDesktop.c)
 *     ??$invoke@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInstance@implementation@23456@_N@impl@winrt@@YA_NAEBUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@1@AEBUSnapFlyoutInstance@implementation@34561@AEB_N@Z @ 0x1800E0DD0 (--$invoke@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyou.c)
 *     ??$invoke@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInstance@implementation@23456@@impl@winrt@@YA_NAEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@1@AEBUSnapFlyoutInstance@implementation@34561@@Z @ 0x1800E1688 (--$invoke@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInst.c)
 *     ?Invoke@?$delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_82fed23ec7e902f0871e7418b25a0e7f_@@@impl@winrt@@UEAAHPEAX@Z @ 0x1805901F0 (-Invoke@-$delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@_ea_1805901F0.c)
 *     ?Invoke@?$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_e86cebd7373d702890111f0794a8cedb_@@@impl@winrt@@UEAAHPEAX_N@Z @ 0x1805902F0 (-Invoke@-$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Win_ea_1805902F0.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
