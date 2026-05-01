/*
 * XREFs of ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802A9848
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C2838 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801FC790 (-OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7a59401ef8741760e681f2e130c9b17f___ @ 0x1802A988C (Windows--Internal--ComTaskPool--QueueTask__lambda_7a59401ef8741760e681f2e130c9b17f___.c)
 */

__int64 __fastcall CToastCenterExperienceManager::LookupToastQueue(CToastCenterExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CToastCenterExperienceManager *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  v1 = Windows::Internal::ComTaskPool::QueueTask__lambda_7a59401ef8741760e681f2e130c9b17f___(this, &v5);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
