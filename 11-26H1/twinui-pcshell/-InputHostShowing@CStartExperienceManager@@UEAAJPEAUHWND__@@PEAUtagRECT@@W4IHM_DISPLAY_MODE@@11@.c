/*
 * XREFs of ?InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1801FD390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B4780 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x1801FD428 (-IsViewVisible@CStartExperienceManager@@AEBA_NXZ.c)
 */

__int64 __fastcall CStartExperienceManager::InputHostShowing(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // rcx
  int v5; // edx
  int v6; // r9d
  int v7; // r10d
  __int64 v8; // rcx
  __int64 v9; // r11
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (_DWORD *)(a1 - 72);
  if ( a4 == 3 )
  {
    v5 = a3[1];
    v6 = a3[2];
    v7 = a3[3];
    v4[186] = *a3;
    v4[187] = v5;
    v4[188] = v6;
    v4[189] = v7;
  }
  else
  {
    *(_OWORD *)(v4 + 186) = 0LL;
  }
  if ( !CStartExperienceManager::IsViewVisible((CStartExperienceManager *)v4) )
    return 0LL;
  v10 = CStartExperienceManager::PositionMenu(v8, v9 + 248, 1);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59D,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
