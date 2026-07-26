/*
 * XREFs of ?ndisMSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DD320
 * Callers:
 *     ?ndisMSend@@YAHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400DD250 (-ndisMSend@@YAHPEAXPEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140049260 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendPackets(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r14d
  unsigned int v5; // edi
  struct _NDIS_PACKET **v6; // r12
  __int64 v7; // r13
  struct _NDIS_PACKET **v8; // r15
  struct _NDIS_PACKET *v9; // rbp
  _MDL *Head; // rbx
  PVOID MappedSystemVa; // rax
  KIRQL v12; // r13
  __int64 v13; // rbx
  struct _NDIS_STACK_RESERVED *v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h]

  if ( a3 )
  {
    v3 = a1[2];
    v4 = 0;
    v5 = 0;
    v16 = a3;
    v6 = a2;
    v7 = (__int64)a1;
    v15 = 0LL;
    v8 = a2;
    do
    {
      v9 = *v8;
      ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v9, &v15);
      *(_QWORD *)v15 = v7;
      Head = v9->Private.Head;
      if ( Head )
      {
        if ( (*(_BYTE *)(v3 + 928) & 2) == 0 )
        {
          v4 = 0;
          while ( Head )
          {
            if ( (Head->MdlFlags & 5) != 0 )
              MappedSystemVa = Head->MappedSystemVa;
            else
              MappedSystemVa = MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
            if ( !MappedSystemVa )
            {
              v4 = -1073741670;
              break;
            }
            Head = Head->Next;
          }
        }
      }
      else
      {
        v4 = -1073741823;
      }
      v9->Private.NdisPacketFlags &= ~4u;
      ndisMReferenceOpen(v7, 9u);
      if ( v4 )
      {
        v12 = KfRaiseIrql(2u);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC((struct _NDIS_MINIPORT_BLOCK *)v3);
        v13 = *(_QWORD *)v15;
        *(_QWORD *)v15 = 1297040184LL;
        *(_QWORD *)(v3 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 96));
        *((_DWORD *)v15 + 2) = 0;
        v9->Private.NdisPacketFlags &= 0xC0u;
        (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v13 + 112))(v13, v9, v4);
        if ( v12 != 2 )
          KeLowerIrql(v12);
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v3 + 2024))(v3, v6, v5);
          v5 = 0;
          v6 = v8 + 1;
        }
        v7 = (__int64)a1;
      }
      else
      {
        ++v5;
      }
      ++v8;
      --v16;
    }
    while ( v16 );
    if ( v5 )
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v3 + 2024))(v3, v6, v5);
  }
}
