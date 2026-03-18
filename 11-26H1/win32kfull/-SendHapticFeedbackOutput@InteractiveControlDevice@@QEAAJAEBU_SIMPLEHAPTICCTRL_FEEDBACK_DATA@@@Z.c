/*
 * XREFs of ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402FD600
 * Callers:
 *     ?OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z @ 0x1402F1D74 (-OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402F1EB4 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402FD39C (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x140300E18 (-SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::SendHapticFeedbackOutput(
        InteractiveControlDevice *this,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a2)
{
  unsigned int v4; // ebx
  SimpleHapticsController *v5; // rcx

  v4 = 0;
  if ( *((_DWORD *)InteractiveControlManager::Instance((__int64)this, (__int64)a2) + 25) )
  {
    v5 = (SimpleHapticsController *)*((_QWORD *)this + 48);
    if ( v5 )
      return (unsigned int)SimpleHapticsController::SendHapticFeedbackOutput(v5, a2);
  }
  return v4;
}
