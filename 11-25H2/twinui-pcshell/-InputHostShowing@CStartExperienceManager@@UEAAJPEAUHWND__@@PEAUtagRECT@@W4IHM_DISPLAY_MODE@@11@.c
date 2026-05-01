/*
 * XREFs of ?InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1802086B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180017950 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x180208774 (-IsViewVisible@CStartExperienceManager@@AEBA_NXZ.c)
 */

__int64 __fastcall CStartExperienceManager::InputHostShowing(_DWORD *a1, __int64 a2, int *a3, int a4)
{
  int v4; // r9d
  int v5; // r11d
  int v6; // ebx
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // r10
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 == 3 )
  {
    v4 = a3[3];
    v5 = a3[2];
    v6 = a3[1];
    v7 = *a3;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
  }
  a1[168] = v7;
  a1[169] = v6;
  a1[170] = v5;
  a1[171] = v4;
  if ( !CStartExperienceManager::IsViewVisible((CStartExperienceManager *)(a1 - 18)) )
    return 0LL;
  v10 = CStartExperienceManager::PositionMenu(v8, v9 + 248, 1);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A1,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
