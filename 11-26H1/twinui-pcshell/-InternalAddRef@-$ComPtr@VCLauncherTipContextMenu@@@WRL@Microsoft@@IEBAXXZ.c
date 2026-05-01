/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x18018F358
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x180243FD0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180244B60 (-PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x180244FA0 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x1802452C0 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18045B890 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 *     shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1805FF138 (shell--TaskScheduler--AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x180603BC8 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VCLauncherTipContextMenu@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1806048C0 (-s_WndProcBase@-$CWRLImpWndProc@VCLauncherTipContextMenu@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 116), a2);
  return result;
}
