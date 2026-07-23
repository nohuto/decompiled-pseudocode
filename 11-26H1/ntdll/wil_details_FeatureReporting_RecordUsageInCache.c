/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x1800E532C
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800E52A0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1800E551C (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1801144F8 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  int v5; // ebx
  _DWORD *v9; // r9
  int v10; // ecx
  signed __int32 i; // edx
  signed __int32 v12; // r10d
  signed __int32 v13; // eax
  int v15; // r8d
  unsigned __int32 v16; // eax
  int v17; // edx
  unsigned __int32 v18; // ett

  v5 = 0;
  v9 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( a3 )
  {
    case 0u:
      goto LABEL_17;
    case 1u:
LABEL_32:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a5, a1);
      return v9;
    case 2u:
    case 3u:
      goto LABEL_8;
    case 4u:
LABEL_17:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a5, a1);
      return v9;
    case 5u:
      goto LABEL_32;
  }
  if ( a3 - 6 <= 1 )
  {
LABEL_8:
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
    for ( i = *a2; ; i = v13 )
    {
      v12 = i | v10 | 1;
      v9[4] = (i | v10) == i;
      if ( (i | v10) == i )
        v12 = i | v10;
      v13 = _InterlockedCompareExchange(a2, v12, i);
      if ( i == v13 )
        break;
    }
    LOBYTE(v5) = (v12 & 1) != 0 && (i & 1) == 0;
    *v9 = v5;
    return v9;
  }
  v15 = a3 - 320;
  if ( v15 >= 64 )
    goto LABEL_25;
  v16 = *((_DWORD *)a2 + 1);
  do
  {
    if ( (v16 & 0x10) == 0 || (v17 = 1, ((v16 >> 5) & 0x3F) != v15) )
      v17 = 0;
    *(_DWORD *)(a1 + 16) = v17;
    v18 = v16;
    v16 = _InterlockedCompareExchange(
            a2 + 1,
            v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(32 * v15)) & 0x7E0 | 0x10,
            v16);
  }
  while ( v18 != v16 );
  if ( !*(_DWORD *)(a1 + 16) )
  {
LABEL_25:
    *(_DWORD *)(a1 + 4) = a5;
    *(_DWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 12) = a4;
  }
  return v9;
}
