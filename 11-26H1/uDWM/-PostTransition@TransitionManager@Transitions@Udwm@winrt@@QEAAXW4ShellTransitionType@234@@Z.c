/*
 * XREFs of ?PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800D8E1C
 * Callers:
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18007CF3C (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E1A80 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18001E9B0 (-GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA-AUITransition@234@W4ShellTransitionTy.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?PostTransition@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800759BC (-PostTransition@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@imp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Udwm::Transitions::TransitionManager::PostTransition(__int64 a1, int a2)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  winrt::Udwm::Transitions::TransitionManager::GetHandler(a1, &v3, a2);
  if ( v3 )
    winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::PostTransition(&v3);
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v3);
}
