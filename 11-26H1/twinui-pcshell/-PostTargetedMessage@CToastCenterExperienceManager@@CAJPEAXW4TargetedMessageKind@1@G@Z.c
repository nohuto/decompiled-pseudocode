/*
 * XREFs of ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1800B6D68
 * Callers:
 *     ?NotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800B7570 (-NotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_.c)
 *     ?ShellReadyCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1802A9FA0 (-ShellReadyCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXP.c)
 *     ?CriticalNotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1802A9FE0 (-CriticalNotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KP.c)
 *     _lambda_764d243e59cb48cdcde9b7b71f1d4aed_::_lambda_invoker_cdecl_ @ 0x18037B020 (_lambda_764d243e59cb48cdcde9b7b71f1d4aed_--_lambda_invoker_cdecl_.c)
 *     _lambda_6525f79fad09fbd6f3497c5602dc8822_::operator() @ 0x18037BBD8 (_lambda_6525f79fad09fbd6f3497c5602dc8822_--operator().c)
 *     ?DisplayContextChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18037C2F0 (-DisplayContextChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800B6514 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::PostTargetedMessage(struct IUnknown *a1, unsigned __int16 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ExperienceManagerUtils::PostToUIThread(0LL, a1, (void *)a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x246,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
