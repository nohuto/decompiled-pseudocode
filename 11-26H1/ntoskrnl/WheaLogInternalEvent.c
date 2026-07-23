/*
 * XREFs of WheaLogInternalEvent @ 0x1403E30B0
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     HalpCmciHandler @ 0x140522EB0 (HalpCmciHandler.c)
 *     HalpCmcLogPollingTimeoutEvent @ 0x14057D034 (HalpCmcLogPollingTimeoutEvent.c)
 *     IoSaveBugCheckProgress @ 0x1405C9E10 (IoSaveBugCheckProgress.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x1405C9F78 (IoSaveBugCheckRecoveryStatus.c)
 *     IopWheaSelLogCheckPoint @ 0x1405CC890 (IopWheaSelLogCheckPoint.c)
 *     IopWheaSelLogCheckPointEx @ 0x1405CC940 (IopWheaSelLogCheckPointEx.c)
 *     IopWheaSelLogError @ 0x1405CCA30 (IopWheaSelLogError.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405EA0F4 (KiBugCheckProgressCpusFrozen.c)
 *     KiMcheckAlternateReturn @ 0x1405FF7C0 (KiMcheckAlternateReturn.c)
 *     PspVsmLogBugCheckCallback @ 0x140619820 (PspVsmLogBugCheckCallback.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1406D98F4 (WheapInitErrorReportDeviceDriver.c)
 *     WheaAttemptRowOffline @ 0x1406D9BC0 (WheaAttemptRowOffline.c)
 *     WheaPersistBadPageToRegistry @ 0x1406DA108 (WheaPersistBadPageToRegistry.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x1406DA99C (WheapCreateRecordFromGenericErrorData.c)
 *     WheapProcessOfflineList @ 0x1406DCDC0 (WheapProcessOfflineList.c)
 *     WheaAddErrorSource @ 0x14084D9D0 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x14084DC80 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x14084E090 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14084EAA0 (WheapAttemptPhysicalPageOffline.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x14084ED18 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapClearPoison @ 0x14084EF00 (WheapClearPoison.c)
 *     WheapOfflinePage @ 0x14084F0B4 (WheapOfflinePage.c)
 *     WheapOfflineRow @ 0x14084F20C (WheapOfflineRow.c)
 *     WheapLogInitEvent @ 0x14084F4F8 (WheapLogInitEvent.c)
 *     WheapProcessWaitingETWEvents @ 0x14084F860 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x14084FC40 (WheaRegChangeNotifyCallback.c)
 *     WheapExecuteRowFailureCheck @ 0x1408500C0 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x140850368 (WheapPfaLogPageMonitorRemoval.c)
 *     WheapTrackPendingPage @ 0x140850828 (WheapTrackPendingPage.c)
 *     HalpCmcWorkerRoutine @ 0x140AD17A0 (HalpCmcWorkerRoutine.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140BF1DF4 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140BF205C (HalpInitGenericErrorSourceEntryV2.c)
 *     WheapOpenPolicyRegistryKey @ 0x140CEEA90 (WheapOpenPolicyRegistryKey.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     WheaIsCriticalState @ 0x1403E2EB0 (WheaIsCriticalState.c)
 *     WheaSelLogEvent @ 0x1406D8594 (WheaSelLogEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 */

char __fastcall WheaLogInternalEvent(_DWORD *Src)
{
  _DWORD *v1; // rbx
  int v2; // eax
  unsigned int *v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // esi
  struct _LIST_ENTRY *v8; // rbx
  struct _LIST_ENTRY *Flink; // rax
  _QWORD InputBuffer[4]; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  char *v13; // [rsp+78h] [rbp-19h]
  __int64 v14; // [rsp+80h] [rbp-11h]
  char *v15; // [rsp+88h] [rbp-9h]
  __int64 v16; // [rsp+90h] [rbp-1h]
  _DWORD *v17; // [rsp+98h] [rbp+7h]
  __int64 v18; // [rsp+A0h] [rbp+Fh]
  unsigned int *v19; // [rsp+A8h] [rbp+17h]
  __int64 v20; // [rsp+B0h] [rbp+1Fh]
  _DWORD *v21; // [rsp+B8h] [rbp+27h]
  unsigned int v22; // [rsp+C0h] [rbp+2Fh]
  int v23; // [rsp+C4h] [rbp+33h]

  v1 = Src + 6;
  v2 = Src[6];
  v3 = Src + 2;
  if ( (v2 & 4) != 0 )
  {
    v5 = *v3;
    InputBuffer[0] = Src;
    InputBuffer[1] = v5;
    InputBuffer[2] = 0LL;
    InputBuffer[3] = 15LL;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    *v1 &= ~4u;
    v2 = *v1;
  }
  if ( (v2 & 8) != 0 )
  {
    WheaSelLogEvent(Src);
    *v1 &= ~8u;
    v2 = *v1;
  }
  if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[48] )
  {
    if ( (v2 & 2) != 0 )
    {
      LOBYTE(v2) = WheaIsCriticalState();
      if ( !(_BYTE)v2 )
      {
        UserData.Ptr = (ULONGLONG)(Src + 3);
        *(_QWORD *)&UserData.Size = 4LL;
        v13 = (char *)(Src + 4);
        v14 = 4LL;
        v15 = (char *)(Src + 5);
        v22 = *v3;
        v16 = 4LL;
        v17 = v1;
        v18 = 4LL;
        v19 = v3;
        v20 = 4LL;
        v21 = Src;
        v23 = 0;
        LOBYTE(v2) = EtwWriteEx(
                       *(REGHANDLE *)&CmpContextListLock.SchedulerApcFill5[80],
                       &EVENT_WHEA_LOG_ENTRY,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       6u,
                       &UserData);
      }
    }
  }
  else
  {
    LOBYTE(v2) = KeGetCurrentIrql();
    if ( (unsigned __int8)v2 < 2u )
    {
      KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
      v6 = (unsigned int)Src[7];
      v7 = v6 + WheapDeferredEventTotalBytes + 48;
      if ( v7 < 0x1000 )
      {
        v8 = (struct _LIST_ENTRY *)((char *)&WheapDeferredEventBuffer + (unsigned int)WheapDeferredEventTotalBytes);
        memmove(&v8[1], Src, v6 + 32);
        Flink = CmpContextListLock.SuspendEvent.Header.WaitListHead.Flink;
        WheapDeferredEventTotalBytes = v7;
        if ( CmpContextListLock.SuspendEvent.Header.WaitListHead.Flink->Flink != (struct _LIST_ENTRY *)&CmpContextListLock.SuspendEvent )
          __fastfail(3u);
        v8->Flink = (struct _LIST_ENTRY *)&CmpContextListLock.SuspendEvent;
        v8->Blink = Flink;
        Flink->Flink = v8;
        CmpContextListLock.SuspendEvent.Header.WaitListHead.Flink = v8;
      }
      LOBYTE(v2) = KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    }
  }
  return v2;
}
