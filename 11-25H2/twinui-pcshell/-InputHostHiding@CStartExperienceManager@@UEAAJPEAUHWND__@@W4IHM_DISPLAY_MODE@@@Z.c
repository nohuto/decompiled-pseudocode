/*
 * XREFs of ?InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180221CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180017950 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x180018764 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x180208774 (-IsViewVisible@CStartExperienceManager@@AEBA_NXZ.c)
 */

__int64 __fastcall CStartExperienceManager::InputHostHiding(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( Geometry::CRect::IsEmpty((Geometry::CRect *)(a1 + 672)) )
    return 0LL;
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  if ( !CStartExperienceManager::IsViewVisible((CStartExperienceManager *)(v2 - 72)) )
    return 0LL;
  v5 = CStartExperienceManager::PositionMenu(v3, v4 + 248, 1);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5AD,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
