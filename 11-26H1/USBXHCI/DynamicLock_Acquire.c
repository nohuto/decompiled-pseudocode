/*
 * XREFs of DynamicLock_Acquire @ 0x14000D6C0
 * Callers:
 *     Controller_Start @ 0x140008410 (Controller_Start.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008BE4 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000D648 (RootHub_AcquireReadModifyWriteLock.c)
 *     Controller_IsHandlePresentInCollection @ 0x1400169E8 (Controller_IsHandlePresentInCollection.c)
 *     Command_HandleCommandCompletionEvent @ 0x14002B298 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14002B8E4 (Command_HandleCommandRingStoppedEvent.c)
 *     RootHub_DetectLinkErrorState @ 0x14002CF50 (RootHub_DetectLinkErrorState.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14002DA10 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x14002DBD0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Command_ControllerResetPostReset @ 0x14003DF04 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x14003E0C0 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x14003E18C (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003E5F0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x1400409A0 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x140040B70 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x140040C4C (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x140041284 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 *     Controller_StopTimeTrackingForHandle @ 0x140042DD4 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x140043700 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140043980 (Controller_UcxEvtStartTrackingForTimeSync.c)
 * Callees:
 *     WPP_RECORDER_SF_sds @ 0x140046804 (WPP_RECORDER_SF_sds.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DynamicLock_Acquire(__int64 a1)
{
  char v3; // dl
  int v4; // r8d
  int v5; // r9d

  if ( *(_DWORD *)a1 != 1 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2528))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 8));
  if ( KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2504))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 8),
           0LL);
}
