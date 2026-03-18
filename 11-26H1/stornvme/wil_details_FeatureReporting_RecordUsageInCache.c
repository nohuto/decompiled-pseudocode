/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x140013EDC
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140014100 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x140013CE4 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x140013DE0 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        int a5)
{
  int v5; // ebx
  _DWORD *v9; // r9
  int v10; // r8d
  unsigned __int32 v11; // eax
  int v12; // edx
  unsigned __int32 v13; // ett
  int v14; // ecx
  signed __int32 i; // edx
  signed __int32 v16; // r10d
  signed __int32 v17; // eax

  v5 = 0;
  v9 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( a3 )
  {
    case 0:
      goto LABEL_31;
    case 1:
LABEL_30:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a5, (_DWORD *)a1);
      return v9;
    case 2:
    case 3:
      goto LABEL_16;
    case 4:
LABEL_31:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a5, (_DWORD *)a1);
      return v9;
    case 5:
      goto LABEL_30;
  }
  if ( (unsigned int)(a3 - 6) >= 2 )
  {
    v10 = a3 - 320;
    if ( v10 >= 64 )
      goto LABEL_15;
    v11 = *((_DWORD *)a2 + 1);
    do
    {
      if ( (v11 & 0x10) == 0 || (v12 = 1, ((v11 >> 5) & 0x3F) != v10) )
        v12 = 0;
      *(_DWORD *)(a1 + 16) = v12;
      v13 = v11;
      v11 = _InterlockedCompareExchange(
              a2 + 1,
              v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(32 * v10)) & 0x7E0 | 0x10,
              v11);
    }
    while ( v13 != v11 );
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_15:
      *(_DWORD *)(a1 + 4) = a5;
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 12) = a4;
    }
    return v9;
  }
LABEL_16:
  v14 = 0;
  switch ( a3 )
  {
    case 2:
      v14 = 2;
      break;
    case 3:
      v14 = 8;
      break;
    case 6:
      v14 = 4;
      break;
    case 7:
      v14 = 16;
      break;
  }
  for ( i = *a2; ; i = v17 )
  {
    v16 = i | v14 | 1;
    v9[4] = (i | v14) == i;
    if ( (i | v14) == i )
      v16 = i | v14;
    v17 = _InterlockedCompareExchange(a2, v16, i);
    if ( i == v17 )
      break;
  }
  LOBYTE(v5) = (v16 & 1) != 0 && (i & 1) == 0;
  *v9 = v5;
  return v9;
}
