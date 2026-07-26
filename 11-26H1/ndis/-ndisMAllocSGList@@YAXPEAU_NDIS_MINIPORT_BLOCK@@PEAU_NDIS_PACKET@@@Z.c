/*
 * XREFs of ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400C9B18
 * Callers:
 *     ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008B560 (-ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D8040 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     PplFreeToLookasideList @ 0x14003A720 (PplFreeToLookasideList.c)
 *     PplAllocateFromLookasideList @ 0x14003A780 (PplAllocateFromLookasideList.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x14005CE40 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     NdisQueryPacket @ 0x140063310 (NdisQueryPacket.c)
 *     NdisAllocateBuffer @ 0x140063EA0 (NdisAllocateBuffer.c)
 *     NdisMCoSendComplete @ 0x140075EF0 (NdisMCoSendComplete.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14008B440 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMAllocSGList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rbx
  PNDIS_BUFFER v4; // r15
  struct _NDIS_PACKET *v6; // rcx
  PNDIS_BUFFER v7; // r13
  KIRQL v8; // al
  _QWORD *v9; // r8
  _DMA_ADAPTER **p_DmaAdapterObject; // rsi
  __int64 v11; // r12
  _DEVICE_OBJECT **p_DeviceObject; // rbx
  int v13; // eax
  void *v14; // rdx
  int v15; // ebx
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v17; // rsi
  __int64 v18; // rdx
  signed int v19; // ebx
  bool v20; // sf
  char *v21; // rbx
  KIRQL v22; // r13
  char v23[8]; // [rsp+28h] [rbp-58h]
  int v24; // [rsp+38h] [rbp-48h]
  _NDIS_SG_DMA_BLOCK *v25; // [rsp+60h] [rbp-20h]
  _DEVICE_OBJECT **v26; // [rsp+60h] [rbp-20h]
  char *v27; // [rsp+68h] [rbp-18h]
  PNDIS_BUFFER Buffer; // [rsp+70h] [rbp-10h] BYREF
  PNDIS_BUFFER FirstBuffer; // [rsp+C0h] [rbp+40h] BYREF
  UINT Length; // [rsp+D0h] [rbp+50h] BYREF
  _QWORD *v31; // [rsp+D8h] [rbp+58h]

  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  v25 = MiniportSGDmaBlock;
  FirstBuffer = 0LL;
  Length = 0;
  Buffer = 0LL;
  v4 = 0LL;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &FirstBuffer, &Length);
  v7 = FirstBuffer;
  if ( !FirstBuffer )
  {
    *(unsigned __int64 *)((char *)v6->Reserved + v6->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&v6->MacReserved[v6->Private.NdisPacketOobOffset + 24] = 0LL;
    v6->Private.Flags &= ~0x800u;
    if ( (a1->Flags & 0x20000) != 0 )
    {
      FirstBuffer = 0LL;
LABEL_32:
      NDIS_STACK_RESERVED_FROM_PACKET(v6, (struct _NDIS_STACK_RESERVED **)&FirstBuffer);
      NdisMCoSendComplete(-1073741823, *(NDIS_HANDLE *)&FirstBuffer->Size, a2);
      return;
    }
LABEL_33:
    ndisMSendCompleteX(a1, a2, 0xC0000001);
    return;
  }
  v27 = (char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset;
  v31 = PplAllocateFromLookasideList((__int64)MiniportSGDmaBlock->SGListLookasideList);
  v8 = KfRaiseIrql(2u);
  v9 = v31;
  p_DmaAdapterObject = &MiniportSGDmaBlock->DmaAdapterObject;
  v11 = Length;
  p_DeviceObject = &a1->DeviceObject;
  LOBYTE(FirstBuffer) = v8;
  if ( !v31 )
  {
    v26 = &a1->DeviceObject;
    v31 = p_DmaAdapterObject;
LABEL_10:
    LOBYTE(v24) = 1;
    v15 = (*p_DmaAdapterObject)->DmaOperations->GetScatterGatherList(
            *p_DmaAdapterObject,
            *p_DeviceObject,
            v7,
            v27,
            v11,
            ndisMProcessSGList,
            a2,
            v24);
    Length = v15;
    goto LABEL_12;
  }
  a2->Private.Flags |= 0x2000u;
  *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v9;
  v13 = (*p_DmaAdapterObject)->DmaOperations->BuildScatterGatherList(
          *p_DmaAdapterObject,
          *p_DeviceObject,
          v7,
          v27,
          v11,
          ndisMProcessSGList,
          a2,
          1u,
          v9,
          v25->ScatterGatherListSize);
  Length = v13;
  if ( v13 < 0 )
  {
    v14 = v31;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    PplFreeToLookasideList((__int64)v25->SGListLookasideList, v14);
    v13 = Length;
  }
  v26 = &a1->DeviceObject;
  v31 = p_DmaAdapterObject;
  if ( v13 < 0 )
    goto LABEL_10;
  v15 = Length;
LABEL_12:
  if ( (_BYTE)FirstBuffer != 2 )
    KeLowerIrql((KIRQL)FirstBuffer);
  if ( v15 < 0 )
  {
    LODWORD(FirstBuffer) = 0;
    Pool2 = (unsigned __int8 *)ExAllocatePool2(66LL, v11, 1735607374LL);
    v17 = Pool2;
    if ( Pool2 )
    {
      NdisAllocateBuffer((PNDIS_STATUS)&Length, &Buffer, 0LL, Pool2, v11);
      v19 = Length;
      v4 = Buffer;
      v20 = (Length & 0x80000000) != 0;
      if ( Length )
        goto LABEL_21;
      ndisMCopyFromPacketToBuffer(a2, v18, v11, v17, (unsigned int *)&FirstBuffer);
      if ( (_DWORD)FirstBuffer == (_DWORD)v11 )
      {
        a2->Private.Flags |= 0x800u;
        v21 = (char *)v4->StartVa + v4->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v4;
        LOBYTE(v24) = 1;
        v22 = KfRaiseIrql(2u);
        v19 = (*(__int64 (__fastcall **)(_QWORD, _DEVICE_OBJECT *, PNDIS_BUFFER, char *, _DWORD, void (__fastcall *)(struct _DEVICE_OBJECT *, struct _IRP *, struct _SCATTER_GATHER_LIST *, void *), struct _NDIS_PACKET *, int))(*(_QWORD *)(*v31 + 8LL) + 88LL))(
                *v31,
                *v26,
                v4,
                v21,
                v11,
                ndisMProcessSGList,
                a2,
                v24);
        if ( v22 != 2 )
          KeLowerIrql(v22);
        v20 = v19 < 0;
LABEL_21:
        if ( !v20 )
          return;
LABEL_24:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v23 = v19;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            3u,
            0x11u,
            (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
            *(_QWORD *)v23);
        }
        if ( v4 )
          IoFreeMdl(v4);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
        a2->Private.Flags &= ~0x800u;
        if ( (a1->Flags & 0x20000) != 0 )
        {
          FirstBuffer = 0LL;
          v6 = a2;
          goto LABEL_32;
        }
        goto LABEL_33;
      }
    }
    v19 = -1073741670;
    goto LABEL_24;
  }
}
