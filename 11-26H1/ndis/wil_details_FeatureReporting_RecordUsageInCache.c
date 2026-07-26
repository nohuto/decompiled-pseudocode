/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x140091CE4
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140091EF8 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x140091AFC (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x140091BF0 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        __int64 a3,
        int a4)
{
  int v4; // r11d
  _DWORD *v7; // r9
  int v8; // r10d
  unsigned __int32 v9; // eax
  int v10; // edx
  unsigned __int32 v11; // ett
  int v12; // ecx
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  signed __int32 i; // edx
  signed __int32 v17; // r10d
  signed __int32 v18; // eax

  v4 = 0;
  v7 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( (_DWORD)a3 )
  {
    case 0:
      goto LABEL_31;
    case 1:
LABEL_30:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a3, (_DWORD *)a1);
      return v7;
    case 2:
    case 3:
      goto LABEL_16;
    case 4:
LABEL_31:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a3, (_DWORD *)a1);
      return v7;
    case 5:
      goto LABEL_30;
  }
  if ( (unsigned int)(a3 - 6) >= 2 )
  {
    v8 = a3 - 320;
    if ( (int)a3 - 320 >= 64 )
      goto LABEL_15;
    v9 = *((_DWORD *)a2 + 1);
    do
    {
      if ( (v9 & 0x10) == 0 || (v10 = 1, ((v9 >> 5) & 0x3F) != v8) )
        v10 = 0;
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
LABEL_15:
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 12) = a4;
    }
    return v7;
  }
LABEL_16:
  v12 = 0;
  v13 = a3 - 2;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 3;
      if ( v15 )
      {
        if ( v15 == 1 )
          v12 = 16;
      }
      else
      {
        v12 = 4;
      }
    }
    else
    {
      v12 = 8;
    }
  }
  else
  {
    v12 = 2;
  }
  for ( i = *a2; ; i = v18 )
  {
    v17 = i | v12 | 1;
    v7[4] = (i | v12) == i;
    if ( (i | v12) == i )
      v17 = i | v12;
    v18 = _InterlockedCompareExchange(a2, v17, i);
    if ( i == v18 )
      break;
  }
  LOBYTE(v4) = (v17 & 1) != 0 && (i & 1) == 0;
  *v7 = v4;
  return v7;
}
