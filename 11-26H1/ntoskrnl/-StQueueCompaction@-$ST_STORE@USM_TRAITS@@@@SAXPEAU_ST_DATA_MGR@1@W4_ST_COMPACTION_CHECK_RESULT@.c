/*
 * XREFs of ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14042FA74
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14042F938 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x14042FB30 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     SmEtwLogCompactionOp @ 0x140529FD0 (SmEtwLogCompactionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StQueueCompaction(__int64 a1, int a2)
{
  unsigned __int64 v4; // rcx
  char v5; // al
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8

  v4 = (unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)((WORD2(stru_140E27C48.InitialStack) & 0x200) != 0);
  if ( v4 )
    SmEtwLogCompactionOp(v4, 12, a1, a2, 0, 0, 0, 0, 0, 0, 0);
  v5 = *(_BYTE *)(a1 + 2060);
  if ( a2 == 1 )
    v6 = v5 & 0xFC | 1;
  else
    v6 = v5 & 0xFC | 2;
  v7 = *(_QWORD *)(a1 + 2064);
  v8 = 4294967294LL;
  *(_BYTE *)(a1 + 2060) = v6;
  v9 = 30LL;
  if ( a2 != 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
  }
  return ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v7, 0LL, v9, v8);
}
