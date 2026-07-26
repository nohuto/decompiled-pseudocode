/*
 * XREFs of ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D8040
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400D7EF0 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400C9B18 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1400D7CB4 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisCoSendPacketsToNdisPackets(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // r13
  struct _NDIS_RW_LOCK_EX *BindListLock; // rsi
  KIRQL v6; // al
  _QWORD *v7; // rbx
  int v8; // r12d
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  struct _NDIS_PACKET **v11; // rbx
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  struct _NDIS_PACKET *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rsi
  _MDL *Head; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  signed __int32 v20[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _NDIS_PACKET **v21; // [rsp+30h] [rbp-58h]
  _X_FILTER *EthDB; // [rsp+38h] [rbp-50h]
  KIRQL v23; // [rsp+90h] [rbp+8h]
  unsigned int v26; // [rsp+A8h] [rbp+20h]

  v3 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
  EthDB = v3->EthDB;
  BindListLock = EthDB->BindListLock;
  v6 = KfRaiseIrql(2u);
  v7 = (_QWORD *)(*((_QWORD *)BindListLock + 4) + (KeGetPcr()->Prcb.Number << 12));
  v23 = v6;
  ++*v7;
  _InterlockedOr(v20, 0);
  if ( *((_QWORD *)BindListLock + 2) && *v7 <= 1uLL && *((struct _KTHREAD **)BindListLock + 3) != KeGetCurrentThread() )
  {
    *v7 = 0LL;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)BindListLock + 2);
    *v7 = 1LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)BindListLock + 2);
  }
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v26 = 0;
  if ( a3 )
  {
    v11 = a2;
    v21 = a2;
    while ( 1 )
    {
      v12 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
      v13 = *v11;
      if ( v12->PmodeOpens )
        ndisCoIndicatePromiscPacket(a1, v12, v3->OpenQueue, *v11, 0);
      v14 = *(_DWORD *)&v13[-1].ProtocolReserved[4] + 1;
      *(_DWORD *)&v13[-1].ProtocolReserved[4] = v14;
      if ( v14 >= ndisPacketStackSize )
        v15 = 16LL;
      else
        v15 = (__int64)v13 + 48 * (v14 - (unsigned __int64)ndisPacketStackSize);
      if ( (v3->SendFlags & 2) != 0 )
      {
        if ( v8 )
          goto LABEL_24;
      }
      else
      {
        Head = v13->Private.Head;
        v8 = 0;
        if ( Head )
        {
          while ( (Head->MdlFlags & 5) != 0
                ? Head->MappedSystemVa
                : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u) )
          {
            Head = Head->Next;
            if ( !Head )
              goto LABEL_19;
          }
          v11 = v21;
          v8 = -1073741670;
LABEL_24:
          ((void (__fastcall *)(__int64, _QWORD *, struct _NDIS_PACKET *))a1[34])(3221225626LL, a1, v13);
          if ( v10 )
          {
            ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD))a1[26])(a1[25], &a2[v26], v10);
            v10 = 0;
          }
          v18 = ++v9;
          v26 = v9;
          goto LABEL_27;
        }
LABEL_19:
        v11 = v21;
      }
      if ( (v3->Flags & 0x40) != 0 )
      {
        *(_QWORD *)v15 = a1[10];
        *(_QWORD *)(v15 + 8) = a1;
        ndisMAllocSGList(v3, v13);
        v18 = v26;
      }
      else
      {
        v18 = v26;
        ++v10;
      }
      ++v9;
LABEL_27:
      v21 = ++v11;
      if ( v9 >= a3 )
      {
        if ( v10 )
          ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD))a1[26])(a1[25], &a2[v18], v10);
        break;
      }
    }
  }
  v19 = KeGetPcr()->Prcb.Number << 12;
  --*(_QWORD *)(v19 + *((_QWORD *)EthDB->BindListLock + 4));
  if ( v23 != 2 )
    KeLowerIrql(v23);
}
