/*
 * XREFs of DpiRequestDevicePowerState @ 0x140032628
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     DpiSuspendAdapterDpc @ 0x140032280 (DpiSuspendAdapterDpc.c)
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x140032350 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1400324F0 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DpiCancelSuspendAdapterTimer @ 0x140032AD8 (DpiCancelSuspendAdapterTimer.c)
 *     DpiSetDevicePowerTransitionState @ 0x140032BD0 (DpiSetDevicePowerTransitionState.c)
 *     DpiRequestDevicePowerIrp @ 0x140032C50 (DpiRequestDevicePowerIrp.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x140032ECC (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DxgkReportDevicePoweredOn @ 0x14003306C (DxgkReportDevicePoweredOn.c)
 *     DpiSendAsyncResumeAdapterRequest @ 0x1400330C4 (DpiSendAsyncResumeAdapterRequest.c)
 *     DpiCancelAsyncRequest @ 0x1400331A8 (DpiCancelAsyncRequest.c)
 *     DpiDisableD3Requests @ 0x1403760F0 (DpiDisableD3Requests.c)
 */

void __fastcall DpiRequestDevicePowerState(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  WdLogSingleEntry3(9LL, a2, v3, a3);
  WdLogGlobalForLineNumber = 5088;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v6, (__int64)&Dxgk_DpiRequestDevicePowerState);
  if ( a2 == 1 )
  {
    if ( !a3 )
      DpiDisableD3Requests(*(_QWORD *)(v3 + 24));
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 4224), &LockHandle);
    WdLogSingleEntry3(9LL, *(int *)(v3 + 4288), *(int *)(v3 + 4292), 0LL);
    WdLogGlobalForLineNumber = 5116;
    if ( *(_DWORD *)(v3 + 4120) == 1 && *(_DWORD *)(v3 + 236) != 6 && !*(_DWORD *)(v3 + 4288) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5120;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"FdoContext->DeviceThreadState != StateSuspended || FdoContext->DevicePnpState == SurpriseRemoved || Fdo"
                  "Context->DevicePowerTransitionState != DevicePoweredOn",
        5120LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( a3 )
    {
      *(_DWORD *)(v3 + 4292) = 0;
      DpiCancelSuspendAdapterTimer(v3);
    }
    switch ( *(_DWORD *)(v3 + 4288) )
    {
      case 1:
        DpiCancelAsyncRequest(v3);
        v7 = 0LL;
        break;
      case 2:
        if ( a3 != 2 )
        {
          DpiSetDevicePowerTransitionState(v3, 0LL);
          goto LABEL_23;
        }
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
        WdLogGlobalForLineNumber = 5174;
LABEL_35:
        if ( *(_DWORD *)(v3 + 4288) != 6 )
        {
          WdLogSingleEntry3(9LL, v3, *(int *)(v3 + 4288), 2LL);
          v11 = *(_QWORD *)(v3 + 4032);
          WdLogGlobalForLineNumber = 5216;
          DxgkReportDevicePoweredOn(v11);
        }
        goto LABEL_23;
      case 3:
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
        WdLogGlobalForLineNumber = 5198;
        DpiSendAsyncResumeAdapterRequest(v3);
        v7 = 7LL;
        break;
      default:
        if ( *(_DWORD *)(v3 + 4288) != 4 )
        {
          if ( *(_DWORD *)(v3 + 4288) != 5 )
            goto LABEL_22;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
            McTemplateK0pqq_EtwWriteTransfer(
              (unsigned int)(*(_DWORD *)(v3 + 4288) - 4),
              (__int64)&EventPowerRequestDuringD3);
        }
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
        WdLogGlobalForLineNumber = 5156;
        DpiRequestDevicePowerIrp(v3, 1LL);
        v7 = 6LL;
        break;
    }
    DpiSetDevicePowerTransitionState(v3, v7);
LABEL_22:
    if ( a3 != 2 )
      goto LABEL_23;
    goto LABEL_35;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 4224), &LockHandle);
  WdLogSingleEntry3(9LL, *(int *)(v3 + 4288), *(int *)(v3 + 4292), 0LL);
  WdLogGlobalForLineNumber = 5238;
  if ( a3 == 2 )
    *(_DWORD *)(v3 + 4292) = 1;
  if ( !*(_DWORD *)(v3 + 4232) && (a3 != 1 || *(_DWORD *)(v3 + 4292)) )
  {
    v8 = *(_DWORD *)(v3 + 4288);
    if ( v8 == 3 )
    {
      WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
      WdLogGlobalForLineNumber = 5262;
      DpiRequestDevicePowerIrp(v3, 4LL);
      DpiSetDevicePowerTransitionState(v3, 4LL);
      DpiCancelSuspendAdapterTimer(v3);
    }
    else if ( !v8 )
    {
      WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
      WdLogGlobalForLineNumber = 5282;
      DpiSetDevicePowerTransitionState(v3, 1LL);
      v9 = (_QWORD *)(v3 + 4128);
      if ( !*(_QWORD *)(v3 + 4128) )
      {
        *(_DWORD *)(v3 + 4152) = 1;
        v10 = *(_QWORD **)(v3 + 4112);
        if ( *v10 != v3 + 4104 )
          __fastfail(3u);
        *v9 = v3 + 4104;
        *(_QWORD *)(v3 + 4136) = v10;
        *v10 = v9;
        *(_QWORD *)(v3 + 4112) = v9;
        KeSetEvent((PRKEVENT)(v3 + 4072), 0, 0);
      }
    }
  }
  v12 = *(_DWORD *)(v3 + 4288);
  if ( v12 != 4 && v12 != 5 && *(_DWORD *)(v3 + 236) != 6 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)v3);
LABEL_23:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
