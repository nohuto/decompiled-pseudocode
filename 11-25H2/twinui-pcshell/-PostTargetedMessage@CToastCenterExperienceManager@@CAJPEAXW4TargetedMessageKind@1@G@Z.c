/*
 * XREFs of ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1800FBD9C
 * Callers:
 *     ?NotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800FB790 (-NotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_.c)
 *     ?ShellReadyCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1802B2410 (-ShellReadyCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXP.c)
 *     ?CriticalNotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1802B2450 (-CriticalNotificationStateChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KP.c)
 *     _lambda_e9aa1490fbc3065c6c84b3b607e7b4a2_::_lambda_invoker_cdecl_ @ 0x1803735D0 (_lambda_e9aa1490fbc3065c6c84b3b607e7b4a2_--_lambda_invoker_cdecl_.c)
 *     _lambda_7a59401ef8741760e681f2e130c9b17f_::operator() @ 0x180373F90 (_lambda_7a59401ef8741760e681f2e130c9b17f_--operator().c)
 *     ?DisplayContextChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180374690 (-DisplayContextChangedCallback@CToastCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800FC868 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::PostTargetedMessage(
        struct IUnknown *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ExperienceManagerUtils::PostToUIThread(0LL, a1, (void *)a2, a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x240,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
