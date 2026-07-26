/*
 * XREFs of ndisLWM5IndicateReceive @ 0x1400680C0
 * Callers:
 *     ?EthIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z @ 0x140068080 (-EthIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z.c)
 * Callees:
 *     NdisAllocatePacket @ 0x14002D4A0 (NdisAllocatePacket.c)
 *     NdisFreePacket @ 0x14002D9B0 (NdisFreePacket.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __fastcall ndisLWM5IndicateReceive(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        size_t Size)
{
  __int64 v7; // r13
  struct _NPAGED_LOOKASIDE_LIST *v8; // r14
  size_t v9; // r15
  size_t v10; // r12
  __int64 v11; // rdi
  struct _MDL *Pool2; // rax
  unsigned int v13; // ecx
  struct _MDL *v14; // rsi
  SIZE_T v15; // rax
  unsigned __int64 v16; // r8
  int v17; // edi
  char *v18; // rdi
  unsigned int v19; // edx
  _MDL *Head; // r15
  PVOID MappedSystemVa; // rax
  __int64 v22; // rbx
  ULONG ByteCount; // edi
  struct _MDL *Mdl; // rax
  _MDL *v25; // rbx
  PNDIS_PACKET v26; // r10
  unsigned int v27; // ecx
  _MDL *v28; // rbx
  PNDIS_PACKET v29; // r9
  unsigned int v30; // r10d
  PNDIS_PACKET Packet; // [rsp+40h] [rbp-38h] BYREF
  void *v32; // [rsp+48h] [rbp-30h]
  int Status; // [rsp+A0h] [rbp+28h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+30h]
  void *Src; // [rsp+B0h] [rbp+38h]
  size_t v36; // [rsp+B8h] [rbp+40h]

  LODWORD(v36) = a4;
  Src = a3;
  v34 = a2;
  v7 = *(_QWORD *)(a1 + 296);
  Status = 0;
  v8 = 0LL;
  Packet = 0LL;
  v9 = a4;
  if ( (*(_DWORD *)(v7 + 120) & 0x20000000) != 0 )
  {
    v10 = (unsigned int)Size;
    v11 = a4 + (unsigned int)Size;
    if ( (unsigned int)v11 >= (unsigned int)Size )
    {
      if ( (unsigned int)v11 >= 0x64 )
      {
        if ( (unsigned int)v11 >= 0x5EA )
        {
          v13 = v11 + ((MmSizeOfMdl((PVOID)0xFFF, (unsigned int)v11) + 7) & 0xFFFFFFF8);
          if ( v13 < (unsigned int)v11 )
            return;
          Pool2 = (struct _MDL *)ExAllocatePool2(66LL, v13, 1918125134LL);
        }
        else
        {
          v8 = &ndisRcv1514BytesLL;
          Pool2 = (struct _MDL *)ExAllocateFromNPagedLookasideList(&ndisRcv1514BytesLL);
        }
      }
      else
      {
        v8 = &ndisRcv100BytesLL;
        Pool2 = (struct _MDL *)ExAllocateFromNPagedLookasideList(&ndisRcv100BytesLL);
      }
      v14 = Pool2;
      if ( Pool2 )
      {
        v15 = MmSizeOfMdl((PVOID)0xFFF, (unsigned int)v11);
        v14->ByteCount = v11;
        v14->Next = 0LL;
        v14->MdlFlags = 0;
        v16 = (unsigned __int64)v14 + ((v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v32 = (void *)v16;
        LOWORD(v15) = (_WORD)v14 + ((v15 + 7) & 0xFFF8);
        v14->ByteOffset = v15 & 0xFFF;
        v14->StartVa = (PVOID)(v16 & 0xFFFFFFFFFFFFF000uLL);
        v14->Size = 8 * ((((v15 & 0xFFF) + v11 + 4095) >> 12) + 6);
        MmBuildMdlForNonPagedPool(v14);
        NdisAllocatePacket(&Status, &Packet, ndisRecvPacketPool);
        v17 = Status;
        if ( Status )
          goto LABEL_30;
        Packet->Private.Head = v14;
        Packet->Private.Tail = v14;
        *(_QWORD *)Packet->MiniportReserved = v8;
        LODWORD(Packet[-1].Reserved[1]) |= 1u;
        if ( (unsigned int)v10 > a6 )
        {
          Status = 0;
          v19 = ++*(_DWORD *)Packet[-1].ProtocolReserved;
          if ( v19 >= 3 * ndisPacketStackSize )
          {
            *(_DWORD *)Packet[-1].ProtocolReserved = v19 - 1;
            goto LABEL_31;
          }
          Head = Packet->Private.Head;
          if ( (Head->MdlFlags & 5) != 0 )
            MappedSystemVa = Head->MappedSystemVa;
          else
            MappedSystemVa = MmMapLockedPages(Head, 0);
          v22 = (unsigned int)v36;
          ByteCount = Head->ByteCount;
          v32 = MappedSystemVa;
          memmove(MappedSystemVa, Src, (unsigned int)v36);
          Mdl = IoAllocateMdl((char *)v32 + v22, ByteCount - (unsigned int)v36, 0, 0, 0LL);
          v25 = Mdl;
          if ( !Mdl )
            goto LABEL_31;
          MmBuildMdlForNonPagedPool(Mdl);
          v25->Next = 0LL;
          v25->Next = Head->Next;
          Packet->Private.Head = v25;
          *(_QWORD *)Packet->ProtocolReserved = Head;
          v26 = Packet;
          v27 = *(_DWORD *)Packet[-1].ProtocolReserved;
          if ( v27 < 3 * ndisPacketStackSize )
          {
            *((_QWORD *)&Packet->Private.PhysicalCount + 6 * (v27 / 3 - (unsigned __int64)ndisPacketStackSize) + v27 % 3) = 0LL;
            v26 = Packet;
          }
          v17 = (*(__int64 (__fastcall **)(PNDIS_PACKET, int *, _QWORD, __int64, _DWORD, _DWORD))(*(_QWORD *)(v7 + 3760)
                                                                                                + 216LL))(
                  v26,
                  &Status,
                  *(_QWORD *)(v7 + 24),
                  v34,
                  0,
                  v10);
          if ( v17 == 259 )
          {
LABEL_29:
            if ( !v17 )
              return;
LABEL_30:
            if ( v17 == 259 )
              return;
            goto LABEL_31;
          }
          v28 = *(_MDL **)Packet->ProtocolReserved;
          IoFreeMdl(Packet->Private.Head);
          Packet->Private.Head = v28;
          *(_QWORD *)Packet->ProtocolReserved = 0LL;
          v29 = Packet;
          v30 = *(_DWORD *)Packet[-1].ProtocolReserved;
          if ( v30 < 3 * ndisPacketStackSize )
          {
            *((_QWORD *)&Packet->Private.PhysicalCount + 6 * (v30 / 3 - (unsigned __int64)ndisPacketStackSize) + v30 % 3) = 0LL;
            v29 = Packet;
          }
          --*(_DWORD *)v29[-1].ProtocolReserved;
          if ( v17 )
            goto LABEL_30;
        }
        else
        {
          v18 = (char *)v32;
          memmove(v32, Src, v9);
          memmove(&v18[v9], a5, v10);
          v17 = 0;
        }
        *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) = 0;
        if ( !*(_DWORD *)(v7 + 464) )
          *(_DWORD *)((char *)&Packet->Private.Tail + Packet->Private.NdisPacketOobOffset) = 14;
        (*(void (__fastcall **)(__int64, PNDIS_PACKET *, __int64))(v7 + 432))(v7, &Packet, 1LL);
        if ( (*(_DWORD *)(v7 + 120) & 0x40000) != 0
          || *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) == 259 )
        {
          goto LABEL_29;
        }
LABEL_31:
        if ( Packet )
        {
          LODWORD(Packet[-1].Reserved[1]) &= ~1u;
          NdisFreePacket(Packet);
        }
        if ( (v14->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(v14->MappedSystemVa, v14);
        if ( v8 )
          ExFreeToNPagedLookasideList(v8, v14);
        else
          ExFreePoolWithTag(v14, 0);
      }
    }
  }
}
