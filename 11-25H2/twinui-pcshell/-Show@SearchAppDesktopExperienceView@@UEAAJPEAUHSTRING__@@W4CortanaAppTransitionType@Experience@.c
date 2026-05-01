/*
 * XREFs of ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803C35E0
 * Callers:
 *     ?ActivateView@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@6@@Z @ 0x1803BE2C0 (-ActivateView@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Int.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803BF9A0 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?IsShowForTransitions@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x1803C0AE4 (-IsShowForTransitions@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z.c)
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x1803C0C68 (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1803C0E20 (-NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType.c)
 *     ?RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C2CC0 (-RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1803C3A1C (-ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::Show(
        SearchAppDesktopExperienceView *a1,
        HSTRING a2,
        unsigned int a3)
{
  int IsShowForTransitions; // eax
  unsigned int v7; // ebx
  SearchAppDesktopExperienceView *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  int ActivateArgs; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(string) = 0;
  IsShowForTransitions = SearchAppDesktopExperienceView::IsShowForTransitions(a1, a2, (bool *)&string);
  v7 = IsShowForTransitions;
  if ( IsShowForTransitions < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)IsShowForTransitions);
    return v7;
  }
  *((_BYTE *)a1 + 173) = 0;
  v9 = (SearchAppDesktopExperienceView *)((char *)a1 - 24);
  if ( !(_BYTE)string )
  {
    *((_BYTE *)a1 + 176) = 1;
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    ActivateArgs = SearchAppDesktopExperienceView::GetActivateArgs(
                     (SearchAppDesktopExperienceView *)((char *)a1 - 24),
                     a2,
                     &string);
    v11 = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      ActivateArgs = SearchAppDesktopExperienceView::ShowInternal(v9, string, 0LL, a3);
      v11 = ActivateArgs;
      if ( ActivateArgs >= 0 )
      {
        WindowsDeleteString(string);
        goto LABEL_13;
      }
      v13 = 613LL;
    }
    else
    {
      v13 = 608LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
    WindowsDeleteString(string);
    return v11;
  }
  *((_BYTE *)a1 + 176) = 0;
  v10 = SearchAppDesktopExperienceView::NotifyAppWithTransitionType(
          (SearchAppDesktopExperienceView *)((char *)a1 - 24),
          L"NotifyAppTransitionRequestHandled",
          a3,
          0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x259,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
LABEL_13:
  if ( SearchAppDesktopExperienceView::IsViewVisible(v9) )
    SearchAppDesktopExperienceView::RegisterGlobalBackButton(v9);
  return 0LL;
}
