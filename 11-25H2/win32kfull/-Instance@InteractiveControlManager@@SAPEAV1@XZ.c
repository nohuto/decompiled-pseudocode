/*
 * XREFs of ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60
 * Callers:
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x14012ED30 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x14012F3DC (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x14012F44C (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     NtUserAcquireInteractiveControlBackgroundAccess @ 0x140225960 (NtUserAcquireInteractiveControlBackgroundAccess.c)
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     NtUserSetInteractiveControlFocus @ 0x14024DE20 (NtUserSetInteractiveControlFocus.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1402658D0 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     EditionRimDeviceReadNotification @ 0x140272790 (EditionRimDeviceReadNotification.c)
 *     NtUserGetInteractiveControlDeviceInfo @ 0x140297D20 (NtUserGetInteractiveControlDeviceInfo.c)
 *     NtUserGetInteractiveControlInfo @ 0x140297E30 (NtUserGetInteractiveControlInfo.c)
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x140297F50 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 *     NtUserInteractiveControlQueryUsage @ 0x14029AAE0 (NtUserInteractiveControlQueryUsage.c)
 *     NtUserSendInteractiveControlHapticsReport @ 0x14029DBE0 (NtUserSendInteractiveControlHapticsReport.c)
 *     NtUserSetInteractiveCtrlRotationAngle @ 0x14029F400 (NtUserSetInteractiveCtrlRotationAngle.c)
 *     ?OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DCB2C (-OnInteractiveControlDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInteractiveControlDeviceRemoved@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DCB54 (-OnInteractiveControlDeviceRemoved@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     _lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_ @ 0x1402ECDC0 (_lambda_947f1e7f3cd2cfe4f04f18e4940370e8_--_lambda_invoker_cdecl_.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402ECFCC (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402ED3DC (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402ED638 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402EDA30 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402EDCA4 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1402EDD44 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402EDF04 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1402EDFF4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1402EFDC8 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1402F005C (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1402F0390 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1402F0410 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402F0868 (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 * Callees:
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x14012FDB0 (--0InteractiveControlManager@@AEAA@XZ.c)
 */

struct InteractiveControlManager *__fastcall InteractiveControlManager::Instance(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  InteractiveControlManager *v3; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_QWORD *)(UserSessionState + 17120) )
  {
    v3 = (InteractiveControlManager *)Win32AllocPoolZInit(320LL, 1819440195LL);
    if ( v3 )
      *(_QWORD *)(UserSessionState + 17120) = InteractiveControlManager::InteractiveControlManager(v3);
  }
  return *(struct InteractiveControlManager **)(UserSessionState + 17120);
}
