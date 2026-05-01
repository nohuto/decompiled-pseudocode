/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800480A0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800759C4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x180075A4C (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x18004822C (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x180074354 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1800758D0 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  volatile signed __int32 *v3; // r10
  unsigned int v5; // edi
  BOOL v8; // esi
  int v10; // ecx
  signed __int32 v11; // eax
  signed __int32 v12; // edx
  signed __int32 v13; // ett
  unsigned int v14; // edx
  unsigned __int32 v15; // eax
  unsigned __int32 v16; // ett

  v3 = *(volatile signed __int32 **)(a1 + 8);
  v5 = 0;
  if ( a3 == 4 )
  {
LABEL_2:
    wil_details_FeatureReporting_IncrementUsageInCache(v3, a3);
LABEL_3:
    v8 = 0;
  }
  else
  {
    switch ( a3 )
    {
      case 0u:
        goto LABEL_2;
      case 1u:
      case 5u:
        wil_details_FeatureReporting_IncrementOpportunityInCache(v3, a3);
        goto LABEL_3;
      case 2u:
      case 3u:
      case 6u:
      case 7u:
        v10 = 0;
        switch ( a3 )
        {
          case 2u:
            v10 = 2;
            break;
          case 3u:
            v10 = 8;
            break;
          case 6u:
            v10 = 4;
            break;
          case 7u:
            v10 = 16;
            break;
        }
        v11 = *v3;
        do
        {
          v8 = (v11 | v10) == v11;
          v12 = v11 | v10 | 1;
          if ( (v11 | v10) == v11 )
            v12 = v11 | v10;
          v13 = v11;
          v11 = _InterlockedCompareExchange(v3, v12, v11);
        }
        while ( v13 != v11 );
        break;
      default:
        v14 = a3 - 320;
        if ( (int)(a3 - 320) >= 64 )
          goto LABEL_3;
        v15 = *((_DWORD *)v3 + 1);
        do
        {
          if ( (v15 & 0x10) == 0 || (v8 = 1, ((v15 >> 5) & 0x3F) != v14) )
            v8 = 0;
          v16 = v15;
          v15 = _InterlockedCompareExchange(
                  v3 + 1,
                  v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)(32 * v14)) & 0x7E0 | 0x10,
                  v15);
        }
        while ( v16 != v15 );
        break;
    }
  }
  if ( (a2 & 0x400) != 0 && a3 != 254 )
    wil_RtlStagingConfig_RecordFeatureUsage(*(unsigned int *)(a1 + 24), a3, (a2 >> 11) & 1);
  LOBYTE(v5) = !v8;
  return v5;
}
