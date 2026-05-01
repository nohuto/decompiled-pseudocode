/*
 * XREFs of ?DisableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801D0BE0
 * Callers:
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x1800B9484 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1801D0C58 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 */

__int64 __fastcall ShellExperienceHelpers::NavigationLevelOverrideHelper::DisableOverride(
        ShellExperienceHelpers::NavigationLevelOverrideHelper *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  __int64 v2; // r8
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(unsigned int *)this;
  if ( (_DWORD)v2 )
  {
    v5 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(this, a2, v2);
    v6 = v5;
    if ( v5 >= 0 )
    {
      *(_DWORD *)this = 0;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
