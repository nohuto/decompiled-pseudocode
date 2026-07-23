/*
 * XREFs of ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14020CC1C
 * Callers:
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020D410 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140397DB0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CE80 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     SmpFpReleaseResource @ 0x1403FEA14 (SmpFpReleaseResource.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x14064107C (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(__int64 a1, _SLIST_ENTRY *a2, unsigned int a3)
{
  __int64 v5; // r12
  unsigned int v6; // r15d
  _SLIST_ENTRY *Next; // r13
  struct _EX_RUNDOWN_REF *v8; // rbx
  __int64 v9; // rsi
  BOOL v10; // esi
  unsigned int v11; // ecx
  __int64 v12; // rdx
  _SLIST_ENTRY v13; // [rsp+20h] [rbp-58h] BYREF
  _SLIST_ENTRY v14; // [rsp+30h] [rbp-48h]
  _SLIST_ENTRY *v15; // [rsp+40h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 3200);
  v6 = (__int64)a2->Next & 7;
  Next = a2[2].Next;
  v13 = *a2;
  v14 = a2[1];
  v15 = a2[2].Next;
  if ( v6 < 4 )
  {
    if ( v6 == 2 && (*(_DWORD *)(&a2->Next + 1) & 0x200) != 0 )
    {
      if ( *(_WORD *)(v5 + 1088) < 0x1000u )
      {
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 1088), a2);
        v8 = 0LL;
        goto LABEL_8;
      }
      v8 = 0LL;
      goto LABEL_7;
    }
    v8 = 0LL;
    if ( !v6 && (*(_DWORD *)(&a2->Next + 1) & 0x40000000) != 0 )
    {
      v14.Next = a2[1].Next->Next;
      RtlpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v5 + 1136) + 16LL * (*((_DWORD *)&a2->Next + 3) & 0x3F)),
        a2);
      goto LABEL_8;
    }
    if ( v6 == 1 )
    {
      v9 = v5 + 1704;
    }
    else
    {
      if ( v6 != 2 )
      {
LABEL_7:
        ExFreePoolWithTag(a2, 0);
LABEL_8:
        v10 = v6 == 1;
        goto LABEL_9;
      }
      v9 = v5 + 1824;
    }
    if ( *(_SLIST_ENTRY **)(v9 + 112) == Next && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)v9) )
    {
      if ( !*(_BYTE *)(v9 + 94) )
      {
        _InterlockedExchange64((volatile __int64 *)(v9 + 112), 0LL);
        KeSetEvent((PRKEVENT)(v9 + 8), 0, 0);
      }
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v8 = 0LL;
  v10 = 0;
  if ( v6 == 5 )
    ExFreePoolWithTag(a2, 0);
  else
    a2[2].Next = 0LL;
LABEL_9:
  if ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(&v13, *(_QWORD *)(a1 + 3200), a1, a3) && v10 )
  {
    if ( *(_SLIST_ENTRY **)(v5 + 1816) == Next && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)(v5 + 1704)) )
    {
      if ( !*(_BYTE *)(v5 + 1798) )
      {
        _InterlockedExchange64((volatile __int64 *)(v5 + 1816), 0LL);
        KeSetEvent((PRKEVENT)(v5 + 1712), 0, 0);
      }
    }
    else
    {
      ExFreePoolWithTag(Next, 0);
    }
  }
  v11 = *(_DWORD *)(a1 + 2464) & 0x3FF;
  v12 = *(_QWORD *)(v5 + 8 * ((unsigned __int64)v11 >> 5));
  if ( v12 )
    v8 = (struct _EX_RUNDOWN_REF *)(v12 + 40LL * (v11 & 0x1F));
  ExReleaseRundownProtection_0(v8 + 1);
}
