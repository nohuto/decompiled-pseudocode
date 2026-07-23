/*
 * XREFs of ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140202D0C
 * Callers:
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x140204C38 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1404C6C64 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404EAAB4 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     SmWorkItemQueue @ 0x14028056C (SmWorkItemQueue.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  signed __int16 v4; // ax
  signed __int16 v5; // tt

  v2 = 0;
  if ( (*(_BYTE *)(a2 + 12) & 1) == 0 )
  {
    _m_prefetchw((const void *)(a2 + 12));
    v4 = *(_WORD *)(a2 + 12);
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 12), v4 | 1, v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 1) == 0 )
    {
      SmWorkItemQueue(*(_QWORD *)(a1 + 792), a2, 2LL);
      return 1;
    }
  }
  return v2;
}
