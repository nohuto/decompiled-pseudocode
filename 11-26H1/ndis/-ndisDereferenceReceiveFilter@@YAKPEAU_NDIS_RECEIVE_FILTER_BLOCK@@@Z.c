/*
 * XREFs of ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x14008F420
 * Callers:
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140071BF0 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14016AC90 (-ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1400AC5F8 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisDereferenceReceiveFilter(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  unsigned int v3; // esi
  _DWORD *v4; // r13
  __int64 v5; // r12
  char v6; // bp
  bool v7; // r15
  KIRQL v8; // al
  unsigned int v9; // r14d
  _QWORD **v10; // rdx
  PVOID *v11; // rcx
  char v12; // si
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  KIRQL v21; // [rsp+50h] [rbp+8h]

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[7];
  v3 = *((_DWORD *)P + 12);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&v1->Lock);
  v1->MiniportThread = KeGetCurrentThread();
  v9 = *((_DWORD *)P + 20) - 1;
  v21 = v8;
  *((_DWORD *)P + 20) = v9;
  if ( !v9 )
  {
    v1->AllocatedReceiveFilterIndices[(unsigned __int64)v3 >> 3] &= ~(1 << (v3 & 7));
    v4 = (_DWORD *)P[9];
    if ( v4 )
    {
      v10 = (_QWORD **)P[2];
      if ( v10[1] != P + 2 )
        goto LABEL_18;
      v11 = (PVOID *)P[3];
      if ( *v11 != P + 2 )
        goto LABEL_18;
      *v11 = v10;
      v12 = 1;
      v10[1] = v11;
      --v4[21];
    }
    else
    {
      v12 = 0;
    }
    v13 = P[8];
    v14 = *P;
    if ( v13 )
      v5 = P[8];
    v7 = v13 != 0;
    if ( *(_QWORD **)(v14 + 8) == P )
    {
      v15 = (_QWORD *)P[1];
      if ( (_QWORD *)*v15 == P )
      {
        *v15 = v14;
        v6 = 1;
        *(_QWORD *)(v14 + 8) = v15;
        --v1->NumReceiveFilters;
        if ( !P[22] )
        {
LABEL_17:
          ExFreePoolWithTag(P, 0);
          v8 = v21;
          goto LABEL_20;
        }
        v16 = P[4];
        if ( *(_QWORD **)(v16 + 8) == P + 4 )
        {
          v17 = (_QWORD *)P[5];
          if ( (_QWORD *)*v17 == P + 4 )
          {
            *v17 = v16;
            *(_QWORD *)(v16 + 8) = v17;
            --*(_DWORD *)(P[22] + 864LL);
            v18 = P[22];
            v19 = *(_QWORD *)(v18 + 88);
            if ( *(_DWORD *)(v18 + 124) )
              --*(_DWORD *)(v19 + 656);
            else
              --*(_DWORD *)(v19 + 652);
            goto LABEL_17;
          }
        }
      }
    }
LABEL_18:
    __fastfail(3u);
  }
  v12 = 0;
LABEL_20:
  v1->MiniportThread = 0LL;
  KeReleaseSpinLock(&v1->Lock, v8);
  if ( v12 )
    ndisDereferenceReceiveQueue(v4);
  if ( v7 )
    ndisMDereferenceOpenUnlocked(v5, 0xBu);
  if ( v6 )
    ndisDereferenceMiniport(v1, 0x46u);
  return v9;
}
