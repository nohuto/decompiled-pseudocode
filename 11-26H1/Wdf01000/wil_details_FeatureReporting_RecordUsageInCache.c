/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x14008ACD0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14008AEDC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x14008AAE8 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x14008ABDC (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

wil_details_RecordUsageResult *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        wil_details_RecordUsageResult *result,
        wil_details_FeatureReportingCache *reporting,
        unsigned __int32 kind,
        unsigned int payloadId)
{
  wil_details_RecordUsageResult *v6; // r9
  unsigned __int32 v7; // ebx
  unsigned __int32 exchange; // eax
  BOOL v9; // edx
  unsigned __int32 v10; // ett
  int v11; // ecx
  unsigned __int32 v12; // r8d
  unsigned __int32 v13; // r8d
  unsigned __int32 v14; // r8d
  signed __int32 v15; // edx
  int v16; // r10d
  signed __int32 v17; // ebx
  signed __int32 v18; // eax

  v6 = result;
  *(_OWORD *)&result->queueBackground = 0LL;
  *(_QWORD *)&result->ignoredUse = 0LL;
  switch ( kind )
  {
    case 0u:
      goto LABEL_35;
    case 1u:
LABEL_34:
      wil_details_FeatureReporting_IncrementOpportunityInCache(
        reporting,
        (wil_details_ServiceReportingKind)kind,
        kind,
        result);
      return v6;
    case 2u:
    case 3u:
      goto LABEL_17;
    case 4u:
LABEL_35:
      wil_details_FeatureReporting_IncrementUsageInCache(
        reporting,
        (wil_details_ServiceReportingKind)kind,
        kind,
        result);
      return v6;
    case 5u:
      goto LABEL_34;
  }
  if ( kind - 6 >= 2 )
  {
    v7 = kind - 320;
    if ( (int)(kind - 320) >= 64 )
      goto LABEL_16;
    exchange = reporting->recorded.exchange;
    do
    {
      v9 = (exchange & 0x10) != 0 && ((exchange >> 5) & 0x3F) == v7;
      result->ignoredUse = v9;
      v10 = exchange;
      exchange = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&reporting->recorded,
                   exchange ^ ((unsigned __int16)exchange ^ (unsigned __int16)(32 * v7)) & 0x7E0 | 0x10,
                   exchange);
    }
    while ( v10 != exchange );
    if ( !result->ignoredUse )
    {
LABEL_16:
      result->kindImmediate = kind;
      result->countImmediate = 1;
      result->payloadId = payloadId;
    }
    return v6;
  }
LABEL_17:
  v11 = 0;
  v12 = kind - 2;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 3;
      if ( v14 )
      {
        if ( v14 == 1 )
          v11 = 16;
      }
      else
      {
        v11 = 4;
      }
    }
    else
    {
      v11 = 8;
    }
  }
  else
  {
    v11 = 2;
  }
  v15 = reporting->reported.exchange;
  v16 = 1;
  while ( 1 )
  {
    v17 = v15 | v11 | 1;
    v6->ignoredUse = (v15 | v11) == v15;
    if ( (v15 | v11) == v15 )
      v17 = v15 | v11;
    v18 = _InterlockedCompareExchange((volatile signed __int32 *)reporting, v17, v15);
    if ( v15 == v18 )
      break;
    v15 = v18;
  }
  if ( (v17 & 1) == 0 || (v15 & 1) != 0 )
    v16 = 0;
  v6->queueBackground = v16;
  return v6;
}
