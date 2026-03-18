/*
 * XREFs of ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14043D088
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C5B0 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140391E08 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1403930E0 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14043D1C4 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     SmEtwLogCompactionOp @ 0x140527960 (SmEtwLogCompactionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionWorker(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // eax
  int v4; // esi
  int v6; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0;
  v2 = (unsigned __int64)&stru_140E27B08.QuantumTarget & -(__int64)((WORD2(stru_140E27B08.InitialStack) & 0x200) != 0);
  if ( v2 )
    SmEtwLogCompactionOp(
      (unsigned __int64)&stru_140E27B08.QuantumTarget & -(__int64)((WORD2(stru_140E27B08.InitialStack) & 0x200) != 0),
      13,
      a1,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
  *(_BYTE *)(a1 + 2060) &= 0xFCu;
  v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0, &v6);
  if ( v3 == 2 )
  {
    *(_BYTE *)(a1 + 2060) |= 3u;
    while ( 1 )
    {
      v4 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1, 1, v6);
      v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0, &v6);
      if ( v4 < 0 )
        break;
      if ( v3 != 2 )
        goto LABEL_7;
    }
    if ( v3 == 2 )
      v3 = 1;
  }
  else
  {
LABEL_7:
    v4 = 0;
  }
  *(_BYTE *)(a1 + 2060) &= 0xFCu;
  if ( v3 )
    ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v3);
  if ( v2 )
    SmEtwLogCompactionOp(v2, 14, a1, 0, v4, 0, 0, 0, 0, 0, 0);
  return (unsigned int)v4;
}
