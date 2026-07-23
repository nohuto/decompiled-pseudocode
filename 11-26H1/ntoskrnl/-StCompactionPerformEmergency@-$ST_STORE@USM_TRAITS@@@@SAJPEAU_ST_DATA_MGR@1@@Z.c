/*
 * XREFs of ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406411CC
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140392AC8 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140393630 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x140394E70 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     MmStoreDecommitVirtualMemory @ 0x1403969DC (MmStoreDecommitVirtualMemory.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140396C10 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1404C6C64 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmEtwLogCompactionOp @ 0x140529FD0 (SmEtwLogCompactionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(__int64 a1)
{
  REGHANDLE *v2; // rbp
  int v3; // edi
  int v4; // r14d
  unsigned int v5; // esi
  int v6; // r13d
  __int64 UnbiasedInterruptTime; // rax
  __int64 v8; // rdx
  _WORD *v9; // r15
  _WORD *v10; // r12
  _WORD *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // r11d
  __int64 v14; // rsi
  unsigned __int16 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // r14d
  REGHANDLE *v24; // [rsp+60h] [rbp-58h]
  unsigned int v25; // [rsp+C0h] [rbp+8h]
  int v26; // [rsp+C8h] [rbp+10h]
  _WORD *v27; // [rsp+D0h] [rbp+18h]
  __int64 v28; // [rsp+D8h] [rbp+20h]

  v2 = (REGHANDLE *)((unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)((WORD2(stru_140E27C48.InitialStack) & 0x200) != 0));
  v24 = v2;
  if ( v2 )
    SmEtwLogCompactionOp(
      (REGHANDLE *)((unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)((WORD2(stru_140E27C48.InitialStack) & 0x200) != 0)),
      0xDu,
      a1,
      1,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
  v3 = *(_DWORD *)(a1 + 784);
  v26 = v3;
  v4 = 0;
  ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 0, 0LL);
  v5 = (unsigned int)(v3 - 4096) >> 4;
  v6 = 0;
  v25 = v5;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v8 = *(_QWORD *)(a1 + 1368);
  v28 = UnbiasedInterruptTime;
  v9 = (_WORD *)(v8 + 2LL * *(unsigned int *)(a1 + 1416));
  v27 = v9;
  v10 = (_WORD *)(v8 + 2LL * *(unsigned int *)(a1 + 848));
  while ( 2 )
  {
    v11 = v9;
    if ( v9 >= v10 )
      goto LABEL_26;
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 792) + 2552LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 792) + 2556LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 792) + 3064LL) )
      {
        if ( (v6 & 3) == 0 )
        {
          if ( v6 )
          {
            v12 = KiQueryUnbiasedInterruptTime();
            if ( v12 - v28 >= (-(__int64)(v13 < 0x40) & 0x4C4B40uLL) + 5000000 )
              break;
          }
        }
      }
      if ( (*v11 & 0x1FFF) == 0 || (*v11 & 0x1FFFu) > v5 )
        goto LABEL_24;
      v14 = ((__int64)v11 - *(_QWORD *)(a1 + 1368)) >> 1;
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 792), v14) )
      {
        if ( (_DWORD)v14 == *(_DWORD *)(a1 + 16 * (((unsigned __int64)v15 >> 13) + 89)) )
          goto LABEL_23;
        ++v6;
        if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, 0LL, v14, 0LL, v14, 0) >= 0 )
          goto LABEL_21;
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 2, 0LL) != 2 )
          break;
        v16 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v14, 0, 1LL);
        if ( v16 && v16 != -1 )
        {
          if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, v16, v14, v16, v14, 0) < 0 )
            NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
          ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v14, v17, v18);
LABEL_21:
          v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 792) + 2648LL) + 8LL * (unsigned int)v14);
          if ( v20 >= 0 )
          {
            v19 = (16 * (*v11 & 0x1FFF) + 4095) & 0xFFFFF000;
            MmStoreDecommitVirtualMemory(
              (unsigned int)v19 + (v20 & 0x7FFFFFFFFFFF0000LL),
              (unsigned int)(v26 - v19),
              v19);
          }
          goto LABEL_23;
        }
      }
      v4 = 1;
LABEL_23:
      v5 = v25;
LABEL_24:
      ++v11;
    }
    while ( v11 < v10 );
    v2 = v24;
    v9 = v27;
    v5 = v25;
LABEL_26:
    if ( v11 == v10 )
    {
      if ( v9 != *(_WORD **)(a1 + 1368) )
      {
        v10 = v9;
        v27 = *(_WORD **)(a1 + 1368);
        v9 = v27;
        continue;
      }
      LODWORD(v21) = 0;
    }
    else
    {
      v21 = ((__int64)v11 - *(_QWORD *)(a1 + 1368)) >> 1;
    }
    break;
  }
  v22 = -v4;
  *(_DWORD *)(a1 + 1416) = v21;
  if ( v2 )
    SmEtwLogCompactionOp(v2, 0xEu, a1, 1, v22 != 0 ? 0x2D : 0, 0, 0, 0, 0, 0, 0);
  return v22 != 0 ? 0xC000022D : 0;
}
