/*
 * XREFs of ?InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1800B6A20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B4780 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x1801FD428 (-IsViewVisible@CStartExperienceManager@@AEBA_NXZ.c)
 */

__int64 __fastcall CStartExperienceManager::InputHostHiding(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( Geometry::CRect::IsEmpty((Geometry::CRect *)(a1 + 672)) )
    return 0LL;
  *(_OWORD *)(v1 - 72 + 744) = 0LL;
  if ( !CStartExperienceManager::IsViewVisible((CStartExperienceManager *)(v1 - 72)) )
    return 0LL;
  v4 = CStartExperienceManager::PositionMenu(v2, v3 + 248, 1);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A9,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
