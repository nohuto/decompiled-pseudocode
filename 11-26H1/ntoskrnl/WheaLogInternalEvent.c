/*
 * XREFs of WheaLogInternalEvent @ 0x1403DFEC0
 * Callers:
 *     WheaReportHwError @ 0x1403DDD80 (WheaReportHwError.c)
 *     HalpCmciHandler @ 0x14052080C (HalpCmciHandler.c)
 *     HalpCmcLogPollingTimeoutEvent @ 0x14057AB04 (HalpCmcLogPollingTimeoutEvent.c)
 *     IoSaveBugCheckProgress @ 0x1405C7540 (IoSaveBugCheckProgress.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x1405C76A8 (IoSaveBugCheckRecoveryStatus.c)
 *     IopWheaSelLogCheckPoint @ 0x1405C9FC0 (IopWheaSelLogCheckPoint.c)
 *     IopWheaSelLogCheckPointEx @ 0x1405CA070 (IopWheaSelLogCheckPointEx.c)
 *     IopWheaSelLogError @ 0x1405CA160 (IopWheaSelLogError.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405E7784 (KiBugCheckProgressCpusFrozen.c)
 *     KiMcheckAlternateReturn @ 0x1405FCD70 (KiMcheckAlternateReturn.c)
 *     PspVsmLogBugCheckCallback @ 0x140616830 (PspVsmLogBugCheckCallback.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1406D5814 (WheapInitErrorReportDeviceDriver.c)
 *     WheaAttemptRowOffline @ 0x1406D5AE0 (WheaAttemptRowOffline.c)
 *     WheaPersistBadPageToRegistry @ 0x1406D6028 (WheaPersistBadPageToRegistry.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x1406D68BC (WheapCreateRecordFromGenericErrorData.c)
 *     WheapProcessOfflineList @ 0x1406D8C30 (WheapProcessOfflineList.c)
 *     WheaAddErrorSource @ 0x140847770 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x1408479F0 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140847DC0 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1408487D0 (WheapAttemptPhysicalPageOffline.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140848A48 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapClearPoison @ 0x140848C30 (WheapClearPoison.c)
 *     WheapOfflinePage @ 0x140848DE4 (WheapOfflinePage.c)
 *     WheapOfflineRow @ 0x140848F3C (WheapOfflineRow.c)
 *     WheapLogInitEvent @ 0x140849228 (WheapLogInitEvent.c)
 *     WheapProcessWaitingETWEvents @ 0x140849550 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x140849930 (WheaRegChangeNotifyCallback.c)
 *     WheapExecuteRowFailureCheck @ 0x140849DB0 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x14084A058 (WheapPfaLogPageMonitorRemoval.c)
 *     WheapTrackPendingPage @ 0x14084A518 (WheapTrackPendingPage.c)
 *     HalpCmcWorkerRoutine @ 0x140AD4340 (HalpCmcWorkerRoutine.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140BEBDF4 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140BEC05C (HalpInitGenericErrorSourceEntryV2.c)
 *     WheapOpenPolicyRegistryKey @ 0x140CE86F0 (WheapOpenPolicyRegistryKey.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     WheaIsCriticalState @ 0x1403DFCC0 (WheaIsCriticalState.c)
 *     WheaSelLogEvent @ 0x1406D4514 (WheaSelLogEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 */

char __fastcall WheaLogInternalEvent(_DWORD *Src)
{
  _DWORD *v1; // rbx
  int v2; // eax
  unsigned int *v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // esi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
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
  if ( WheapEventingInitialized )
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
                       *(REGHANDLE *)&CmpCallbackListLock.PriorityFloorCounts[8],
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
        v8 = (_QWORD *)((char *)&WheapDeferredEventBuffer + (unsigned int)WheapDeferredEventTotalBytes);
        memmove(v8 + 2, Src, v6 + 32);
        v9 = (_QWORD *)qword_140EFD188;
        WheapDeferredEventTotalBytes = v7;
        if ( *(__int64 **)qword_140EFD188 != &WheapDeferredInternalLogs )
          __fastfail(3u);
        *v8 = &WheapDeferredInternalLogs;
        v8[1] = v9;
        *v9 = v8;
        qword_140EFD188 = (__int64)v8;
      }
      LOBYTE(v2) = KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    }
  }
  return v2;
}
