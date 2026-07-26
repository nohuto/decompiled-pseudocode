/*
 * XREFs of ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006E7E0
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1400A0E2C (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000E6D0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140051740 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x14006BD10 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 */

void __fastcall ndisMAbortRequests(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _LIST_ENTRY *p_OidRequestList; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v4; // rcx
  _LIST_ENTRY **v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int128 v9; // xmm0
  unsigned int v10; // r8d
  char *v11; // rdx
  __int128 v12; // xmm1
  __int64 v13; // rdi
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  _NDIS_OID_REQUEST *PendingOidRequest; // rdi
  __int64 v18; // r8
  __int64 v19; // rdx
  struct _NDIS_REQUEST *PendingRequest; // rsi
  char *v21; // rdx
  __int128 v22; // xmm0
  struct _GUID *v23; // [rsp+20h] [rbp-29h]
  __int64 v24; // [rsp+30h] [rbp-19h]
  __int128 v25; // [rsp+40h] [rbp-9h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v26; // [rsp+50h] [rbp+7h] BYREF
  __int128 v27; // [rsp+58h] [rbp+Fh]
  __int64 v28; // [rsp+68h] [rbp+1Fh]
  __int64 v29; // [rsp+70h] [rbp+27h]
  int v30; // [rsp+78h] [rbp+2Fh]
  int v31; // [rsp+7Ch] [rbp+33h]
  struct _NDIS_OID_REQUEST *v32; // [rsp+B0h] [rbp+67h] BYREF

  v25 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      65,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  if ( a1->MajorNdisVersion < 6u )
  {
    a1->WSyncFlags &= ~2u;
    p_OidRequestList = &a1->OidRequestList;
    if ( a1->PendingOidRequest || p_OidRequestList->Flink != p_OidRequestList )
    {
      *((_QWORD *)&v25 + 1) = &v25;
      *(_QWORD *)&v25 = &v25;
      while ( p_OidRequestList->Flink != p_OidRequestList )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            11,
            66,
            (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
            (char)a1);
        Flink = p_OidRequestList->Flink;
        if ( p_OidRequestList->Flink->Blink != p_OidRequestList || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
LABEL_28:
          __fastfail(3u);
        p_OidRequestList->Flink = v4;
        v4->Blink = p_OidRequestList;
        if ( Flink )
        {
          v5 = (_LIST_ENTRY **)*((_QWORD *)&v25 + 1);
          if ( **((__int128 ***)&v25 + 1) != &v25 )
            goto LABEL_28;
          Flink->Blink = (_LIST_ENTRY *)*((_QWORD *)&v25 + 1);
          Flink->Flink = (_LIST_ENTRY *)&v25;
          *v5 = Flink;
          *((_QWORD *)&v25 + 1) = Flink;
        }
      }
      if ( (__int128 *)v25 != &v25 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        while ( 1 )
        {
          v6 = v25;
          if ( (__int128 *)v25 == &v25 )
            break;
          if ( *(__int128 **)(v25 + 8) != &v25 )
            goto LABEL_28;
          v7 = *(_QWORD *)v25;
          if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != (_QWORD)v25 )
            goto LABEL_28;
          *(_QWORD *)&v25 = *(_QWORD *)v25;
          *(_QWORD *)(v7 + 8) = &v25;
          if ( v6 )
          {
            v28 = 0LL;
            v30 = -1073676276;
            v31 = 1;
            v8 = v6 - 72;
            v26 = a1;
            v27 = 0LL;
            v29 = v6 - 72;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0xBu,
                0x43u,
                (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
                (char)a1,
                v6 - 72);
            if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
            {
              LODWORD(v24) = *(_DWORD *)(v8 + 32);
              LODWORD(v23) = a1->IfIndex;
              McTemplateK0jqxd_EtwWriteTransfer(
                v6,
                (__int64)&AbortingRequestEx,
                (__int64)&a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                (__int64)v23,
                a1->NetLuid.Value,
                v24);
            }
            KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
            v9 = *(_OWORD *)v8;
            v11 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
            v10 = ndisAbortedRequestsIndex;
            *(_OWORD *)v11 = v9;
            *((_OWORD *)v11 + 1) = *(_OWORD *)(v8 + 16);
            *((_OWORD *)v11 + 2) = *(_OWORD *)(v8 + 32);
            *((_OWORD *)v11 + 3) = *(_OWORD *)(v8 + 48);
            *((_OWORD *)v11 + 4) = *(_OWORD *)(v8 + 64);
            *((_OWORD *)v11 + 5) = *(_OWORD *)(v8 + 80);
            *((_OWORD *)v11 + 6) = *(_OWORD *)(v8 + 96);
            v11 += 128;
            v12 = *(_OWORD *)(v8 + 112);
            v13 = v8 + 128;
            *((_OWORD *)v11 - 1) = v12;
            *(_OWORD *)v11 = *(_OWORD *)v13;
            *((_OWORD *)v11 + 1) = *(_OWORD *)(v13 + 16);
            *((_OWORD *)v11 + 2) = *(_OWORD *)(v13 + 32);
            *((_OWORD *)v11 + 3) = *(_OWORD *)(v13 + 48);
            *((_OWORD *)v11 + 4) = *(_OWORD *)(v13 + 64);
            *((_OWORD *)v11 + 5) = *(_OWORD *)(v13 + 80);
            *((_OWORD *)v11 + 6) = *(_OWORD *)(v13 + 96);
            *((_QWORD *)v11 + 14) = *(_QWORD *)(v13 + 112);
            if ( v10 == 16 )
              ndisAbortedRequestsIndex = 0;
            KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
            ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v26, v14, v15, v16);
          }
        }
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      }
      PendingOidRequest = a1->PendingOidRequest;
      if ( PendingOidRequest )
      {
        v18 = ndisAbortedRequestsIndex;
        a1->PendingOidRequest = 0LL;
        v19 = 248 * v18;
        LODWORD(v18) = v18 + 1;
        PendingRequest = a1->PendingRequest;
        v21 = (char *)&ndisAbortedRequests + v19;
        a1->PendingRequest = 0LL;
        v22 = *(_OWORD *)&PendingOidRequest->Header.Type;
        v32 = 0LL;
        ndisAbortedRequestsIndex = v18;
        *(_OWORD *)v21 = v22;
        *((_OWORD *)v21 + 1) = *(_OWORD *)&PendingOidRequest->RequestId;
        *((_OWORD *)v21 + 2) = *(_OWORD *)&PendingOidRequest->DATA.QUERY_INFORMATION.Oid;
        *((_OWORD *)v21 + 3) = *(_OWORD *)&PendingOidRequest->DATA.METHOD_INFORMATION.InputBufferLength;
        *((_OWORD *)v21 + 4) = *(_OWORD *)&PendingOidRequest->DATA.METHOD_INFORMATION.BytesRead;
        *((_OWORD *)v21 + 5) = *(_OWORD *)&PendingOidRequest->NdisReserved[8];
        *((_OWORD *)v21 + 6) = *(_OWORD *)&PendingOidRequest->NdisReserved[24];
        v21 += 128;
        *((_OWORD *)v21 - 1) = *(_OWORD *)&PendingOidRequest->NdisReserved[40];
        *(_OWORD *)v21 = *(_OWORD *)&PendingOidRequest->NdisReserved[56];
        *((_OWORD *)v21 + 1) = *(_OWORD *)&PendingOidRequest->NdisReserved[72];
        *((_OWORD *)v21 + 2) = *(_OWORD *)&PendingOidRequest->NdisReserved[88];
        *((_OWORD *)v21 + 3) = *(_OWORD *)&PendingOidRequest->NdisReserved[104];
        *((_OWORD *)v21 + 4) = *(_OWORD *)&PendingOidRequest->NdisReserved[120];
        *((_OWORD *)v21 + 5) = *(_OWORD *)&PendingOidRequest->MiniportReserved[8];
        *((_OWORD *)v21 + 6) = *(_OWORD *)&PendingOidRequest->SourceReserved[8];
        *((_QWORD *)v21 + 14) = *(_QWORD *)&PendingOidRequest[1].Header.Type;
        if ( (_DWORD)v18 == 16 )
          ndisAbortedRequestsIndex = 0;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( a1->MajorNdisVersion < 6u )
        {
          ndisCompleteLegacyRequest(a1, -1073676276, PendingRequest);
        }
        else if ( (*(_DWORD *)&PendingOidRequest->NdisReserved[16] & 0x8000000) == 0
               || (ndisOidFreeInternalCloneRequest(&a1->Header, PendingOidRequest, 0, &v32),
                   (PendingOidRequest = v32) != 0LL) )
        {
          ndisMOidRequestCompleteInternal(a1, PendingOidRequest, -1073676276, PendingOidRequest);
        }
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      68,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
}
