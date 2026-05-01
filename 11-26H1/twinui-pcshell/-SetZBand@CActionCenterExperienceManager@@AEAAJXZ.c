/*
 * XREFs of ?SetZBand@CActionCenterExperienceManager@@AEAAJXZ @ 0x1802BF00C
 * Callers:
 *     ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1801EE760 (-OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801FCD20 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x1801F9848 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::SetZBand(CActionCenterExperienceManager *this)
{
  char *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 128;
  if ( !*((_QWORD *)v1 + 3) )
    return 0LL;
  v2 = CSingleViewShellExperience::SetWindowBand((__int64)v1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x63D,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
