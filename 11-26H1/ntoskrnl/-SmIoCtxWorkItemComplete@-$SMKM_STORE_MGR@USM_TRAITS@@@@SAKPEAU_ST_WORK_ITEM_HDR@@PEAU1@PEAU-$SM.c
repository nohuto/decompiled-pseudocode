/*
 * XREFs of ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CE80
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14020C9A0 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14020CC1C (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 * Callees:
 *     MiStoreModifiedWriteComplete @ 0x14020BAAC (MiStoreModifiedWriteComplete.c)
 *     ?SmProcessIoCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z @ 0x14027E230 (-SmProcessIoCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027F390 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x1403FEA14 (SmpFpReleaseResource.c)
 *     SmEvictComplete @ 0x140468D14 (SmEvictComplete.c)
 *     MmStoreReleaseResidentAvailableForRead @ 0x140476B24 (MmStoreReleaseResidentAvailableForRead.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(int *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rdi
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // r9
  int v11; // ecx
  __int64 v12; // r14
  unsigned int v13; // r15d
  int v14; // eax
  int v16; // eax
  int *v17; // rcx
  unsigned int v18; // ebp
  int v19; // ebp
  unsigned int v20; // r15d
  int v21; // eax
  __int64 v22; // rcx
  void *v23; // rbp
  __int64 v24; // r13
  int v25; // eax
  int v26; // eax
  int v27; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 4);
  if ( v4 <= 1 )
    v8 = 0LL;
  else
    v8 = *(_QWORD *)v4;
  v9 = *a1;
  v10 = *(_DWORD *)(a3 + 2464) & 0x3FF;
  v11 = *a1 & 7;
  if ( v11 )
  {
    if ( v11 != 2 )
    {
      v12 = 0LL;
      v13 = 0;
      goto LABEL_6;
    }
    v12 = *((_QWORD *)a1 + 2);
    v20 = *(_DWORD *)(v12 + 40);
    *(_QWORD *)(v4 + 8) = 0LL;
    v9 = *a1;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 2);
    v20 = *(_DWORD *)(v12 + 40);
  }
  v13 = v20 >> 12;
LABEL_6:
  v14 = v9 & 7;
  if ( v14 != 1 )
  {
    if ( !v14 )
    {
      v16 = a1[6];
      v17 = (int *)*((_QWORD *)a1 + 4);
      v18 = (unsigned int)a1[2] >> 3;
      v27 = v16;
      *v17 = a4;
      v19 = v18 & 0x7FFFFFF;
      if ( v19 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmProcessIoCompletion(a2, (unsigned int)&v27, v19, v10, a4, 1);
        v16 = v27;
        a4 = -1073741823;
      }
      if ( v19 != v13 && (a1[3] & 0x40) == 0 )
      {
        v27 = v19 + v16;
        SMKM_STORE_MGR<SM_TRAITS>::SmProcessIoCompletion(a2, (unsigned int)&v27, v13 - v19, v10, a4, 1);
      }
      goto LABEL_13;
    }
    v21 = v14 - 2;
    if ( !v21 )
    {
      v22 = *((_QWORD *)a1 + 4);
      if ( (unsigned __int8)a1[2] )
      {
        *(_WORD *)(v22 + 8) = (unsigned __int8)a1[2];
        if ( (*(_BYTE *)(a2 + 2120) & 8) != 0 )
          a4 = 0;
      }
      *(_DWORD *)v22 = a4;
      if ( (*(_DWORD *)(a2 + 2120) & 0x10) != 0 )
      {
        if ( *(_QWORD *)(a2 + 2328) == v4 )
          _InterlockedExchange64((volatile __int64 *)(a2 + 2328), 0LL);
        else
          MmStoreReleaseResidentAvailableForRead(*(_QWORD *)(a2 + 2208), v13, a3, v10);
      }
      goto LABEL_13;
    }
    v25 = v21 - 1;
    if ( !v25 )
    {
      *(_DWORD *)v4 = a4;
      *(_QWORD *)(v4 + 8) = (unsigned int)a1[3];
      goto LABEL_13;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      if ( v26 != 1 )
        goto LABEL_13;
    }
    else if ( (a1[2] & 7) == 0 )
    {
      return 0LL;
    }
    *(_DWORD *)v4 = a4;
    *(_QWORD *)(v4 + 8) = 0LL;
    goto LABEL_13;
  }
  if ( (a1[4] & 1) != 0 )
    return 0LL;
  SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(a2, a1 + 2, (unsigned int)a1[3], v10);
  SmEvictComplete(a2, a1 + 2, (unsigned int)a1[3]);
  *(_DWORD *)v4 = 0;
LABEL_13:
  if ( v12 )
  {
    if ( (*(_BYTE *)(v12 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v12, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( (*a1 & 7) == 2 && (*(_DWORD *)(a2 + 2120) & 2) != 0 )
    {
      v23 = *(void **)(v12 + 24);
      v24 = a2 + 1824;
      if ( *(_QWORD *)(v24 + 112) == v4 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)v24) )
      {
        MmUnmapReservedMapping(v23, 0x6D526D73u, (PMDL)v12);
        if ( !*(_BYTE *)(v24 + 94) )
        {
          _InterlockedExchange64((volatile __int64 *)(v24 + 112), 0LL);
          KeSetEvent((PRKEVENT)(v24 + 8), 0, 0);
        }
      }
      else
      {
        MmUnmapLockedPages(v23, (PMDL)v12);
      }
    }
  }
  if ( v8 )
  {
    if ( (*a1 & 7) != 0 )
    {
      if ( (*a1 & 7) == 2 )
        *(_QWORD *)(v4 + 8) = (unsigned __int16)*(_QWORD *)(v4 + 8);
    }
    else
    {
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    if ( v8 < 0 )
      KeSetEvent((PRKEVENT)v8, 1, 0);
    else
      MiStoreModifiedWriteComplete((PSLIST_ENTRY)(v8 | 0x8000000000000000uLL));
  }
  return 1LL;
}
