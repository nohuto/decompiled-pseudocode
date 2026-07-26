/*
 * XREFs of ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B4510
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14002C180 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x140033720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x14008F390 (ndisReturnPacketToNetBufferList.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1400A4A70 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisGetFirstBufferFromPacket @ 0x1400DB920 (NdisGetFirstBufferFromPacket.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMIndicatePacket(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned int Number; // r13d
  unsigned __int64 RcvLinkSpeedIndicateUp; // rcx
  struct _NDIS_PACKET **v6; // rbx
  struct _NDIS_RW_LOCK_EX *v8; // rcx
  struct _NDIS_PACKET *v9; // rbx
  int v10; // ecx
  struct _NDIS_STACK_RESERVED *v11; // rsi
  char *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  char v17; // r12
  __int64 v18; // r8
  __int64 v19; // r14
  unsigned int v20; // r13d
  _NDIS_OID_REQUEST *PendingOidRequest; // rdx
  unsigned int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rax
  struct _NET_BUFFER_LIST *v25; // rcx
  int v26; // ecx
  _QWORD *v27; // rsi
  __int64 v28; // rcx
  unsigned int v29; // r13d
  __int64 v30; // rax
  __int64 v31; // rbx
  int v32; // [rsp+40h] [rbp-39h]
  unsigned int v33; // [rsp+44h] [rbp-35h]
  unsigned int v34; // [rsp+48h] [rbp-31h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-29h]
  unsigned int v36; // [rsp+58h] [rbp-21h]
  __int64 v37; // [rsp+60h] [rbp-19h] BYREF
  struct _NDIS_STACK_RESERVED *v38; // [rsp+68h] [rbp-11h] BYREF
  struct _NDIS_PACKET **v39; // [rsp+70h] [rbp-9h]
  __int64 v40; // [rsp+78h] [rbp-1h] BYREF
  __int64 v41; // [rsp+80h] [rbp+7h]
  struct _LOCK_STATE_EX LockState; // [rsp+E0h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+E8h] [rbp+6Fh]
  unsigned int v44; // [rsp+F0h] [rbp+77h]
  unsigned int v45; // [rsp+F8h] [rbp+7Fh] BYREF

  v44 = a3;
  BugCheckParameter4 = (ULONG_PTR)a2;
  Number = KeGetPcr()->Prcb.Number;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  v6 = a2;
  v39 = a2;
  v35 = (_QWORD *)RcvLinkSpeedIndicateUp;
  v8 = *(struct _NDIS_RW_LOCK_EX **)(RcvLinkSpeedIndicateUp + 288);
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v38 = 0LL;
  v37 = 0LL;
  v45 = 0;
  v32 = 0;
  v36 = Number;
  NdisAcquireRWLockRead(v8, &LockState, 0);
  v33 = 0;
  if ( !a3 )
  {
    v27 = v35;
    goto LABEL_59;
  }
  do
  {
    v9 = *v6;
    ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v9, &v38);
    v11 = v38;
    if ( *((_DWORD *)v38 + 2) )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)&a1[2].NicSwitchHwCapabilities.NdisReserved2,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 0x12uLL, (ULONG_PTR)a1, (ULONG_PTR)v9, BugCheckParameter4);
    }
    v12 = (char *)v9 + v9->Private.NdisPacketOobOffset;
    NdisGetFirstBufferFromPacket(v10, (unsigned int)&v40, (unsigned int)&v37, (unsigned int)&v34, (__int64)&v45);
    if ( (v9->Private.Flags & 0x20000) == 0 && (v9->Private.NdisPacketFlags & 2) == 0 )
    {
      v13 = *(_QWORD *)&a1[2].DroppedUncloneableStatusIndications;
      if ( v13 )
      {
        v14 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v14 + v13 + 32);
      }
      v15 = *(_QWORD *)&a1[2].DroppedUncloneableStatusIndications;
      if ( v15 )
      {
        v16 = v45;
        v13 = 112LL * KeGetPcr()->Prcb.Number;
        *(_QWORD *)(v13 + v15 + 8) += v45;
        *(_QWORD *)(v13 + v15) += v16;
      }
    }
    v9->Private.Flags &= ~0x20000u;
    *((_DWORD *)v11 + 2) = -1;
    *((_DWORD *)v11 + 3) = 0;
    *(_QWORD *)v11 = a1;
    v9->Private.ValidCounts = 0;
    if ( *((_DWORD *)v12 + 8) == -1073741670 || (HIDWORD(a1->HigherFilter) & 0x800) != 0 )
    {
      v18 = 1LL;
      v17 = 1;
    }
    else
    {
      if ( ((__int64)a1->HigherFilter & 0x8000) == 0 )
        *((_DWORD *)v12 + 8) = 0;
      v17 = 0;
      v18 = 1LL;
    }
    v19 = *v35;
    if ( *v35 )
    {
      v20 = Number << 12;
      do
      {
        ++v32;
        v40 = *(_QWORD *)(v19 + 424);
        *(_BYTE *)(*(_QWORD *)(v19 + 720) + v20) = 1;
        PendingOidRequest = a1[1].PendingOidRequest;
        v22 = *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset);
        v23 = KeGetPcr()->Prcb.Number;
        v34 = v22;
        v24 = *((_QWORD *)&PendingOidRequest->Header.Type + v23);
        v41 = v24;
        LODWORD(v24) = KeGetPcr()->Prcb.Number;
        *((_QWORD *)&PendingOidRequest->Header.Type + v24) = v9;
        if ( v17 || !*(_QWORD *)(v19 + 160) )
        {
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = -1073741670;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64))(v19 + 128))(*(_QWORD *)(v19 + 32), v9, v37);
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = v34;
        }
        else
        {
          v25 = *(struct _NET_BUFFER_LIST **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset);
          if ( v25 && v22 == -1073741670 )
            ndisNblTrackerTransferOwnershipSingleNbl(
              v25,
              (struct NDIS_NBL_TRACKER_HANDLE__ *)PendingOidRequest,
              *(_QWORD *)(v19 + 584));
          *((_DWORD *)v11 + 3) += (*(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v19 + 160))(
                                    *(_QWORD *)(v19 + 32),
                                    v9);
        }
        v18 = 1LL;
        if ( *((int *)v11 + 3) > 0 && (*(_DWORD *)(v19 + 224) & 8) == 0 )
          v17 = 1;
        v13 = v41;
        *((_QWORD *)&a1[1].PendingOidRequest->Header.Type + KeGetPcr()->Prcb.Number) = v41;
        v19 = v40;
      }
      while ( v40 );
      Number = v36;
    }
    v26 = *((_DWORD *)v11 + 3);
    if ( v26 )
    {
      v13 = (unsigned int)(v26 + _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, v26 + 1) + 1);
      if ( (int)v13 > 0 )
      {
        if ( ((__int64)a1->HigherFilter & 0x40000) == 0 )
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
LABEL_34:
        if ( ((__int64)a1->HigherFilter & 0x8000) != 0 )
          _InterlockedAdd((volatile signed __int32 *)&a1[1].RcvLinkSpeedIndicateUp + 1, 1u);
        goto LABEL_49;
      }
      if ( (_DWORD)v13 )
        goto LABEL_34;
    }
    else
    {
      *((_DWORD *)v11 + 2) = 0;
    }
    --*(_DWORD *)&v9[-1].ProtocolReserved[4];
    if ( *((_DWORD *)v12 + 8) == -1073741670 )
      goto LABEL_49;
    if ( ((__int64)a1->HigherFilter & 0x40000) != 0 )
    {
      *(_QWORD *)v11 = 0LL;
      *((_DWORD *)v12 + 8) = 259;
      if ( (v9[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v9[-1].ProtocolReserved[4] == -1 )
        goto LABEL_46;
      if ( !*(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
      {
        (*(void (__fastcall **)(void *, struct _NDIS_PACKET *, __int64))&a1[2].PktMonEdgeUpper.CompContext[3].EdgeCount)(
          a1->FilterModuleContext,
          v9,
          1LL);
        goto LABEL_49;
      }
LABEL_47:
      ndisReturnPacketToNetBufferList(a1, v9);
      goto LABEL_49;
    }
    if ( *(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
    {
      *(_QWORD *)v11 = 0LL;
      *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
      if ( (v9[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v9[-1].ProtocolReserved[4] == -1 )
      {
LABEL_46:
        NDIS_FREE_XFER_DATA_PACKET(v9);
        goto LABEL_49;
      }
      goto LABEL_47;
    }
    *((_DWORD *)v12 + 8) = 0;
LABEL_49:
    v6 = v39 + 1;
    ++v33;
    ++v39;
  }
  while ( v33 < v44 );
  v27 = v35;
  if ( v32 )
  {
    v28 = *v35;
    if ( *v35 )
    {
      v29 = Number << 12;
      do
      {
        v30 = *(_QWORD *)(v28 + 720);
        v31 = *(_QWORD *)(v28 + 424);
        if ( *(_BYTE *)(v30 + v29) )
        {
          *(_BYTE *)(v30 + v29) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(v28 + 136))(*(_QWORD *)(v28 + 32), v13, v18);
        }
        v28 = v31;
      }
      while ( v31 );
    }
  }
LABEL_59:
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v27[36], &LockState);
}
