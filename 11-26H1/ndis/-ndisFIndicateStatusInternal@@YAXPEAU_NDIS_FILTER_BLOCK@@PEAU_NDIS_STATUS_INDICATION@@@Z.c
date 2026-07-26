/*
 * XREFs of ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D210
 * Callers:
 *     ?ndisFIndicateStatusWrapper@@YAXPEAX@Z @ 0x14004D1F0 (-ndisFIndicateStatusWrapper@@YAXPEAX@Z.c)
 *     ?ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D8F0 (-ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009D4F0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x14000D8B0 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140024850 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     NdisMSleep @ 0x14004BF20 (NdisMSleep.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x14004C120 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004D8B0 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D8F0 (-ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14004E440 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004E540 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140074870 (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x140078A60 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14007DF60 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14008F3D0 (-ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x14009C1C0 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ndisFIndicateNicSwitchCapabilitiesChange @ 0x14009C438 (ndisFIndicateNicSwitchCapabilitiesChange.c)
 *     ndisFIndicateReceiveFilterCapabilitiesChange @ 0x14009C5AC (ndisFIndicateReceiveFilterCapabilitiesChange.c)
 *     ndisFIndicateSriovCapabilitiesChange @ 0x14009C71C (ndisFIndicateSriovCapabilitiesChange.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14009CBE8 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B5DFC (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B5E90 (-ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1400C8108 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     ?ndisIfUpdateL2MtuSize@@YA_NPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1400CE608 (-ndisIfUpdateL2MtuSize@@YA_NPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __fastcall ndisFIndicateStatusInternal(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  int StatusCode; // ebx
  _NDIS_MINIPORT_BLOCK *Miniport; // r14
  char v6; // di
  __int64 *StatusBuffer; // r15
  KIRQL v8; // r13
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v10; // rdi
  KSPIN_LOCK *p_Lock; // r12
  KIRQL v12; // al
  KIRQL i; // r13
  unsigned __int8 v14; // al
  _NET_IF_MEDIA_CONNECT_STATE v15; // ecx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp; // eax
  unsigned int v17; // eax
  char v18; // bl
  _NET_IF_MEDIA_CONNECT_STATE v19; // eax
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  char v21; // bl
  int v22; // eax
  _NET_IF_MEDIA_CONNECT_STATE v23; // ecx
  int v24; // edx
  char v25; // al
  char v26; // [rsp+20h] [rbp-78h]
  unsigned __int8 v27[3]; // [rsp+21h] [rbp-77h] BYREF
  unsigned int StatusBufferSize; // [rsp+24h] [rbp-74h]
  int v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h] BYREF
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // [rsp+38h] [rbp-60h]
  int v32; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int64 XmitLinkSpeedIndicateUp; // [rsp+40h] [rbp-58h]
  unsigned __int64 RcvLinkSpeedIndicateUp; // [rsp+48h] [rbp-50h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp; // [rsp+50h] [rbp-48h]
  unsigned int AutoNegotiationFlagsIndicateUp; // [rsp+54h] [rbp-44h]

  StatusCode = a2->StatusCode;
  Miniport = a1->Miniport;
  v6 = 1;
  StatusBuffer = (__int64 *)a2->StatusBuffer;
  StatusBufferSize = a2->StatusBufferSize;
  LOBYTE(v29) = 0;
  v26 = 0;
  if ( StatusCode == 1073873072 )
  {
    if ( a2->SourceHandle != (void *)0x140000000LL )
      return;
    ndisIfUpdateCurrentMacAddress(a1->IfBlock, (const struct _IF_PHYSICAL_ADDRESS_LH *)StatusBuffer);
  }
  else if ( StatusCode == 1073873073 )
  {
    if ( a2->SourceHandle != (void *)0x140000000LL )
      return;
    ndisIfUpdateL2MtuSize(a1->IfBlock, *(_DWORD *)StatusBuffer);
  }
  v32 = 0;
  MediaDuplexStateIndicateUp = a1->MediaDuplexStateIndicateUp;
  XmitLinkSpeedIndicateUp = a1->XmitLinkSpeedIndicateUp;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  PauseFunctionsIndicateUp = a1->PauseFunctionsIndicateUp;
  AutoNegotiationFlagsIndicateUp = a1->AutoNegotiationFlagsIndicateUp;
  v30 = 2621824LL;
  v27[0] = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v8 = v27[0];
  a1->LockThread = KeGetCurrentThread();
  switch ( StatusCode )
  {
    case 1073807372:
      HIDWORD(v30) = 2;
      break;
    case 1073807371:
      HIDWORD(v30) = 1;
      break;
    case 1073807383:
      goto LABEL_19;
    default:
      goto LABEL_71;
  }
  a2->StatusCode = 1073807383;
  a2->StatusBuffer = &v30;
  StatusBuffer = &v30;
  a2->StatusBufferSize = 40;
  StatusCode = 1073807383;
  StatusBufferSize = 40;
LABEL_19:
  v15 = *((_DWORD *)StatusBuffer + 1);
  MediaConnectStateIndicateUp = a1->MediaConnectStateIndicateUp;
  if ( MediaConnectStateIndicateUp != v15 )
  {
    if ( v15 == MediaConnectStateConnected )
    {
      v26 = 1;
    }
    else
    {
      v24 = (unsigned __int8)v29;
      if ( MediaConnectStateIndicateUp == MediaConnectStateConnected )
        v24 = 1;
      v29 = v24;
    }
  }
  a1->MediaConnectStateIndicateUp = v15;
  a1->MediaDuplexStateIndicateUp = *((_DWORD *)StatusBuffer + 2);
  a1->XmitLinkSpeedIndicateUp = StatusBuffer[2];
  a1->RcvLinkSpeedIndicateUp = StatusBuffer[3];
  a1->PauseFunctionsIndicateUp = *((_DWORD *)StatusBuffer + 8);
  a1->AutoNegotiationFlagsIndicateUp = *((_DWORD *)StatusBuffer + 9);
  a1->IfBlock->MediaConnectState = v15;
  a1->IfBlock->MediaDuplexState = a1->MediaDuplexStateIndicateUp;
  a1->IfBlock->RcvLinkSpeed = a1->RcvLinkSpeedIndicateUp;
  a1->IfBlock->XmitLinkSpeed = a1->XmitLinkSpeedIndicateUp;
LABEL_71:
  switch ( StatusCode )
  {
    case 1073872912:
    case 1073872928:
      v25 = ndisFIndicateReceiveFilterCapabilitiesChange((char)a1);
      goto LABEL_75;
    case 1073872960:
    case 1073872976:
      v25 = ndisFIndicateNicSwitchCapabilitiesChange((char)a1);
      goto LABEL_75;
    case 1073872978:
    case 1073872980:
      v25 = ndisFIndicateSriovCapabilitiesChange((char)a1);
LABEL_75:
      v6 = v25;
      break;
    default:
      break;
  }
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
  if ( v6 )
  {
    HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(Miniport, a1, 8u);
    v10 = HigherFilterWithPnpRef;
    if ( HigherFilterWithPnpRef )
    {
      p_Lock = &HigherFilterWithPnpRef->Lock;
      v12 = KeAcquireSpinLockRaiseToDpc(&HigherFilterWithPnpRef->Lock);
      v10->LockThread = KeGetCurrentThread();
      for ( i = v12; FILTER_TEST_FLAG(v10, 0x2000); v10->LockThread = KeGetCurrentThread() )
      {
        v10->LockThread = 0LL;
        KeReleaseSpinLock(p_Lock, i);
        if ( KeGetCurrentIrql() == 2 )
          KeStallExecutionProcessor(1u);
        else
          NdisMSleep(0x32u);
        i = KeAcquireSpinLockRaiseToDpc(p_Lock);
      }
      FILTER_SET_FLAG(v10, 0x2000);
      v10->LockThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
      switch ( StatusCode )
      {
        case 1073807383:
          if ( StatusBuffer && StatusBufferSize >= 0x28 )
          {
            v19 = *((_DWORD *)StatusBuffer + 1);
            MediaConnectState = v10->MediaConnectState;
            if ( MediaConnectState == v19 )
            {
              v21 = v26;
            }
            else if ( v19 == MediaConnectStateConnected )
            {
              v21 = 1;
            }
            else
            {
              v21 = v26;
              if ( MediaConnectState == MediaConnectStateConnected )
                LOBYTE(v29) = 1;
            }
            v10->MediaConnectState = v19;
            v10->MediaDuplexState = *((_DWORD *)StatusBuffer + 2);
            v10->RcvLinkSpeed = StatusBuffer[3];
            v10->XmitLinkSpeed = StatusBuffer[2];
            v10->PauseFunctions = *((_DWORD *)StatusBuffer + 8);
            v10->AutoNegotiationFlags = *((_DWORD *)StatusBuffer + 9);
            goto LABEL_50;
          }
          break;
        case 1073872902:
          v14 = ndisFIndicateOffloadChange(v10, (unsigned __int16 *)StatusBuffer, StatusBufferSize);
          goto LABEL_16;
        case 1073938515:
          ndisFilterIndicatePMCapabilities(v10, a2);
          break;
        case 1073938513:
          v14 = ndisFilterIndicateWoLPatternReject(v10, a2);
          goto LABEL_16;
        case 1073938514:
          v14 = ndisFilterIndicatePMOffloadReject(v10, a2);
          goto LABEL_16;
        default:
          if ( (unsigned int)(StatusCode - 1074073600) <= 1 )
          {
            v14 = ndisFIndicateTimestampChange(v10, StatusCode, StatusBuffer, StatusBufferSize);
LABEL_16:
            if ( !v14 )
            {
LABEL_17:
              NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(v10);
              FILTER_CLEAR_FLAG(v10, 0x2000u);
              v10->LockThread = 0LL;
              KeReleaseSpinLock(p_Lock, i);
              ndisDereferenceRef(&v10->PnPRef.SpinLock, 8u);
              return;
            }
          }
          break;
      }
      v21 = v26;
LABEL_50:
      ndisFIndicateStatusToFilter(v10, a2);
      if ( (_BYTE)v29 )
        ndisSwapFilterHandlersForMediaDisconnect(Miniport, a1, v10);
      if ( v21 )
        ndisRestoreFilterHandlersForMediaDisconnect(Miniport, a1, v10);
      goto LABEL_17;
    }
    ndisMAcquireStInLockWithSpinLock(Miniport, v27);
    v17 = StatusBufferSize;
    if ( StatusCode == 1073807383 && StatusBuffer && StatusBufferSize >= 0x28 )
    {
      v22 = *((_DWORD *)StatusBuffer + 1);
      v23 = Miniport->MediaConnectState;
      if ( v23 != v22 )
      {
        if ( v23 == MediaConnectStateConnected )
        {
          a2->Flags |= 2u;
          ndisIndicateStatusInternal(Miniport, a2, 2u);
          v18 = v26;
LABEL_60:
          ndisSwapFilterHandlersForMediaDisconnect(Miniport, a1, 0LL);
LABEL_25:
          if ( v18 )
            ndisRestoreFilterHandlersForMediaDisconnect(Miniport, a1, 0LL);
          goto LABEL_27;
        }
        if ( v22 == 1 )
        {
          a2->Flags |= 2u;
          v18 = 1;
LABEL_24:
          ndisIndicateStatusInternal(Miniport, a2, 2u);
          if ( !(_BYTE)v29 )
            goto LABEL_25;
          goto LABEL_60;
        }
      }
      v17 = StatusBufferSize;
    }
    a2->Flags |= 2u;
    if ( StatusCode != 1073872902 )
    {
LABEL_23:
      v18 = v26;
      goto LABEL_24;
    }
    if ( v17 >= 0x70
      && *(_BYTE *)StatusBuffer == 0xA7
      && *((_WORD *)StatusBuffer + 1) >= 0x70u
      && *((_BYTE *)StatusBuffer + 1) )
    {
      if ( Miniport->Offload )
        goto LABEL_23;
      ndisMAllocateMiniportOffload(Miniport);
    }
LABEL_27:
    ndisMReleaseStInLockAndSpinLock(Miniport, v27[0]);
  }
}
