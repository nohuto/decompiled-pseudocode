/*
 * XREFs of ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1801D3A20
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001BCBC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x1802B69E4 (-KeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18065BDCC (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 *     ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x18065BFF0 (-RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1801D0C58 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(
        unsigned int *a1,
        ExperienceManagerUtils *a2,
        unsigned int a3)
{
  int v6; // eax
  int v7; // esi
  int v8; // eax
  HWND v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *a1 )
  {
    if ( a3 )
    {
      *a1 = a3;
    }
    else
    {
      v11 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView((__int64)a1, a2, 0);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x85,
          (int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
          (const char *)(unsigned int)v11);
        return v12;
      }
      *a1 = 0;
    }
    return 0LL;
  }
  if ( !a3 )
  {
    v10 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2, a2);
    PostMessageW(v10, 0x10u, 0LL, 0LL);
  }
  v6 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, _QWORD))(*(_QWORD *)a2 + 344LL))(a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v8 = 4;
    if ( a3 != 5 )
      v8 = a3;
    a1[1] = v8;
    v7 = 0;
  }
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
