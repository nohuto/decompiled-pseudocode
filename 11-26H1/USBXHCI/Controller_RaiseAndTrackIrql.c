/*
 * XREFs of Controller_RaiseAndTrackIrql @ 0x14000FCC0
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x140008180 (Interrupter_WdfEvtInterruptDisable.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x140008320 (Interrupter_WdfEvtInterruptEnable.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008BE4 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 *     Control_WdfEvtIoDefault @ 0x14000E0E0 (Control_WdfEvtIoDefault.c)
 *     Control_Transfer_Map @ 0x14000EFE0 (Control_Transfer_Map.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x14000FAB0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x140010120 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x140019DB0 (Bulk_MapStage.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x14001ABCC (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     Isoch_MapStage @ 0x14001AF10 (Isoch_MapStage.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1400285B0 (Interrupter_ReleaseEventRingLock.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140029364 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x14002A450 (Interrupter_WdfEvtInterruptWorkItem.c)
 *     Command_HandleCommandCompletionEvent @ 0x14002B298 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14002B8E4 (Command_HandleCommandRingStoppedEvent.c)
 *     RootHub_DetectLinkErrorState @ 0x14002CF50 (RootHub_DetectLinkErrorState.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x14002DBD0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Control_EP_StartMapping @ 0x140032DD0 (Control_EP_StartMapping.c)
 *     Isoch_EP_StartMapping @ 0x140034B30 (Isoch_EP_StartMapping.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x14003AB70 (Interrupter_WdfEvtInterruptIsr.c)
 *     Bulk_EP_StartMapping @ 0x14003AD30 (Bulk_EP_StartMapping.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003D4C8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     Control_WdfEvtWorkItemForTransferCompletion @ 0x14004C8D0 (Control_WdfEvtWorkItemForTransferCompletion.c)
 *     Control_WdfWorkItemForCanceledOnQueueTransferCompletion @ 0x14004C9B0 (Control_WdfWorkItemForCanceledOnQueueTransferCompletion.c)
 *     Isoch_WdfEvtWorkItemForTransferCompletion @ 0x14004D280 (Isoch_WdfEvtWorkItemForTransferCompletion.c)
 *     Bulk_WdfEvtWorkItemForTransferCompletion @ 0x14004DDE0 (Bulk_WdfEvtWorkItemForTransferCompletion.c)
 *     ESM_SmWorker @ 0x140055C50 (ESM_SmWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x140046804 (WPP_RECORDER_SF_sds.c)
 */

char __fastcall Controller_RaiseAndTrackIrql(__int64 a1)
{
  int v2; // edx
  KIRQL v3; // di
  ULONG CurrentProcessorNumber; // eax
  int v5; // edx
  __int64 v6; // rcx
  char result; // al
  __int64 v8; // rdx
  char v9; // dl
  int v10; // r8d
  int v11; // r9d
  char v12; // dl
  int v13; // r8d
  int v14; // r9d

  if ( KeGetCurrentIrql() == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v2, 4, 333, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    Controller_ReportFatalError(a1, 0, 4134, 0, 0LL, 0LL, 0LL);
    return 0;
  }
  else
  {
    v3 = KfRaiseIrql(2u);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( CurrentProcessorNumber >= *(_DWORD *)(a1 + 1272) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v5,
          4,
          334,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          CurrentProcessorNumber);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalError(a1, 0, 4135, 0, 0LL, 0LL, 0LL);
      KeLowerIrql(v3);
      return 0;
    }
    else
    {
      v6 = CurrentProcessorNumber;
      result = 1;
      v8 = 2 * v6;
      *(_BYTE *)(v8 + *(_QWORD *)(a1 + 1264)) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 1264) + v8 + 1) = v3;
    }
  }
  return result;
}
