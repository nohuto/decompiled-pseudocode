/*
 * XREFs of ?Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1803BF180
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002050C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18017290C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1803BF230 (-BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::Activate(__int64 a1, HSTRING a2, int a3)
{
  int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CSingleViewShellExperience::SetArgs((HSTRING *)(a1 + 48), a2);
  if ( *(_DWORD *)(a1 + 88) == 2 && a3 != 2 )
  {
    v5 = TwinUI::Cortana::ShellExperienceView::BringToForeground((TwinUI::Cortana::ShellExperienceView *)a1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)(unsigned int)v5);
  }
  if ( a3 )
    v6 = a3 == 2;
  else
    v6 = 4;
  v7 = CSingleViewShellExperience::Show(
         a1 + 48,
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)(v6 | 2u));
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
