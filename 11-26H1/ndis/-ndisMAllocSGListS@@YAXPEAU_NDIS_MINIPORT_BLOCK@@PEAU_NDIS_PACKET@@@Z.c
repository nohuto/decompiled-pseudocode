/*
 * XREFs of ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400C9EC0
 * Callers:
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DEB90 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14002C7C0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     PplFreeToLookasideList @ 0x14003A720 (PplFreeToLookasideList.c)
 *     PplAllocateFromLookasideList @ 0x14003A780 (PplAllocateFromLookasideList.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x14005CE40 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     NdisQueryPacket @ 0x140063310 (NdisQueryPacket.c)
 *     NdisAllocateBuffer @ 0x140063EA0 (NdisAllocateBuffer.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400CA3A0 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400DED08 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMAllocSGListS(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rbx
  PNDIS_BUFFER v4; // r15
  __int64 v6; // rcx
  PNDIS_BUFFER v7; // r13
  struct _NDIS_STACK_RESERVED *v8; // rbx
  __int64 v9; // r14
  __int64 NdisPacketOobOffset; // rax
  __int64 SGListLookasideList; // rcx
  KIRQL v12; // al
  PNDIS_BUFFER v13; // r8
  _DMA_ADAPTER **p_DmaAdapterObject; // r14
  __int64 v15; // r12
  _DEVICE_OBJECT **p_DeviceObject; // rbx
  _NDIS_SG_DMA_BLOCK *v17; // rdx
  int v18; // eax
  PNDIS_BUFFER v19; // rdx
  _NDIS_SG_DMA_BLOCK *v20; // rax
  int v21; // ebx
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v23; // r14
  __int64 v24; // rdx
  signed int v25; // ebx
  bool v26; // sf
  char *v27; // rbx
  KIRQL v28; // r13
  struct _NDIS_STACK_RESERVED *v29; // r14
  __int64 v30; // r15
  __int64 v31; // rax
  char v32[8]; // [rsp+28h] [rbp-41h]
  int v33; // [rsp+38h] [rbp-31h]
  struct _NDIS_STACK_RESERVED *v34; // [rsp+60h] [rbp-9h] BYREF
  _NDIS_SG_DMA_BLOCK *v35; // [rsp+68h] [rbp-1h]
  char *v36; // [rsp+70h] [rbp+7h]
  PNDIS_BUFFER Buffer; // [rsp+78h] [rbp+Fh] BYREF
  _DEVICE_OBJECT **v38; // [rsp+80h] [rbp+17h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+67h] BYREF
  UINT Length; // [rsp+E0h] [rbp+77h] BYREF
  PNDIS_BUFFER FirstBuffer; // [rsp+E8h] [rbp+7Fh] BYREF

  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  v35 = MiniportSGDmaBlock;
  FirstBuffer = 0LL;
  Length = 0;
  Buffer = 0LL;
  v34 = 0LL;
  v4 = 0LL;
  NewIrql = 0;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &FirstBuffer, &Length);
  v7 = FirstBuffer;
  if ( !FirstBuffer )
  {
    *(_QWORD *)(*(unsigned __int16 *)(v6 + 42) + v6 + 80) = 0LL;
    *(_QWORD *)(*(unsigned __int16 *)(v6 + 42) + v6 + 72) = 0LL;
    *(_DWORD *)(v6 + 36) &= ~0x800u;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v34);
    v8 = v34;
    v9 = *(_QWORD *)v34;
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
    *(_QWORD *)v8 = 1297040176LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, a2);
    *((_DWORD *)v8 + 2) = 0;
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(a2);
    NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
    a2->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&a2[1].Private.Head + NdisPacketOobOffset) )
      ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, 0);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v9 + 112))(v9, a2, 0LL);
LABEL_44:
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
    return;
  }
  SGListLookasideList = (__int64)MiniportSGDmaBlock->SGListLookasideList;
  v36 = (char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset;
  FirstBuffer = (PNDIS_BUFFER)PplAllocateFromLookasideList(SGListLookasideList);
  v12 = KfRaiseIrql(2u);
  v13 = FirstBuffer;
  p_DmaAdapterObject = &MiniportSGDmaBlock->DmaAdapterObject;
  v15 = Length;
  p_DeviceObject = &a1->DeviceObject;
  NewIrql = v12;
  if ( !FirstBuffer )
  {
    v38 = &a1->DeviceObject;
    v35 = (_NDIS_SG_DMA_BLOCK *)p_DmaAdapterObject;
LABEL_16:
    LOBYTE(v33) = 1;
    v21 = (*p_DmaAdapterObject)->DmaOperations->GetScatterGatherList(
            *p_DmaAdapterObject,
            *p_DeviceObject,
            v7,
            v36,
            v15,
            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
            a2,
            v33);
    Length = v21;
    goto LABEL_18;
  }
  a2->Private.Flags |= 0x2000u;
  v17 = v35;
  *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v13;
  v18 = (*p_DmaAdapterObject)->DmaOperations->BuildScatterGatherList(
          *p_DmaAdapterObject,
          *p_DeviceObject,
          v7,
          v36,
          v15,
          (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))ndisMProcessSGListS,
          a2,
          1u,
          v13,
          v17->ScatterGatherListSize);
  Length = v18;
  if ( v18 < 0 )
  {
    v19 = FirstBuffer;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    v20 = v35;
    a2->Private.Flags &= ~0x2000u;
    PplFreeToLookasideList((__int64)v20->SGListLookasideList, v19);
    v18 = Length;
  }
  v38 = &a1->DeviceObject;
  v35 = (_NDIS_SG_DMA_BLOCK *)p_DmaAdapterObject;
  if ( v18 < 0 )
    goto LABEL_16;
  v21 = Length;
LABEL_18:
  if ( NewIrql != 2 )
    KeLowerIrql(NewIrql);
  if ( v21 < 0 )
  {
    LODWORD(FirstBuffer) = 0;
    Pool2 = (unsigned __int8 *)ExAllocatePool2(66LL, v15, 1735607374LL);
    v23 = Pool2;
    if ( Pool2 )
    {
      NdisAllocateBuffer((PNDIS_STATUS)&Length, &Buffer, 0LL, Pool2, v15);
      v25 = Length;
      v4 = Buffer;
      v26 = (Length & 0x80000000) != 0;
      if ( Length )
        goto LABEL_27;
      ndisMCopyFromPacketToBuffer(a2, v24, v15, v23, (unsigned int *)&FirstBuffer);
      if ( (_DWORD)FirstBuffer == (_DWORD)v15 )
      {
        a2->Private.Flags |= 0x800u;
        v27 = (char *)v4->StartVa + v4->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v4;
        LOBYTE(v33) = 1;
        v28 = KfRaiseIrql(2u);
        NewIrql = v28;
        v25 = (*(__int64 (__fastcall **)(_QWORD, _DEVICE_OBJECT *, PNDIS_BUFFER, char *, _DWORD, void (*)(struct _DEVICE_OBJECT *, struct _IRP *, struct _SCATTER_GATHER_LIST *, void *), struct _NDIS_PACKET *, int))(*(_QWORD *)(*(_QWORD *)&v35->Header.Type + 8LL) + 88LL))(
                *(_QWORD *)&v35->Header.Type,
                *v38,
                v4,
                v27,
                v15,
                ndisMProcessSGListS,
                a2,
                v33);
        if ( v28 != 2 )
          KeLowerIrql(v28);
        v26 = v25 < 0;
LABEL_27:
        if ( !v26 )
          return;
        goto LABEL_30;
      }
    }
    v25 = -1073741670;
LABEL_30:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v32 = v25;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        3u,
        0x12u,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
        *(_QWORD *)v32);
    }
    if ( v4 )
      IoFreeMdl(v4);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    NDIS_STACK_RESERVED_FROM_PACKET(a2, &v34);
    v29 = v34;
    v30 = *(_QWORD *)v34;
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
    *(_QWORD *)v29 = 1297040176LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, a2);
    *((_DWORD *)v29 + 2) = 0;
    if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
      ndisFreePaddedMdl(a2);
    v31 = a2->Private.NdisPacketOobOffset;
    a2->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&a2[1].Private.Head + v31) )
      ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, v25);
    else
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v30 + 112))(v30, a2, (unsigned int)v25);
    goto LABEL_44;
  }
}
