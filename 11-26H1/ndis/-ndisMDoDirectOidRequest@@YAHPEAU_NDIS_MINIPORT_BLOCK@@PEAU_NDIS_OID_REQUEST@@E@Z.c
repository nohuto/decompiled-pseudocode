/*
 * XREFs of ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140052D40
 * Callers:
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140009300 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140042140 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x140052CB0 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007930 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007AE0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140008FD0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000E6D0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140023BB0 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMDoDirectOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, char a3)
{
  unsigned int v6; // esi
  struct _KEVENT *AllDirectRequestsCompletedEvent; // r12
  int v9; // edx
  KIRQL v10; // bl
  NDIS_REQUEST_TYPE RequestType; // ecx
  unsigned int v12; // edx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r15
  NDIS_OID Oid; // ebp
  NDIS_STATUS v15; // eax
  struct _NDIS_OID_REQUEST *v16; // rbx
  struct _NDIS_OID_REQUEST *v17; // rdx
  KIRQL v18; // al
  bool v19; // zf
  KIRQL v20; // dl
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbp
  unsigned int Flags; // ebx
  KIRQL v23; // al
  KIRQL v24; // r15
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  char v27[8]; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+38h] [rbp-40h]
  struct _NDIS_OID_REQUEST *v29; // [rsp+88h] [rbp+10h] BYREF

  v6 = -1073741823;
  AllDirectRequestsCompletedEvent = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x12u,
      (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
      (char)a1,
      a2);
  if ( !a3
    && a1->SelectiveSuspend
    && !((a1->Flags & 0x80u) == 0
       ? ndisWdmSetBusyAsync((__int64)a1, 1u, 0x32u, (__int64)a2, 0)
       : ndisWdfSetBusyAsync((__int64)a1, 1u, 0x32u, (__int64)a2, 0)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        11,
        19,
        (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
        (char)a2);
    }
    v6 = 259;
    goto LABEL_69;
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( a1->DirectOidRequestCount >= 0x4E20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqLd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x14u,
        (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
        (char)a1,
        (char)a2,
        32,
        a1->DirectOidRequestCount);
    v6 = -1073741670;
    goto LABEL_53;
  }
  if ( (a1->PnPFlags & 0x20000) != 0 )
  {
    v6 = -1073676276;
LABEL_53:
    a1->MiniportThread = 0LL;
    v20 = v10;
LABEL_54:
    KeReleaseSpinLock(&a1->Lock, v20);
    if ( !a3 )
    {
      SelectiveSuspend = a1->SelectiveSuspend;
      if ( SelectiveSuspend )
      {
        Flags = a1->Flags;
        v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->SelectiveSuspend);
        --*((_DWORD *)SelectiveSuspend + 132);
        v24 = v23;
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
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v24);
      }
    }
    if ( AllDirectRequestsCompletedEvent )
      KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
    goto LABEL_69;
  }
  if ( (a1->Flags & 0x80000) != 0 )
  {
    v6 = -1073676275;
    goto LABEL_53;
  }
  RequestType = a2->RequestType;
  if ( RequestType == NdisRequestQueryStatistics
    && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
  {
    v6 = -2147483633;
    goto LABEL_53;
  }
  v12 = a1->PnPFlags & 0x20100;
  if ( v12 || a1->CurrentDevicePowerState > PowerDeviceD0 )
  {
    if ( (RequestType & 0xFFFFFFFD) != 0 )
    {
      if ( RequestType == NdisRequestSetInformation )
      {
        v6 = -1071448017;
        a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        if ( v12 )
          v6 = 0;
      }
      else if ( RequestType == NdisRequestMethod )
      {
        a2->DATA.METHOD_INFORMATION.BytesRead = 0;
      }
    }
    else
    {
      a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
    }
    goto LABEL_53;
  }
  ++a1->DirectOidRequestCount;
  *(_DWORD *)&a2->NdisReserved[16] |= 0x10000u;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v10);
  DriverHandle = a1->DriverHandle;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v29 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v27 = Oid;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
      (char)a1,
      *(_QWORD *)v27);
  }
  v15 = ndisOidCloneForCompatibility(&a1->Header, a2, 0, &v29);
  v16 = v29;
  v6 = v15;
  if ( !v15 )
  {
    if ( v29 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x10u,
        (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
        (char)a2,
        (char)v29,
        v29->DATA.QUERY_INFORMATION.Oid);
    v17 = a2;
    if ( v16 )
      v17 = v16;
    v6 = DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler(a1->MiniportAdapterContext, v17);
  }
  if ( v6 != 259 && v16 )
    ndisOidFreeInternalCloneRequest(&a1->Header, v16, 0, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v28) = v6;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
      (char)a1,
      Oid,
      v28);
  }
  if ( v6 != 259 )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    v19 = a1->DirectOidRequestCount-- == 1;
    v20 = v18;
    if ( v19 && a1->AllDirectRequestsCompletedEvent )
    {
      AllDirectRequestsCompletedEvent = a1->AllDirectRequestsCompletedEvent;
      a1->AllDirectRequestsCompletedEvent = 0LL;
    }
    a1->MiniportThread = 0LL;
    goto LABEL_54;
  }
LABEL_69:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v28) = v6;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x15u,
      (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
      (char)a1,
      (char)a2,
      v28);
  }
  return v6;
}
