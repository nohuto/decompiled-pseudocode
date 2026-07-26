/*
 * XREFs of ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086480
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x14004B070 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A02B0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140008FD0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxptdq_EtwWriteTransfer @ 0x140009100 (McTemplateK0jqxptdq_EtwWriteTransfer.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1400091D0 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x140023710 (WPP_RECORDER_SF_Dqqd.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z @ 0x140027010 (-ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x140075990 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140086C20 (-ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140088490 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1400886C0 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140155C40 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisMDoOidRequest(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _KEVENT *v1; // r12
  unsigned __int64 *p_Lock; // rbp
  unsigned int *p_PnPFlags; // rdi
  _NDIS_OID_REQUEST *p_Blink; // r14
  _LIST_ENTRY *v6; // r15
  char v7; // si
  KIRQL v8; // r9
  unsigned int WSyncFlags; // edx
  _LIST_ENTRY *p_OidRequestList; // rcx
  _LIST_ENTRY *Flink; // r8
  _KEVENT *v12; // rax
  _LIST_ENTRY *v13; // rax
  KIRQL v14; // al
  NDIS_OID Oid; // r13d
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // r8
  char v19; // di
  KIRQL v20; // al
  KIRQL v21; // r12
  int v22; // ebp
  NDIS_REQUEST_TYPE RequestType; // edx
  unsigned int *v24; // r8
  unsigned int v25; // ecx
  _DEVICE_POWER_STATE DriverPowerState; // eax
  _DEVICE_POWER_STATE v27; // esi
  unsigned __int64 *p_PowerStateLock; // rdi
  KIRQL v29; // al
  unsigned __int64 *v30; // rdi
  unsigned __int64 *v31; // rcx
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  unsigned int Flags; // edi
  KIRQL v34; // al
  KIRQL v35; // r15
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  int v37; // edx
  __int64 v38; // rcx
  int v39; // r8d
  int v40; // r9d
  int Timeout; // [rsp+20h] [rbp-A8h]
  struct _KTIMER Timer; // [rsp+50h] [rbp-78h] BYREF
  int v43; // [rsp+D0h] [rbp+8h] BYREF
  _KEVENT *AllRequestsCompletedEvent; // [rsp+D8h] [rbp+10h]

  v1 = 0LL;
  AllRequestsCompletedEvent = 0LL;
  p_Lock = &a1->Lock;
  p_PnPFlags = &a1->PnPFlags;
  while ( 1 )
  {
    v43 = -1073741823;
    p_Blink = 0LL;
    v6 = 0LL;
    v7 = 0;
    v8 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    WSyncFlags = a1->WSyncFlags;
    a1->MiniportThread = KeGetCurrentThread();
    if ( (WSyncFlags & 1) != 0 )
      goto LABEL_14;
    p_OidRequestList = &a1->OidRequestList;
    Flink = a1->OidRequestList.Flink;
    if ( Flink != &a1->OidRequestList )
    {
      p_PnPFlags = &a1->PnPFlags;
      if ( (a1->PnPFlags & 0x20000) == 0 )
      {
        v6 = a1->OidRequestList.Flink;
        a1->WSyncFlags = WSyncFlags | 1;
        if ( Flink->Blink != p_OidRequestList || (v13 = Flink->Flink, Flink->Flink->Blink != Flink) )
          __fastfail(3u);
        p_OidRequestList->Flink = v13;
        p_Blink = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
        v13->Blink = p_OidRequestList;
        a1->ProcessedOidRequest = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
LABEL_14:
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(p_Lock, v8);
        goto LABEL_15;
      }
    }
    if ( (*p_PnPFlags & 0x20000) != 0
      && (v7 = 1, !ndisNDPQualityWinter26IsEnabled)
      && (v12 = a1->AllRequestsCompletedEvent) != 0LL )
    {
      AllRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
      a1->AllRequestsCompletedEvent = 0LL;
      a1->MiniportThread = 0LL;
      v1 = v12;
      KeReleaseSpinLock(p_Lock, v8);
      ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
    }
    else
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v8);
      if ( v7 )
        ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
    }
LABEL_15:
    if ( ndisNDPQualityWinter26IsEnabled )
    {
      v14 = KeAcquireSpinLockRaiseToDpc(p_Lock);
      if ( a1->AllRequestsCompletedEvent )
      {
        v1 = a1->AllRequestsCompletedEvent;
        AllRequestsCompletedEvent = v1;
        a1->AllRequestsCompletedEvent = 0LL;
      }
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v14);
    }
    if ( v1 )
    {
      KeSetEvent(v1, 0, 0);
      AllRequestsCompletedEvent = 0LL;
    }
    if ( !v6 )
      break;
    Oid = p_Blink->DATA.QUERY_INFORMATION.Oid;
    v16 = ndisPreProcessOid(a1, p_Blink, a1->Header.Type, &v43);
    v19 = v16;
    if ( (byte_14011D041 & 0x40) != 0 )
      McTemplateK0jqxptdq_EtwWriteTransfer(
        a1->IfIndex,
        v17,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)p_Blink,
        v16,
        v43,
        Oid);
    if ( v19 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v17, v18, 0x14u, Timeout);
      v1 = AllRequestsCompletedEvent;
      p_PnPFlags = &a1->PnPFlags;
    }
    else
    {
      v20 = KeAcquireSpinLockRaiseToDpc(p_Lock);
      a1->MiniportThread = KeGetCurrentThread();
      v21 = v20;
      v22 = 0;
      if ( (a1->Flags & 0x80000) != 0 )
      {
        v22 = -1073676275;
        p_PnPFlags = &a1->PnPFlags;
      }
      else
      {
        RequestType = p_Blink->RequestType;
        v24 = &a1->PnPFlags;
        if ( RequestType == NdisRequestQueryStatistics )
        {
          p_PnPFlags = &a1->PnPFlags;
          if ( (*v24 & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0 )
          {
            v22 = -2147483633;
            goto LABEL_86;
          }
        }
        v25 = *v24;
        if ( (*v24 & 0x100) != 0 )
        {
          v22 = -1073676280;
LABEL_85:
          p_PnPFlags = &a1->PnPFlags;
          goto LABEL_86;
        }
        if ( (v25 & 0x20000) != 0
          || ((DriverPowerState = a1->DriverPowerState, DriverPowerState == PowerDeviceD1)
           || (unsigned int)(DriverPowerState - 3) <= 1)
          && p_Blink->DATA.QUERY_INFORMATION.Oid != -50265855 )
        {
          if ( (RequestType & 0xFFFFFFFD) == 0 )
          {
            v22 = -1073741823;
            p_Blink->DATA.QUERY_INFORMATION.BytesWritten = 0;
            goto LABEL_85;
          }
          p_PnPFlags = &a1->PnPFlags;
          if ( RequestType == NdisRequestSetInformation )
          {
            v22 = -1071448017;
            if ( (v25 & 0x20000) != 0 )
              v22 = -1073741823;
            p_Blink->DATA.QUERY_INFORMATION.BytesWritten = p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength;
          }
          else if ( RequestType == NdisRequestMethod )
          {
            p_Blink->DATA.METHOD_INFORMATION.BytesRead = 0;
            v22 = -1073741823;
          }
        }
        else
        {
          ++a1->RequestCount;
          a1->PendingOidRequest = p_Blink;
          if ( p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855
            && p_Blink->RequestType == NdisRequestSetInformation
            && p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength >= 4
            && (v27 = *(_DWORD *)p_Blink->DATA.QUERY_INFORMATION.InformationBuffer, (unsigned int)(v27 - 1) <= 3) )
          {
            a1->MiniportThread = 0LL;
            KeReleaseSpinLock(&a1->Lock, v21);
            p_PowerStateLock = &a1->PowerStateLock;
            v29 = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
            if ( a1->PendingReturnNBLCount )
            {
              do
              {
                KeReleaseSpinLock(&a1->PowerStateLock, v29);
                memset(&Timer, 0, sizeof(Timer));
                KeInitializeTimerEx(&Timer, SynchronizationTimer);
                KeSetTimer(&Timer, (LARGE_INTEGER)-500LL, 0LL);
                KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
                v29 = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
              }
              while ( a1->PendingReturnNBLCount );
              p_PowerStateLock = &a1->PowerStateLock;
            }
            a1->PrevDriverPowerState = a1->DriverPowerState;
            a1->DriverPowerState = v27;
            KeReleaseSpinLock(p_PowerStateLock, v21);
            v30 = &a1->Lock;
            v21 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
            a1->MiniportThread = KeGetCurrentThread();
          }
          else
          {
            v30 = &a1->Lock;
          }
          if ( (a1->Flags & 0x20000) != 0 )
            LODWORD(v6[1].Flink) |= 0x2000u;
          LODWORD(v6[1].Flink) |= 0x10000u;
          v31 = &a1->Lock;
          a1->MiniportThread = 0LL;
          if ( a1->MajorNdisVersion < 6u )
          {
            KeReleaseSpinLockFromDpcLevel(v31);
            v22 = ndisMOidRequestToRequest(a1, p_Blink);
            KeAcquireSpinLockAtDpcLevel(v30);
          }
          else
          {
            KeReleaseSpinLock(v31, v21);
            if ( (a1->Flags & 0x20000) != 0 )
            {
              v22 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, 0LL, p_Blink);
            }
            else if ( (a1->Flags & 0x80u) == 0 )
            {
              if ( a1->SelectiveSuspend )
              {
                if ( (a1->Flags & 0x80u) == 0 )
                  ndisWdmSetBusySync(a1, 33LL, Oid);
                else
                  ndisWdfSetBusySync(a1, 33LL, Oid);
              }
              v22 = ndisMInvokeOidRequest(a1, p_Blink);
              if ( v22 != 259 )
              {
                SelectiveSuspend = a1->SelectiveSuspend;
                if ( SelectiveSuspend )
                {
                  Flags = a1->Flags;
                  v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->SelectiveSuspend);
                  *((_DWORD *)SelectiveSuspend + 128) &= ~1u;
                  v35 = v34;
                  if ( (Flags & 0x80u) != 0
                    && !*((_DWORD *)SelectiveSuspend + 128)
                    && !*((_DWORD *)SelectiveSuspend + 129)
                    && !*((_DWORD *)SelectiveSuspend + 132)
                    && !*((_DWORD *)SelectiveSuspend + 133)
                    && !*((_DWORD *)SelectiveSuspend + 130)
                    && !*((_DWORD *)SelectiveSuspend + 131)
                    && !*((_DWORD *)SelectiveSuspend + 144)
                    && !*((_DWORD *)SelectiveSuspend + 127) )
                  {
                    CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
                    CxBlockFromMiniport->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v35);
                }
              }
            }
            else
            {
              v22 = ndisMInvokeOidRequest(a1, p_Blink);
            }
            v21 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
          }
          --a1->RequestCount;
          p_PnPFlags = &a1->PnPFlags;
          if ( v22 != 259 )
          {
            p_Blink = a1->PendingOidRequest;
            p_PnPFlags = &a1->PnPFlags;
            a1->PendingOidRequest = 0LL;
          }
        }
      }
LABEL_86:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v21);
      if ( v22 != 259 && p_Blink )
      {
        memset(&Timer, 0, 48);
        if ( (byte_14011D041 & 0x40) != 0 )
          McTemplateK0jqxqdq_EtwWriteTransfer(
            v38,
            (__int64)&CompletingOidRequestMiniportEx,
            (__int64)&a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            p_Blink->DATA.QUERY_INFORMATION.Oid,
            v22);
        Timer.TimerListEntry.Flink = (_LIST_ENTRY *)p_Blink;
        LODWORD(Timer.TimerListEntry.Blink) = v22;
        *(_QWORD *)&Timer.Header.Lock = a1;
        ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&Timer, v37, v39, v40);
      }
      v1 = AllRequestsCompletedEvent;
      p_Lock = &a1->Lock;
    }
  }
}
