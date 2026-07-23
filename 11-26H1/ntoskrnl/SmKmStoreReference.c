/*
 * XREFs of SmKmStoreReference @ 0x1402D2520
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1403EDE88 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmpKeyedStoreReference @ 0x140402DEC (SmpKeyedStoreReference.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1404D1A9C (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     SmGetStoreOwnerProcessId @ 0x140642A78 (SmGetStoreOwnerProcessId.c)
 *     SmProcessListRequestExtended @ 0x14081FE00 (SmProcessListRequestExtended.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall SmKmStoreReference(__int64 a1, unsigned int a2)
{
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // rtt

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(a2 & 0x3FF) >> 5));
  if ( v4 )
  {
    v5 = v4 + 40LL * (v3 & 0x1F);
    if ( v5 )
    {
      _m_prefetchw((const void *)(v5 + 8));
      v6 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8), v6 + 2, v6)
        || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v5 + 8)) )
      {
        if ( (*(_WORD *)(v5 + 32) & 0x3F) == a2 >> 10 )
          return *(_QWORD *)v5;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 8));
      }
    }
  }
  return 0LL;
}
