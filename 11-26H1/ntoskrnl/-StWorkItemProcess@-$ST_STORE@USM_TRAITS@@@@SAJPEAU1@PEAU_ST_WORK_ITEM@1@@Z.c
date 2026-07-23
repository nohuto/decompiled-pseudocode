/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690
 * Callers:
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14020B514 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14020B620 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14020B940 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020BD14 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020F10C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     SmHpChunkHeapProtect @ 0x1402510C4 (SmHpChunkHeapProtect.c)
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     SmKmStoreReference @ 0x1402D2520 (SmKmStoreReference.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140393B98 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x140394E70 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14039593C (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14042F938 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14042FA74 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x14042FB30 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1404C6C64 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406411CC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1406420B0 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140642168 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  int v6; // ebp
  int v7; // r15d
  unsigned int Stats; // eax
  int v10; // ebp
  int v11; // ebp
  int v12; // ebp
  int v13; // ebp
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  char v18; // di
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // r8
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v4 = -1;
  if ( (a2 & 1) != 0 )
  {
    v2 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v6 = *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFFEuLL) & 7;
    v5 = 0;
    v7 = 0;
  }
  else
  {
    v5 = 0;
    v6 = *(_DWORD *)a2 & 7;
    v7 = 0;
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle((_QWORD *)(a1 + 2216));
  }
  if ( !v6 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageAdd(a1 + 64, v2);
LABEL_5:
    v5 = Stats;
    goto LABEL_6;
  }
  if ( v6 == 1 )
  {
    ST_STORE<SM_TRAITS>::StDmPageRemove(a1 + 64, v2);
    goto LABEL_6;
  }
  v10 = v6 - 2;
  if ( !v10 )
  {
    Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 64, a1 + 960, v2);
    goto LABEL_5;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    Stats = ST_STORE<SM_TRAITS>::StGetStats(a1, v2);
    goto LABEL_5;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (*(_DWORD *)(v2 + 8) & 7) == 0 )
    {
      ST_STORE<SM_TRAITS>::StEmptyStore(a1);
      goto LABEL_6;
    }
    goto LABEL_57;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( (*(_DWORD *)(v2 + 8) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v2 + 8) & 7) == 2 )
      {
        v23 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 64, 0LL, 0LL);
        if ( v23 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1 + 64, v23);
      }
      else
      {
        do
        {
          v25 = 0;
          if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 64, 1LL, &v25) != 2 )
            break;
          v18 = *(_BYTE *)(a1 + 2124);
          v19 = v25;
          *(_BYTE *)(a1 + 2124) = v18 | 3;
          v20 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1 + 64, 0LL, v19);
          *(_BYTE *)(a1 + 2124) ^= (v18 ^ *(_BYTE *)(a1 + 2124)) & 3;
        }
        while ( v20 >= 0 );
      }
      goto LABEL_6;
    }
    goto LABEL_26;
  }
  if ( v13 != 1 )
  {
    v5 = -1073741822;
    goto LABEL_6;
  }
  v4 = 259;
  if ( !SmKmStoreReference(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 3200LL), *(unsigned int *)(*(_QWORD *)(a1 + 16) + 2464LL)) )
  {
    v5 = -1073741431;
    goto LABEL_6;
  }
  v14 = *(_DWORD *)(v2 + 8);
  v7 = 1;
  if ( v14 == 1 )
  {
    v15 = *(_DWORD *)(v2 + 16);
    if ( v15 != 2 )
    {
      if ( !v15 )
      {
        Stats = ST_STORE<SM_TRAITS>::StCompactionWorker(a1 + 64);
        goto LABEL_5;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1 + 64, 0LL, a1 + 920);
        goto LABEL_5;
      }
      v17 = v16 - 2;
      if ( v17 )
      {
        if ( v17 == 1 )
          ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup(a1 + 64);
      }
      else
      {
        SmHpChunkHeapProtect(a1 + 256, 0LL, 0LL);
      }
      goto LABEL_6;
    }
LABEL_26:
    ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 64);
    goto LABEL_6;
  }
  if ( v14 != 2 )
  {
    if ( v14 == 3 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(v2 + 12), 0xFFFEu);
      goto LABEL_6;
    }
    if ( v14 == 4 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(v2 + 12), 0xFFFEu);
      if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime(1LL) - *(_QWORD *)(a1 + 2432)) >= 0x989680
        && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 64, 2LL, 0LL) == 2 )
      {
        ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(a1 + 64);
        *(_QWORD *)(a1 + 2432) = KiQueryUnbiasedInterruptTime(1LL);
      }
      goto LABEL_6;
    }
LABEL_57:
    v5 = -1073741811;
    goto LABEL_6;
  }
  v21 = 2000LL;
  v22 = 200LL;
  if ( (*(_WORD *)(v2 + 14) & 1) == 0 )
  {
    v21 = 30000LL;
    v22 = 2000LL;
  }
  ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 2128), 1LL, v22, v21);
LABEL_6:
  if ( *(_QWORD *)(a1 + 2440) )
  {
    v24 = *(_DWORD *)(a1 + 2448);
    if ( (v24 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 2126) |= 1u;
      *(_DWORD *)(a1 + 2448) = v24 | 2;
      ST_STORE<SM_TRAITS>::StEmptyStore(a1);
    }
  }
  if ( v7 )
    SmKmStoreDereference(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 3200LL), *(unsigned int *)(*(_QWORD *)(a1 + 16) + 2464LL));
  if ( v4 == -1 )
    return v5;
  return v4;
}
