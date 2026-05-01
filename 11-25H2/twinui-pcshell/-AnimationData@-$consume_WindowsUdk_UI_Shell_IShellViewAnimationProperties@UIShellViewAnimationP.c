/*
 * XREFs of ?AnimationData@?$consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties@UIShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18035DAB0
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x18024FA80 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18035E080 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x180360D40 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18044EE40 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 *     ?ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUShellViewGestureReportedArgs@3456@@Z @ 0x1805716A8 (-ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@.c)
 *     _lambda_9b092398f928f40caadc1063cb84386c_::operator() @ 0x1805A9020 (_lambda_9b092398f928f40caadc1063cb84386c_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties<winrt::WindowsUdk::UI::Shell::IShellViewAnimationProperties>::AnimationData(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = *a1;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  winrt::check_hresult(&v8, v4, (__int64)&v6);
  return a2;
}
