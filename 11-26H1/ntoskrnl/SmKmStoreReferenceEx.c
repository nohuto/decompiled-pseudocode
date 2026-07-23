/*
 * XREFs of SmKmStoreReferenceEx @ 0x1402D2430
 * Callers:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140391040 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1404B17F0 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmEtwEnableCallback @ 0x140820670 (SmEtwEnableCallback.c)
 *     SmProcessCompressionInfoRequest @ 0x140B286E8 (SmProcessCompressionInfoRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall SmKmStoreReferenceEx(__int64 a1, unsigned int a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned int v5; // edi
  char v6; // cl
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // rtt

  if ( a2 >= 0x400 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)a2 >> 5));
  if ( !v3 )
    return 0LL;
  v4 = v3 + 40LL * (a2 & 0x1F);
  if ( !v4 )
    return 0LL;
  v5 = a2 | ((*(_WORD *)(v4 + 32) & 0x3F) << 10);
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(a2 & 0x3FF) >> 5));
  if ( !v7 )
    return 0LL;
  v8 = v7 + 40LL * (v6 & 0x1F);
  if ( !v8 )
    return 0LL;
  _m_prefetchw((const void *)(v8 + 8));
  v9 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8), v9 + 2, v9)
    && !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v8 + 8)) )
  {
    return 0LL;
  }
  if ( (*(_WORD *)(v8 + 32) & 0x3F) != v5 >> 10 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 8));
    return 0LL;
  }
  return *(_QWORD *)v8;
}
