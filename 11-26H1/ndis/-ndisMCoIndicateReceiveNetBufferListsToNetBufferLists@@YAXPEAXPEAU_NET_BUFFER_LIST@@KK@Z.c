/*
 * XREFs of ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400339F0
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D87B0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140024860 (-ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     NdisAcquireRWLockRead @ 0x140033720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140033B50 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003C3E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400775C0 (-ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x140079C20 (-ndisCallPreviousReturnHandler@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMCoIndicateReceiveNetBufferListsToNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r14d
  struct _NET_BUFFER_LIST *v6; // rbp
  __int64 v8; // r13
  __int64 v10; // rsi
  struct _NET_BUFFER_LIST *v11; // rax
  __int64 v12; // r8
  struct _NET_BUFFER_LIST *v13; // rdi
  struct _LOCK_STATE_EX LockState; // [rsp+80h] [rbp+8h] BYREF
  struct _NET_BUFFER_LIST *v15; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = a3;
  v15 = a2;
  v4 = a1[9];
  v5 = a3;
  *(_WORD *)&LockState.OldIrql = 0;
  v6 = a2;
  LockState.Flags = 0;
  v8 = *(_QWORD *)(v4 + 120);
  v10 = *(_QWORD *)(v8 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v10 + 288), &LockState, 0);
  *(_BYTE *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(*(_QWORD *)(v4 + 16) + 720LL)) = 1;
  ndisCoIndicatePromiscNetBuffer(
    a1,
    *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
    *(struct _NDIS_OPEN_BLOCK **)v10,
    v6,
    v5,
    a4,
    1);
  ndisCoIndicatePromiscNetBuffer(
    a1,
    *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
    *(struct _NDIS_OPEN_BLOCK **)(v10 + 8),
    v6,
    v5,
    a4,
    1);
  ndisCoIndicatePromiscNetBuffer(
    a1,
    *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
    *(struct _NDIS_OPEN_BLOCK **)(v10 + 16),
    v6,
    v5,
    a4,
    1);
  if ( !ndisIsNblContextVeriferEnabled(*(const struct _NDIS_FILTER_BLOCK **)(v4 + 16)) )
  {
LABEL_2:
    if ( (*(_DWORD *)(v4 + 4) & 0x10) != 0 )
    {
      if ( (a4 & 2) == 0 )
        ndisReturnNetBufferListsInternal(*(struct _NDIS_FILTER_BLOCK **)(v4 + 120), v6, a4 & 1, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _NET_BUFFER_LIST *, _QWORD, unsigned int))(v4 + 72))(
        *(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL),
        *(_QWORD *)(v4 + 24),
        v6,
        v5,
        a4);
    }
    NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v10 + 288), &LockState);
    return;
  }
  v11 = ndisAddNblContextTerminator(&v15, &v16, *(struct _NDIS_OBJECT_HEADER **)(v4 + 16));
  v13 = v11;
  if ( !v11 )
  {
    v6 = v15;
LABEL_17:
    v5 = v16;
    goto LABEL_2;
  }
  if ( byte_14011F740 && (*(_DWORD *)(*(_QWORD *)(v4 + 120) + 5872LL) & 2) != 0 )
    PktMonClientNblDropNdis(*(_QWORD *)(v4 + 120) + 5816LL, (__int64)v11, v12, 1LL, -1073741670, -536866800);
  if ( (a4 & 2) == 0 )
    ndisCallPreviousReturnHandler((struct _NDIS_OBJECT_HEADER *)v8, v13, a4);
  v6 = v15;
  if ( v15 )
    goto LABEL_17;
}
