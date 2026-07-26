/*
 * XREFs of ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1400AC5F8
 * Callers:
 *     ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x14008F420 (-ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400AC768 (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@@Z @ 0x1400AE400 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisDereferenceReceiveQueue(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  unsigned int v2; // r14d
  __int64 v4; // rsi
  char v5; // bp
  char v6; // r12
  unsigned int v7; // r15d
  _QWORD **v8; // rdx
  PVOID *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  KIRQL v12; // dl
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[8];
  v2 = *((_DWORD *)P + 12);
  v4 = 0LL;
  v5 = 0;
  NewIrql = 0;
  v6 = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
  v7 = *((_DWORD *)P + 20) - 1;
  *((_DWORD *)P + 20) = v7;
  if ( !v7 )
  {
    v5 = 1;
    v1->AllocatedQueueIndices[(unsigned __int64)v2 >> 3] &= ~(1 << (v2 & 7));
    v4 = P[9];
    if ( v4 )
    {
      v8 = (_QWORD **)P[2];
      if ( v8[1] != P + 2 )
        goto LABEL_14;
      v9 = (PVOID *)P[3];
      if ( *v9 != P + 2 )
        goto LABEL_14;
      *v9 = v8;
      v6 = 1;
      v8[1] = v9;
      --*(_DWORD *)(v4 + 752);
    }
    v10 = *P;
    if ( *(_QWORD **)(*P + 8LL) == P )
    {
      v11 = (_QWORD *)P[1];
      if ( (_QWORD *)*v11 == P )
      {
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        --v1->NumReceiveQueues;
        ExFreePoolWithTag(P, 0);
        goto LABEL_9;
      }
    }
LABEL_14:
    __fastfail(3u);
  }
LABEL_9:
  v12 = NewIrql;
  v1->MiniportThread = 0LL;
  KeReleaseSpinLock(&v1->Lock, v12);
  if ( v6 )
    ndisMDereferenceOpenUnlocked(v4, 0xAu);
  if ( v5 )
    ndisDereferenceMiniport(v1, 0x45u);
  return v7;
}
