/*
 * XREFs of Controller_LowerAndTrackIrql @ 0x14000FED0
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x140008180 (Interrupter_WdfEvtInterruptDisable.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x140008320 (Interrupter_WdfEvtInterruptEnable.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008BE4 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000D648 (RootHub_AcquireReadModifyWriteLock.c)
 *     Control_WdfEvtIoDefault @ 0x14000E0E0 (Control_WdfEvtIoDefault.c)
 *     Control_Transfer_Map @ 0x14000EFE0 (Control_Transfer_Map.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x14000FAB0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x140010120 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x140019DB0 (Bulk_MapStage.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x14001ABCC (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     Isoch_MapStage @ 0x14001AF10 (Isoch_MapStage.c)
 *     Interrupter_AcquireEventRingLock @ 0x140028690 (Interrupter_AcquireEventRingLock.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140029364 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x14002A450 (Interrupter_WdfEvtInterruptWorkItem.c)
 *     Command_HandleCommandCompletionEvent @ 0x14002B298 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14002B8E4 (Command_HandleCommandRingStoppedEvent.c)
 *     RootHub_DetectLinkErrorState @ 0x14002CF50 (RootHub_DetectLinkErrorState.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14002DA10 (Controller_WdfEvtDeviceArmWakeFromS0.c)
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
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x140046804 (WPP_RECORDER_SF_sds.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Controller_LowerAndTrackIrql(_QWORD *a1)
{
  __int64 CurrentProcessorNumber; // rdi
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rdx
  KIRQL v6; // cl
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rax
  KIRQL CurrentIrql; // al
  int v10; // edx
  char v11; // dl
  int v12; // r8d
  int v13; // r9d

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( KeGetCurrentIrql() == 2 )
  {
    if ( (unsigned int)CurrentProcessorNumber >= *((_DWORD *)a1 + 318) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_d(
          a1[9],
          v3,
          4,
          335,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          CurrentProcessorNumber);
      }
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v7, 2uLL, 1uLL);
    }
    v4 = a1[158];
    v5 = 2 * CurrentProcessorNumber;
    v6 = *(_BYTE *)(2 * CurrentProcessorNumber + v4 + 1);
    if ( !*(_BYTE *)(2 * CurrentProcessorNumber + v4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          a1[9],
          v5,
          4,
          336,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          CurrentProcessorNumber);
      }
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(WdfDriverGlobals, *a1);
      KeBugCheckEx(0x144u, 4uLL, v8, 2uLL, 2uLL);
    }
    *(_BYTE *)(v5 + v4) = 0;
    *(_BYTE *)(a1[158] + v5 + 1) = -1;
    KeLowerIrql(v6);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(a1[9], v10, 4, 337, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, CurrentIrql);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    Controller_ReportFatalError((_DWORD)a1, 0, 4136, 0, 0LL, 0LL, 0LL);
  }
}
