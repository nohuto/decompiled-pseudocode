/*
 * XREFs of ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800C50B0
 * Callers:
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180022614 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x1800C3848 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800C5198 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 */

__int64 __fastcall ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride(_DWORD *a1, __int64 a2)
{
  int v2; // esi
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  if ( !v2 )
    return 2147947423LL;
  v5 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(a1, a2, 1LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *a1 = v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7,
      (int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
