/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x180362DB4
 * Callers:
 *     ??1?$com_ptr@VCActionCenterExperienceManager@@@winrt@@QEAA@XZ @ 0x18035D048 (--1-$com_ptr@VCActionCenterExperienceManager@@@winrt@@QEAA@XZ.c)
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18035E080 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x180360D40 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<CActionCenterExperienceManager>::unconditional_release_ref(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::Release(v2);
}
