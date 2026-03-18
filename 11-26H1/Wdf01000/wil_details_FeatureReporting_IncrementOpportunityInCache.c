/*
 * XREFs of wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x14008AAE8
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14008ACD0 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        wil_details_FeatureReportingCache *reporting,
        wil_details_ServiceReportingKind kind,
        unsigned int result,
        wil_details_RecordUsageResult *a4)
{
  signed __int32 exchange; // r8d
  wil_details_ServiceReportingKind *p_kindImmediate; // r10
  BOOL v8; // esi
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  signed __int32 v14; // eax

  exchange = reporting->reported.exchange;
  p_kindImmediate = &a4->kindImmediate;
  v8 = kind == wil_details_ServiceReportingKind_PotentialUniqueOpportunity;
  while ( 1 )
  {
    a4->countImmediate = 0;
    v9 = exchange | 1;
    if ( (((exchange | 1u) >> 22) & 1) != v8 )
    {
      if ( ((v9 >> 15) & 0x7F) != 0 )
      {
        a4->countImmediate = (v9 >> 15) & 0x7F;
        v10 = 5;
        p_kindImmediate = &a4->kindImmediate;
        if ( kind != wil_details_ServiceReportingKind_UniqueOpportunity )
          v10 = 1;
        v9 = exchange & 0xFFC07FFE | 1;
        *p_kindImmediate = v10;
      }
      v11 = 0;
      if ( kind == wil_details_ServiceReportingKind_PotentialUniqueOpportunity )
        v11 = 0x400000;
      v9 = v9 & 0xFFBFFFFF | v11;
    }
    v12 = (v9 >> 15) & 0x7F;
    v13 = v12 + 1;
    if ( v12 + 1 > 0x7F || v13 < v12 )
    {
      v13 = 1;
      *p_kindImmediate = kind;
      a4->countImmediate = v12;
    }
    else
    {
      p_kindImmediate = &a4->kindImmediate;
    }
    v14 = _InterlockedCompareExchange(
            (volatile signed __int32 *)reporting,
            v9 ^ (v9 ^ (v13 << 15)) & 0x3F8000,
            exchange);
    if ( exchange == v14 )
      break;
    exchange = v14;
  }
  a4->queueBackground = (exchange & 1) == 0;
  a4->ignoredUse = 0;
}
