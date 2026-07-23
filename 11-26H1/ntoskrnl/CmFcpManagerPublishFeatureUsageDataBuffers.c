/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140B05B68
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffersWorker @ 0x140B05B50 (CmFcpManagerPublishFeatureUsageDataBuffersWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404E2BF8 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140535140 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwAlpcDisconnectPort @ 0x140729080 (ZwAlpcDisconnectPort.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     ExUnsubscribeWnfStateChange @ 0x1409FD2E0 (ExUnsubscribeWnfStateChange.c)
 *     CmFcpConnectToAlpcServer @ 0x140B05DC8 (CmFcpConnectToAlpcServer.c)
 *     CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x140B05F98 (CmFcpManagerOnFeatureUsageDataTransferComplete.c)
 */

NTSTATUS __fastcall CmFcpManagerPublishFeatureUsageDataBuffers(_QWORD *a1)
{
  void *v2; // rcx
  int v3; // eax
  struct _KLOCK_ENTRIES *v4; // r9
  volatile signed __int64 *v5; // rbx
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rsi
  HANDLE v9; // rsi
  __int64 *i; // r14
  signed __int64 v11; // rax
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rbp
  NTSTATUS result; // eax
  __int64 v17; // rdx
  HANDLE PortHandle; // [rsp+60h] [rbp+8h] BYREF

  PortHandle = 0LL;
  KeWaitForSingleObject(a1 + 229, Executive, 0, 0, 0LL);
  v2 = (void *)a1[228];
  if ( v2 )
  {
    ExUnsubscribeWnfStateChange(v2);
    a1[228] = 0LL;
  }
  v3 = CmFcpConnectToAlpcServer(&PortHandle, 0LL);
  if ( v3 == -1073741772 || v3 == -1073740031 )
  {
    result = ZwUpdateWnfStateData(&WNF_CMFC_FEATURE_USAGE_DATA_PUBLISH_READY, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( result < 0 )
      goto LABEL_24;
    LOBYTE(v17) = 1;
    v3 = CmFcpConnectToAlpcServer(&PortHandle, v17);
  }
  if ( v3 < 0 || v3 == 258 )
  {
    result = CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)a1);
LABEL_24:
    v9 = PortHandle;
    goto LABEL_25;
  }
  v5 = a1 + 184;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 184), 0LL, 0LL, v4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 368, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 184, v6, (__int64)(a1 + 184));
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = PortHandle;
  for ( i = (__int64 *)a1[179]; ; i = (__int64 *)*i )
  {
    v11 = _InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6;
    if ( i == a1 + 179 )
      break;
    if ( v11 == 2 )
      ExfTryToWakePushLock(a1 + 184);
    KeAbPostRelease((unsigned __int64)(a1 + 184));
    if ( (int)CmFcpSendFeatureUsageReportAlpcMessage(v9, i + 4, *((_DWORD *)i + 4)) < 0 )
    {
      CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)a1);
      goto LABEL_30;
    }
    *((_DWORD *)i + 6) = i[3] & 0xFFFFFFF8 | 2;
    v13 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 184), 0LL, 0LL, v12);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 184, v13, (__int64)(a1 + 184));
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
  }
  if ( v11 == 2 )
    ExfTryToWakePushLock(a1 + 184);
  KeAbPostRelease((unsigned __int64)(a1 + 184));
LABEL_30:
  result = CmFcpManagerOnFeatureUsageDataTransferComplete(a1);
LABEL_25:
  if ( v9 )
  {
    ZwAlpcDisconnectPort(v9, 0);
    return ZwClose(v9);
  }
  return result;
}
