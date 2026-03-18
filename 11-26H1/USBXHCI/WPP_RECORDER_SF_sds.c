/*
 * XREFs of WPP_RECORDER_SF_sds @ 0x140046804
 * Callers:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140009050 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x14000A460 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x14000B150 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x14000BBF0 (RootHub_UcxEvtClearPortFeature.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x14000FAB0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Bulk_MapStage @ 0x140019DB0 (Bulk_MapStage.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1400285B0 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x140028690 (Interrupter_AcquireEventRingLock.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x14002EA28 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x14002F72C (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140036890 (XilEndpoint_AllocateStreamContextArray.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x140037500 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x140038364 (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     XilUsbDevice_GetDeviceContextBufferSize @ 0x14003D7E4 (XilUsbDevice_GetDeviceContextBufferSize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        char a7,
        const char *a8)
{
  const char *v8; // rbx
  __int64 v9; // rdi
  const char *v10; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  const char *v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  v10 = a6;
  v12 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a8[v13] );
    }
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids,
      10LL,
      v16,
      v15,
      &a7);
  }
  if ( v8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v8[v17] );
  }
  if ( !v8 )
    v8 = "NULL";
  v18 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v12 = v9 + 1;
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v10 = "NULL";
  LOWORD(v20) = 10;
  return WppAutoLogTrace(a1, 2LL, 2LL, &WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids, v20, v10, v12, &a7, 4LL, v8);
}
