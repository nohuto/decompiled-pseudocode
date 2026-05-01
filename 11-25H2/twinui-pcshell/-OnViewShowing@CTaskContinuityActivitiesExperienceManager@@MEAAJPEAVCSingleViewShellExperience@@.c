/*
 * XREFs of ?OnViewShowing@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180373020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x180373064 (-PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CTaskContinuityActivitiesExperienceManager::OnViewShowing(
        CTaskContinuityActivitiesExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CTaskContinuityActivitiesExperienceManager::PositionApplicationOnPrimaryMonitor((CTaskContinuityActivitiesExperienceManager *)((char *)this - 48));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x71,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
