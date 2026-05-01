/*
 * XREFs of XamlLauncher::LauncherShowRequested$_InitCoro$2 @ 0x18024FA18
 * Callers:
 *     ?LauncherShowRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801E2460 (-LauncherShowRequested@XamlLauncher@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRequestedEventA.c)
 * Callees:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x18024FA80 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::LauncherShowRequested__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 161) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 169) = v5;
  *(_QWORD *)a2 = XamlLauncher::LauncherShowRequested__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 160) = 0;
  return XamlLauncher::LauncherShowRequested__ResumeCoro_1(a2);
}
