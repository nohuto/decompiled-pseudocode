/*
 * XREFs of ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x14027EE40 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140390CC0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140441060 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140203D98 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_.c)
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140280D40 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140280DD0 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x1403FEA14 (SmpFpReleaseResource.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     SmpFpWaitForResource @ 0x14064358C (SmpFpWaitForResource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(struct _MDL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // r13d
  PVOID v8; // rbx
  __int64 v9; // rsi
  __int64 *v10; // rdx
  __int128 *v11; // rdx
  int v12; // edi
  __int128 *v13; // r9
  int v14; // eax
  BOOL v15; // edi
  int v16; // r13d
  unsigned __int64 *v17; // r9
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  struct _KTHREAD *CurrentThread; // r10
  __int64 v21; // rdx
  __int64 *v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9
  struct _KTHREAD *v25; // r10
  unsigned __int64 *v26; // rcx
  KPRIORITY PriorityThread; // eax
  struct _MDL *v28; // rbx
  PVOID MappedSystemVa; // rsi
  unsigned __int64 *v30; // r9
  __int128 v32; // [rsp+30h] [rbp-40h] BYREF
  struct _MDL *Next; // [rsp+40h] [rbp-30h] BYREF
  int v34; // [rsp+48h] [rbp-28h]
  __int16 v35; // [rsp+4Ch] [rbp-24h]
  __int16 v36; // [rsp+4Eh] [rbp-22h]
  unsigned __int64 *v37; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 *v38; // [rsp+58h] [rbp-18h]
  PMDL MemoryDescriptorList[2]; // [rsp+60h] [rbp-10h]
  __int16 v40; // [rsp+C0h] [rbp+50h]

  v40 = a3;
  *(_OWORD *)MemoryDescriptorList = 0LL;
  v38 = (unsigned __int64 *)&v37;
  v32 = 0LL;
  v37 = 0LL;
  v7 = *(_DWORD *)a4;
  *((_QWORD *)&v32 + 1) = &v32;
  v8 = 0LL;
  v9 = 0LL;
  *(_QWORD *)&v32 = 0LL;
  if ( (*(_DWORD *)a4 & 7) != 2 )
    goto LABEL_2;
  v14 = *(_DWORD *)(a2 + 2120);
  v9 = *(_QWORD *)(a4 + 16);
  if ( (v14 & 2) == 0 )
    goto LABEL_2;
  v15 = 0;
  if ( (v14 & 1) != 0 )
    v15 = *(_DWORD *)(v9 + 40) <= 0x1000u;
  v8 = (*(_BYTE *)(v9 + 10) & 5) != 0
     ? *(PVOID *)(v9 + 24)
     : MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( v8 )
    goto LABEL_2;
  if ( v15 )
  {
    v8 = (PVOID)SmpFpWaitForResource((PEX_SPIN_LOCK)(a2 + 1824));
    MmMapLockedPagesWithReservedMapping(v8, 0x6D526D73u, (PMDL)v9, MmCached);
  }
  if ( v8 )
  {
LABEL_2:
    v10 = (__int64 *)*((_QWORD *)&v32 + 1);
    *(_QWORD *)a4 = *(_DWORD *)a4 & 7 | ((**((_QWORD **)&v32 + 1) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
    *v10 = a4 | *(_DWORD *)v10 & 7;
    *((_QWORD *)&v32 + 1) = a4;
    v11 = (__int128 *)a4;
    if ( (__int128 *)a4 != &v32 )
    {
      v37 = (unsigned __int64 *)v32;
      v38 = (unsigned __int64 *)a4;
      *((_QWORD *)&v32 + 1) = &v32;
      *(_QWORD *)&v32 = 0LL;
      v11 = &v32;
    }
    if ( v8 )
      MemoryDescriptorList[0] = (PMDL)v9;
    MemoryDescriptorList[1] = a1;
    v12 = 0;
  }
  else
  {
    v11 = (__int128 *)*((_QWORD *)&v32 + 1);
    v12 = -1073741670;
  }
  while ( v11 != &v32 )
  {
    v13 = (__int128 *)v32;
    *(_QWORD *)&v32 = *(_QWORD *)v32 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v13 == v11 )
    {
      *(_QWORD *)&v32 = 0LL;
      *((_QWORD *)&v32 + 1) = &v32;
    }
    else
    {
      *(_QWORD *)v11 = *(_QWORD *)v11 & 7LL | (8LL * (*(_QWORD *)v11 >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v13, a1);
    v11 = (__int128 *)*((_QWORD *)&v32 + 1);
  }
  v16 = v7 & 7;
  if ( v12 < 0 )
  {
    v28 = MemoryDescriptorList[0];
    if ( MemoryDescriptorList[0] )
    {
      MappedSystemVa = MemoryDescriptorList[0]->MappedSystemVa;
      if ( *(_QWORD *)(a2 + 1936) == -1LL && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)(a2 + 1824)) )
      {
        MmUnmapReservedMapping(MappedSystemVa, 0x6D526D73u, v28);
        if ( !*(_BYTE *)(a2 + 1918) )
        {
          _InterlockedExchange64((volatile __int64 *)(a2 + 1936), 0LL);
          KeSetEvent((PRKEVENT)(a2 + 1832), 0, 0);
        }
      }
      else
      {
        MmUnmapLockedPages(MappedSystemVa, v28);
      }
    }
  }
  else
  {
    if ( v16 != 2 )
      goto LABEL_24;
    if ( *(_QWORD *)(a2 + 2128) )
    {
      Next = a1->Next;
      v34 = *(_DWORD *)(a4 + 24);
      v36 = 0;
      v35 = v40;
      guard_dispatch_icall_no_overrides(a2, &Next, 4LL);
    }
    CurrentThread = KeGetCurrentThread();
    v21 = *(_QWORD *)(a2 + 8 * ((unsigned __int64)(v40 & 0x3FF) >> 5));
    v22 = v21 ? (__int64 *)(v21 + 40LL * (v40 & 0x1F)) : 0LL;
    v23 = *v22;
    if ( (*(_BYTE *)(v23 + 2469) & 4) != 0
      && (*(_DWORD *)(a4 + 8) & 0x200) != 0
      && (int)PsGetIoPriorityThread(CurrentThread, v21, a3, v23) >= 2 )
    {
      if ( v38 != (unsigned __int64 *)&v37 )
      {
        v26 = v37;
        v37 = (unsigned __int64 *)(*v37 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v26 == v38 )
        {
          v37 = 0LL;
          v38 = (unsigned __int64 *)&v37;
        }
        else
        {
          *v38 = *v38 & 7 | (8 * (*v38 >> 3) - 8);
        }
      }
      *(_QWORD *)(a4 + 40) = 0LL;
      *(_QWORD *)(a4 + 48) = 0LL;
      *(_QWORD *)(a4 + 56) = 0LL;
      *(_QWORD *)(a4 + 64) = 0LL;
      *(_QWORD *)(a4 + 72) = v24;
      *(_QWORD *)(a4 + 80) = a2 + 304;
      PriorityThread = KeQueryPriorityThread(v25);
      SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(a2, a2 + 304, a4 + 40, PriorityThread);
      MemoryDescriptorList[0] = 0LL;
      v12 = 0;
    }
    else
    {
LABEL_24:
      if ( v38 == (unsigned __int64 *)&v37 )
      {
        v17 = 0LL;
      }
      else
      {
        v17 = v37;
        v37 = (unsigned __int64 *)(*v37 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v17 == v38 )
        {
          v38 = (unsigned __int64 *)&v37;
          v37 = 0LL;
        }
        else
        {
          *v38 = *v38 & 7 | (8 * (*v38 >> 3) - 8);
        }
      }
      v18 = *(_QWORD *)(a2 + 8 * ((unsigned __int64)(v40 & 0x3FF) >> 5));
      if ( v18 )
        v19 = (_QWORD *)(v18 + 40LL * (v40 & 0x1F));
      else
        v19 = 0LL;
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*v19, v17, 0LL);
      MemoryDescriptorList[0] = 0LL;
      v12 = 0;
    }
  }
  while ( v38 != (unsigned __int64 *)&v37 )
  {
    v30 = v37;
    v37 = (unsigned __int64 *)(*v37 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( v30 == v38 )
    {
      v38 = (unsigned __int64 *)&v37;
      v37 = 0LL;
    }
    else
    {
      *v38 = *v38 & 7 | (8 * (*v38 >> 3) - 8);
    }
    if ( !v30 )
      break;
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v30, -1LL);
  }
  return (unsigned int)v12;
}
