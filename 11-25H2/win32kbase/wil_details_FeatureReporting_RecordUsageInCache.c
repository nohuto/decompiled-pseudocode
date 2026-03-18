/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x14013A8B8
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14013A7CC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x14015D9EC (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1401A5978 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  int v8; // r8d
  unsigned __int32 v9; // eax
  BOOL v10; // ecx
  unsigned __int32 v11; // ett
  int v12; // edx
  signed __int32 v13; // eax
  int v14; // r9d
  char v15; // r10
  signed __int32 v16; // r8d
  signed __int32 v17; // ett

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( a3 )
  {
    case 0u:
      goto LABEL_34;
    case 1u:
LABEL_33:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a5, a1);
      return a1;
    case 2u:
    case 3u:
      goto LABEL_17;
    case 4u:
LABEL_34:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a5, a1);
      return a1;
    case 5u:
      goto LABEL_33;
  }
  if ( a3 - 6 >= 2 )
  {
    v8 = a3 - 320;
    if ( v8 >= 64 )
      goto LABEL_16;
    v9 = *((_DWORD *)a2 + 1);
    do
    {
      v10 = (v9 & 0x10) != 0 && ((v9 >> 5) & 0x3F) == v8;
      *(_DWORD *)(a1 + 16) = v10;
      v11 = v9;
      v9 = _InterlockedCompareExchange(
             a2 + 1,
             v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(32 * v8)) & 0x7E0 | 0x10,
             v9);
    }
    while ( v11 != v9 );
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_16:
      *(_DWORD *)(a1 + 4) = a5;
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 12) = a4;
    }
    return a1;
  }
LABEL_17:
  v12 = 0;
  switch ( a3 )
  {
    case 2u:
      v12 = 2;
      break;
    case 3u:
      v12 = 8;
      break;
    case 6u:
      v12 = 4;
      break;
    case 7u:
      v12 = 16;
      break;
  }
  v13 = *a2;
  v14 = 1;
  do
  {
    v15 = v13;
    *(_DWORD *)(a1 + 16) = (v13 | v12) == v13;
    v16 = v13 | v12 | 1;
    if ( (v13 | v12) == v13 )
      v16 = v13 | v12;
    v17 = v13;
    v13 = _InterlockedCompareExchange(a2, v16, v13);
  }
  while ( v17 != v13 );
  if ( (v16 & 1) == 0 || (v15 & 1) != 0 )
    v14 = 0;
  *(_DWORD *)a1 = v14;
  return a1;
}
