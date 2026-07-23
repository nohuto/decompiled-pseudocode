/*
 * XREFs of ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x140356940
 * Callers:
 *     SmQueryStoreCommitUsage @ 0x140642364 (SmQueryStoreCommitUsage.c)
 *     SmProcessQueryStoreStats @ 0x1409BC61C (SmProcessQueryStoreStats.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     SmKmStoreGet @ 0x140356910 (SmKmStoreGet.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140357EA4 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     SmpKeyedStoreEntryGet @ 0x140402EE0 (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmpProcessQueryStoreStats(struct _EPROCESS *a1, struct _ST_STATS *a2)
{
  _QWORD *PartitionObject; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // ebx
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int StoreStats; // ebx
  BOOLEAN v11; // al
  int v13; // [rsp+40h] [rbp+8h] BYREF
  struct _EPROCESS *v14; // [rsp+50h] [rbp+18h]

  PartitionObject = a1->PartitionObject;
  v14 = 0LL;
  v4 = PartitionObject[3];
  if ( a1 != *(struct _EPROCESS **)(v4 + 2280) )
  {
    v14 = a1;
    v5 = SmpKeyedStoreEntryGet((struct _KTHREAD *)(v4 + 2344));
    if ( v5 )
    {
      LOWORD(v6) = *(_WORD *)(v5 + 16);
      v7 = 0;
      goto LABEL_4;
    }
    return (unsigned int)-1073741275;
  }
  v6 = *(_DWORD *)(v4 + 2384);
  if ( v6 == -1 )
    return (unsigned int)-1073741275;
  v11 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v4 + 2224));
  v7 = v11;
  if ( !v11 )
    return (unsigned int)-1073740640;
LABEL_4:
  v8 = SmKmStoreGet(v4, v6);
  v13 = 1536;
  StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v8, v9, a2, &v13);
  if ( v7 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v4 + 2224));
  return StoreStats;
}
