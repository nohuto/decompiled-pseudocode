/*
 * XREFs of ?ndisMDummyIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B43A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14002C180 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMDummyIndicatePacket(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v5; // rsi
  struct _NDIS_PACKET *v6; // rcx
  struct _NDIS_PACKET *v7; // r10
  __int64 v8; // r11
  _MDL *Head; // rcx
  __int64 ByteCount; // r9
  struct _MDL *i; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  void (__fastcall *v16)(_QWORD, struct _NDIS_PACKET *, _QWORD, __int64); // r8
  struct _NDIS_STACK_RESERVED *v17; // rax
  int v18; // ecx
  struct _NDIS_STACK_RESERVED *v19; // [rsp+30h] [rbp+8h] BYREF

  v19 = 0LL;
  if ( a3 )
  {
    v5 = a3;
    do
    {
      v6 = *a2;
      ++*(_DWORD *)&v6[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v6, &v19);
      Head = v7->Private.Head;
      ByteCount = Head->ByteCount;
      for ( i = Head->Next; i; i = i->Next )
        ByteCount = (unsigned int)(i->ByteCount + ByteCount);
      if ( (v7->Private.NdisPacketFlags & 2) == 0 )
      {
        v12 = a1[394];
        if ( v12 )
        {
          v13 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v13 + v12 + 32);
        }
        v14 = a1[394];
        if ( v14 )
        {
          v15 = 112LL * KeGetPcr()->Prcb.Number;
          *(_QWORD *)(v15 + v14 + 8) += (unsigned int)ByteCount;
          *(_QWORD *)(v15 + v14) += (unsigned int)ByteCount;
        }
      }
      if ( *(unsigned int *)((char *)&v7->Private.Count + v8) == -1073741670 )
      {
        --*(_DWORD *)&v7[-1].ProtocolReserved[4];
      }
      else if ( (a1[15] & 0x40000) != 0 )
      {
        v16 = *(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD, __int64))(a1[470] + 224LL);
        v17 = v19;
        *(unsigned int *)((char *)&v7->Private.Count + v8) = 259;
        *(_QWORD *)v17 = 0LL;
        LODWORD(v17) = v7[-1].Reserved[1];
        v18 = *(_DWORD *)&v7[-1].ProtocolReserved[4] - 1;
        *(_DWORD *)&v7[-1].ProtocolReserved[4] = v18;
        if ( ((unsigned __int8)v17 & 1) != 0 && v18 == -1 )
          NDIS_FREE_XFER_DATA_PACKET(v7);
        else
          v16(a1[3], v7, v16, ByteCount);
      }
      else
      {
        --*(_DWORD *)&v7[-1].ProtocolReserved[4];
        *(unsigned int *)((char *)&v7->Private.Count + v8) = 0;
      }
      ++a2;
      --v5;
    }
    while ( v5 );
  }
}
