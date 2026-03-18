/*
 * XREFs of WheaLogInternalEvent @ 0x1406520E0
 * Callers:
 *     WheaReportHwError @ 0x140353D30 (WheaReportHwError.c)
 *     HalpCmcLogPollingTimeoutEvent @ 0x14053C5EC (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpCmciHandler @ 0x140540C78 (HalpCmciHandler.c)
 *     IoSaveBugCheckProgress @ 0x14058E6E0 (IoSaveBugCheckProgress.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x14058E7BC (IoSaveBugCheckRecoveryStatus.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405AF604 (KiBugCheckProgressCpusFrozen.c)
 *     KiMcheckAlternateReturn @ 0x1405C5660 (KiMcheckAlternateReturn.c)
 *     PspVsmLogBugCheckCallback @ 0x1405DA680 (PspVsmLogBugCheckCallback.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1406508B8 (WheapInitErrorReportDeviceDriver.c)
 *     WheaAttemptRowOffline @ 0x140650B80 (WheaAttemptRowOffline.c)
 *     WheaPersistBadPageToRegistry @ 0x1406510BC (WheaPersistBadPageToRegistry.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x140651814 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapProcessOfflineList @ 0x1406538A0 (WheapProcessOfflineList.c)
 *     WheaAddErrorSource @ 0x1407B71B0 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x1407B7430 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x1407B7800 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407B814C (WheapAttemptPhysicalPageOffline.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1407B83C8 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapClearPoison @ 0x1407B859C (WheapClearPoison.c)
 *     WheapOfflinePage @ 0x1407B8750 (WheapOfflinePage.c)
 *     WheapOfflineRow @ 0x1407B88A8 (WheapOfflineRow.c)
 *     WheapLogInitEvent @ 0x1407B8B98 (WheapLogInitEvent.c)
 *     WheapProcessWaitingETWEvents @ 0x1407B8EC0 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x1407B9290 (WheaRegChangeNotifyCallback.c)
 *     WheapExecuteRowFailureCheck @ 0x1407B9718 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x1407B99BC (WheapPfaLogPageMonitorRemoval.c)
 *     WheapTrackPendingPage @ 0x1407B9E64 (WheapTrackPendingPage.c)
 *     HalpCmcWorkerRoutine @ 0x140A4B1B0 (HalpCmcWorkerRoutine.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B3DCD8 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B3DF40 (HalpInitGenericErrorSourceEntryV2.c)
 *     WheapOpenPolicyRegistryKey @ 0x140C33A68 (WheapOpenPolicyRegistryKey.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     WheaIsCriticalState @ 0x140478350 (WheaIsCriticalState.c)
 *     WheaSelLogEvent @ 0x14064F614 (WheaSelLogEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 */

char __fastcall WheaLogInternalEvent(_DWORD *Src)
{
  _DWORD *v1; // rbx
  int v2; // eax
  unsigned int *v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
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
    WheaSelLogEvent((char *)Src);
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
                       (REGHANDLE)WheapDispatchPtr.Dpc.DeferredRoutine,
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
        v9 = (_QWORD *)qword_140EF86E8;
        WheapDeferredEventTotalBytes = v7;
        if ( *(__int64 **)qword_140EF86E8 != &WheapDeferredInternalLogs )
          __fastfail(3u);
        *v8 = &WheapDeferredInternalLogs;
        v8[1] = v9;
        *v9 = v8;
        qword_140EF86E8 = (__int64)v8;
      }
      LOBYTE(v2) = KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    }
  }
  return v2;
}
