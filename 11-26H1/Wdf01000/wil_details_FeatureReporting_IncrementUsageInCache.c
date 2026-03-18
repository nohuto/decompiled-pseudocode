/*
 * XREFs of wil_details_FeatureReporting_IncrementUsageInCache @ 0x14008ABDC
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14008ACD0 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        wil_details_FeatureReportingCache *reporting,
        wil_details_ServiceReportingKind kind,
        unsigned int result,
        wil_details_RecordUsageResult *a4)
{
  signed __int32 exchange; // r8d
  wil_details_ServiceReportingKind *p_kindImmediate; // r10
  BOOL v8; // esi
  unsigned int v9; // eax
  int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  signed __int32 v13; // eax

  exchange = reporting->reported.exchange;
  p_kindImmediate = &a4->kindImmediate;
  v8 = kind == wil_details_ServiceReportingKind_PotentialUniqueUsage;
  while ( 1 )
  {
    a4->countImmediate = 0;
    v9 = exchange | 1;
    if ( (((exchange | 1u) >> 14) & 1) != v8 )
    {
      if ( ((v9 >> 5) & 0x1FF) != 0 )
      {
        a4->countImmediate = (v9 >> 5) & 0x1FF;
        p_kindImmediate = &a4->kindImmediate;
        a4->kindImmediate = kind == wil_details_ServiceReportingKind_UniqueUsage
                          ? wil_details_ServiceReportingKind_PotentialUniqueUsage
                          : wil_details_ServiceReportingKind_UniqueUsage;
        v9 = exchange & 0xFFFFC01E | 1;
      }
      v10 = 0;
      if ( kind == wil_details_ServiceReportingKind_PotentialUniqueUsage )
        v10 = 0x4000;
      v9 = v9 & 0xFFFFBFFF | v10;
    }
    v11 = (v9 >> 5) & 0x1FF;
    v12 = v11 + 1;
    if ( v11 + 1 > 0x1FF || v12 < v11 )
    {
      LOWORD(v12) = 1;
      *p_kindImmediate = kind;
      a4->countImmediate = v11;
    }
    else
    {
      p_kindImmediate = &a4->kindImmediate;
    }
    v13 = _InterlockedCompareExchange(
            (volatile signed __int32 *)reporting,
            v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(32 * v12)) & 0x3FE0,
            exchange);
    if ( exchange == v13 )
      break;
    exchange = v13;
  }
  a4->queueBackground = (exchange & 1) == 0;
  a4->ignoredUse = 0;
}
