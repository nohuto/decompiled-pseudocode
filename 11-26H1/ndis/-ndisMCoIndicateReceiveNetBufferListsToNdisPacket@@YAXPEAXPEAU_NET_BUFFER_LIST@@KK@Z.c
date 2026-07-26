/*
 * XREFs of ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D8A20
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14002C180 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14002D010 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x14002D870 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x140033720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140033B50 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x14008F390 (ndisReturnPacketToNetBufferList.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisMCoIndicateReceiveNetBufferListsToNdisPacket(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r15
  __int64 v6; // rsi
  __int64 Status; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  struct _NDIS_PACKET **v12; // r13
  struct _NDIS_PACKET *v13; // rbx
  __int64 NdisPacketOobOffset; // r14
  char *v15; // r14
  _MDL *v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rax
  struct _NDIS_STACK_RESERVED *v19; // rdi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  struct _NDIS_MINIPORT_BLOCK *v23; // rdx
  __int64 v24; // r12
  struct _NET_BUFFER_LIST *v25; // rbx
  _QWORD *v26; // rdi
  unsigned int v27; // esi
  unsigned int v28; // r14d
  unsigned __int8 v29; // [rsp+40h] [rbp-C0h]
  struct _LOCK_STATE_EX LockState; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h]
  unsigned int v32; // [rsp+50h] [rbp-B0h]
  unsigned int v33; // [rsp+54h] [rbp-ACh]
  struct _NDIS_STACK_RESERVED *v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h]
  struct _NET_BUFFER_LIST *v36; // [rsp+68h] [rbp-98h]
  void *v37; // [rsp+70h] [rbp-90h]
  _QWORD v38[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  _BYTE v41[512]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1[9];
  v33 = a3;
  v36 = a2;
  v37 = a1;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v39 = 0LL;
  v32 = a4;
  v38[1] = 64LL;
  memset(v41, 0, sizeof(v41));
  v6 = *(_QWORD *)(v4 + 120);
  v34 = 0LL;
  v35 = *(_QWORD *)(v6 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v35 + 288), &LockState, 0);
  Status = a2->Status;
  v8 = KeGetPcr()->Prcb.Number << 12;
  v9 = *(_QWORD *)(v4 + 16);
  v38[2] = a2;
  v40 = v6;
  v10 = *(_QWORD *)(v9 + 720);
  v38[0] = v41;
  *(_BYTE *)(v8 + v10) = 1;
  v38[3] = a2->FirstNetBuffer;
  do
  {
    v11 = ndisXlateRecvNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)v38);
    v29 = v11;
    if ( !(_DWORD)v39 )
      continue;
    v12 = (struct _NDIS_PACKET **)v38[0];
    v31 = (unsigned int)v39;
    do
    {
      v13 = *v12;
      NdisPacketOobOffset = (*v12)->Private.NdisPacketOobOffset;
      ++*(_DWORD *)&v13[-1].ProtocolReserved[4];
      v15 = (char *)v13 + NdisPacketOobOffset;
      NDIS_STACK_RESERVED_FROM_PACKET(v13, &v34);
      v17 = *(_QWORD *)(v6 + 3152);
      if ( v17 )
      {
        v18 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v18 + v17 + 32);
      }
      v19 = v34;
      *((_DWORD *)v34 + 2) = -1;
      *((_DWORD *)v19 + 3) = (_DWORD)v16;
      *(_QWORD *)v19 = v6;
      v13->Private.ValidCounts = (unsigned __int8)v16;
      v20 = *((_DWORD *)v15 + 8);
      if ( v20 != -1073741670 )
        *((_DWORD *)v15 + 8) = v20;
      if ( (*(_DWORD *)(v4 + 4) & 0x10) != 0 )
      {
        *((_DWORD *)v19 + 3) = (_DWORD)v16;
LABEL_17:
        *((_DWORD *)v19 + 2) = (_DWORD)v16;
        goto LABEL_18;
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v4 + 56))(
              *(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL),
              *(_QWORD *)(v4 + 24),
              v13);
      v16 = 0LL;
      *((_DWORD *)v19 + 3) = v21;
      if ( !v21 )
        goto LABEL_17;
      v22 = _InterlockedExchangeAdd((volatile signed __int32 *)v19 + 2, v21 + 1) + 1 + v21;
      if ( v22 > 0 )
      {
        if ( (*(_DWORD *)(v6 + 120) & 0x40000) == 0 )
          *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
LABEL_14:
        if ( (*(_DWORD *)(v6 + 120) & 0x8000) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 1828));
        goto LABEL_30;
      }
      if ( v22 )
        goto LABEL_14;
LABEL_18:
      --*(_DWORD *)&v13[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v15 + 8) == -1073741670 )
        goto LABEL_30;
      if ( (*(_DWORD *)(v6 + 120) & 0x40000) != 0 )
      {
        *(_QWORD *)v19 = v16;
        *((_DWORD *)v15 + 8) = 259;
        if ( (v13[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v13[-1].ProtocolReserved[4] == -1 )
          goto LABEL_27;
        if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) == v16 )
        {
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(v6 + 3760) + 224LL))(
            *(_QWORD *)(v6 + 24),
            v13);
          goto LABEL_30;
        }
LABEL_28:
        ndisReturnPacketToNetBufferList((struct _NDIS_FILTER_BLOCK *)v6, v13);
        goto LABEL_30;
      }
      if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) != v16 )
      {
        *(_QWORD *)v19 = v16;
        *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
        if ( (v13[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v13[-1].ProtocolReserved[4] == -1 )
        {
LABEL_27:
          NDIS_FREE_XFER_DATA_PACKET(v13);
          goto LABEL_30;
        }
        goto LABEL_28;
      }
      *((_DWORD *)v15 + 8) = (_DWORD)v16;
LABEL_30:
      if ( Status == -1073741670 )
        ndisXlateReturnPacketToNetBufferList(v13);
      ++v12;
      --v31;
    }
    while ( v31 );
    v11 = v29;
  }
  while ( v11 );
  v23 = *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120);
  v24 = v35;
  if ( v23->PmodeOpens )
  {
    v25 = v36;
    v26 = v37;
    v27 = v32;
    v28 = v33;
    ndisCoIndicatePromiscNetBuffer(v37, v23, *(struct _NDIS_OPEN_BLOCK **)v35, v36, v33, v32, 1);
    ndisCoIndicatePromiscNetBuffer(
      v26,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v24 + 8),
      v25,
      v28,
      v27,
      1);
    ndisCoIndicatePromiscNetBuffer(
      v26,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v24 + 16),
      v25,
      v28,
      v27,
      1);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v24 + 288), &LockState);
}
