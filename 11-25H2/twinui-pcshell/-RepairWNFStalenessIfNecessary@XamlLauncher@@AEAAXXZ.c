/*
 * XREFs of ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x18022A380
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x18024FA80 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18044EE40 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180197398 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?Visibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18022A3EC (-Visibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall XamlLauncher::RepairWNFStalenessIfNecessary(XamlLauncher *this)
{
  int v2; // ebx
  unsigned __int8 v3; // al

  v2 = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::Visibility((char *)this + 384);
  if ( (v2 == 0) != (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 104LL))(*((_QWORD *)this + 47)) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 104LL))(*((_QWORD *)this + 47));
    XamlLauncher::PublishLauncherVisibilityState((ImmersiveMonitorHelper **)this, v3);
  }
}
