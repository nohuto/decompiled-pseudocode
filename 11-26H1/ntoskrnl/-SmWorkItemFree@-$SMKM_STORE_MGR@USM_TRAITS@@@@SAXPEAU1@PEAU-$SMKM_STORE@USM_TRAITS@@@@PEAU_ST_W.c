/*
 * XREFs of ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14020C9A0
 * Callers:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x14021C100 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CE80 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     SmpFpReleaseResource @ 0x1403FEA14 (SmpFpReleaseResource.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(__int64 a1, __int64 a2, _SLIST_ENTRY *a3, unsigned int *a4)
{
  unsigned int v5; // edi
  _SLIST_ENTRY *Next; // r13
  _SLIST_ENTRY v10; // xmm1
  struct _EX_RUNDOWN_REF *v11; // rbx
  __int64 v12; // rbp
  BOOL v13; // ebp
  __int64 v14; // rdx
  _SLIST_HEADER *v15; // rcx
  _SLIST_ENTRY v16; // [rsp+20h] [rbp-58h] BYREF
  _SLIST_ENTRY v17; // [rsp+30h] [rbp-48h]
  _SLIST_ENTRY *v18; // [rsp+40h] [rbp-38h]

  v5 = (__int64)a3->Next & 7;
  Next = a3[2].Next;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( a4 )
  {
    v10 = a3[1];
    v16 = *a3;
    v18 = a3[2].Next;
    v17 = v10;
  }
  v11 = 0LL;
  if ( v5 >= 4 )
  {
    v13 = 0;
    if ( v5 == 5 )
      ExFreePoolWithTag(a3, 0);
    else
      a3[2].Next = 0LL;
    goto LABEL_11;
  }
  if ( v5 == 2 )
  {
    if ( (*(_DWORD *)(&a3->Next + 1) & 0x200) != 0 )
    {
      v15 = (_SLIST_HEADER *)(a1 + 1088);
      if ( LOWORD(v15->Alignment) < 0x1000u )
      {
        RtlpInterlockedPushEntrySList(v15, a3);
        goto LABEL_10;
      }
      goto LABEL_9;
    }
    v12 = a1 + 1824;
    goto LABEL_8;
  }
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v12 = a1 + 1704;
LABEL_8:
      if ( *(_SLIST_ENTRY **)(v12 + 112) == Next && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)v12) )
      {
        if ( !*(_BYTE *)(v12 + 94) )
        {
          _InterlockedExchange64((volatile __int64 *)(v12 + 112), 0LL);
          KeSetEvent((PRKEVENT)(v12 + 8), 0, 0);
        }
        goto LABEL_10;
      }
    }
  }
  else if ( (*(_DWORD *)(&a3->Next + 1) & 0x40000000) != 0 )
  {
    v17.Next = a3[1].Next->Next;
    RtlpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(a1 + 1136) + 16LL * (*((_DWORD *)&a3->Next + 3) & 0x3F)),
      a3);
    goto LABEL_10;
  }
LABEL_9:
  ExFreePoolWithTag(a3, 0);
LABEL_10:
  v13 = v5 == 1;
LABEL_11:
  if ( (!a4 || (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(&v16, *(_QWORD *)(a2 + 3200), a2, *a4))
    && v13 )
  {
    if ( *(_SLIST_ENTRY **)(a1 + 1816) == Next && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)(a1 + 1704)) )
    {
      if ( !*(_BYTE *)(a1 + 1798) )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 1816), 0LL);
        KeSetEvent((PRKEVENT)(a1 + 1712), 0, 0);
      }
    }
    else
    {
      ExFreePoolWithTag(Next, 0);
    }
  }
  v14 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(*(_DWORD *)(a2 + 2464) & 0x3FF) >> 5));
  if ( v14 )
    v11 = (struct _EX_RUNDOWN_REF *)(v14 + 40LL * (*(_DWORD *)(a2 + 2464) & 0x1F));
  ExReleaseRundownProtection_0(v11 + 1);
}
