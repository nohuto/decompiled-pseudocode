/*
 * XREFs of ?Visibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18022A3EC
 * Callers:
 *     ?IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1800F4DA8 (-IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x18022A380 (-RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable___lambda_3c3eef79882b33f453ce48f4c33680cf___::Invoke @ 0x180374AA0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180374AA0.c)
 *     ?InvokeSearch@CopilotHotkeyManager@@QEAAXXZ @ 0x180601894 (-InvokeSearch@CopilotHotkeyManager@@QEAAXXZ.c)
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_9d145c474c1ca3988ea2d0119a9f5c39_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1806150A0 (-Invoke@-$delegate@U-$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIInspe.c)
 *     ?AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXAEBW4ShellView@4UI@WindowsUdk@7@AEBUShellViewCoordinator@49WindowsUdk@7@_KAEBUGestureAnimationData@Input@9WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180674E78 (-AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@Q.c)
 *     _lambda_2707938463de754926d7d6334e653630_::operator() @ 0x180675EE4 (_lambda_2707938463de754926d7d6334e653630_--operator().c)
 *     ?ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18067661C (-ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::Visibility(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v6 = 0;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 120LL))(v1, &v6);
  winrt::check_hresult(&v7, v2, &v4);
  return v6;
}
