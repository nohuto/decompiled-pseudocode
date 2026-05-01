/*
 * XREFs of ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802BE834
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x180054F14 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F3850 (-OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEAVICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@?$__compressed_pair@PEAVICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@$$QEAPEAVICortanaWNFService@Cortana@TwinUI@@$$QEAU?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@1@@Z @ 0x1800F6E58 (--$-0PEAVICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Cortana@TwinUI.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6525f79fad09fbd6f3497c5602dc8822___ @ 0x1802BE884 (Windows--Internal--ComTaskPool--QueueTask__lambda_6525f79fad09fbd6f3497c5602dc8822___.c)
 */

__int64 __fastcall CToastCenterExperienceManager::LookupToastQueue(CToastCenterExperienceManager *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CToastCenterExperienceManager *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = this;
  v1 = wistd::__compressed_pair<TwinUI::Cortana::ICortanaWNFService *,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::__compressed_pair<TwinUI::Cortana::ICortanaWNFService *,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>(
         &v8,
         &v7);
  v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_6525f79fad09fbd6f3497c5602dc8822___(v2, v1);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x414,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
