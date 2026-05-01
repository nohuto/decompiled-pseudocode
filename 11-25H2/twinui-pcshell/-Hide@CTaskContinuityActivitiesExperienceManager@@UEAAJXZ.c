/*
 * XREFs of ?Hide@CTaskContinuityActivitiesExperienceManager@@UEAAJXZ @ 0x180372E00
 * Callers:
 *     ?ActiveZBandChangedForMonitor@CTaskContinuityActivitiesExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x180372A50 (-ActiveZBandChangedForMonitor@CTaskContinuityActivitiesExperienceManager@@UEAAJKKPEAUIImmersiveM.c)
 *     ?OnEventQueued@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180372E50 (-OnEventQueued@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001BCBC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTaskContinuityActivitiesExperienceManager::Hide(CTaskContinuityActivitiesExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CSingleViewShellExperience::Hide((__int64)this + 72, 0LL);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB4,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
