/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1400101A0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140010074 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x14000FE8C (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x14000FF80 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // r10
  unsigned int v4; // edi
  unsigned int v6; // esi
  __int16 v7; // bx
  int v8; // r9d
  unsigned __int32 v9; // eax
  int v10; // r8d
  unsigned __int32 v11; // ett
  int v12; // ecx
  signed __int32 i; // edx
  signed __int32 v14; // r9d
  signed __int32 v15; // eax
  __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  __int128 v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]

  v3 = *(volatile signed __int32 **)(a1 + 8);
  v4 = 0;
  v17 = a2;
  v19 = 0LL;
  v6 = a3;
  v7 = a2;
  v18 = 0LL;
  switch ( (_DWORD)a3 )
  {
    case 0:
      goto LABEL_35;
    case 1:
LABEL_34:
      wil_details_FeatureReporting_IncrementOpportunityInCache(v3, a3, a3, &v18);
      goto LABEL_36;
    case 2:
    case 3:
      goto LABEL_17;
    case 4:
LABEL_35:
      wil_details_FeatureReporting_IncrementUsageInCache(v3, a3, a3, &v18);
      goto LABEL_36;
    case 5:
      goto LABEL_34;
  }
  if ( (unsigned int)(a3 - 6) >= 2 )
  {
    v8 = a3 - 320;
    if ( (int)a3 - 320 >= 64 )
      goto LABEL_16;
    v9 = *((_DWORD *)v3 + 1);
    do
    {
      if ( (v9 & 0x10) != 0 && ((v9 >> 5) & 0x3F) == v8 )
      {
        v10 = 1;
        LODWORD(v19) = 1;
      }
      else
      {
        v10 = 0;
        LODWORD(v19) = 0;
      }
      v11 = v9;
      v9 = _InterlockedCompareExchange(
             v3 + 1,
             v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(32 * v8)) & 0x7E0 | 0x10,
             v9);
    }
    while ( v11 != v9 );
    if ( !v10 )
    {
LABEL_16:
      *((_QWORD *)&v18 + 1) = __PAIR64__(HIDWORD(v17), v6);
      DWORD1(v18) = 1;
    }
    goto LABEL_36;
  }
LABEL_17:
  v12 = 0;
  switch ( (_DWORD)a3 )
  {
    case 2:
      v12 = 2;
      break;
    case 3:
      v12 = 8;
      break;
    case 6:
      v12 = 4;
      break;
    case 7:
      v12 = 16;
      break;
  }
  for ( i = *v3; ; i = v15 )
  {
    v14 = i | v12 | 1;
    LODWORD(v19) = (i | v12) == i;
    if ( (i | v12) == i )
      v14 = i | v12;
    v15 = _InterlockedCompareExchange(v3, v14, i);
    if ( i == v15 )
      break;
  }
  LODWORD(v18) = (v14 & 1) != 0 && (i & 1) == 0;
LABEL_36:
  v21 = v19;
  v20 = v18;
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(*(unsigned int *)(a1 + 24), v6, 1LL, *(_QWORD *)(a1 + 8), &v20);
  if ( (v7 & 0x400) != 0 && v6 != 254 )
  {
    LODWORD(v17) = *(_DWORD *)(a1 + 24);
    HIDWORD(v17) = (unsigned __int16)v6;
    if ( (v7 & 0x800) != 0 )
      HIWORD(v17) |= 1u;
    RtlNotifyFeatureUsage(&v17);
  }
  LOBYTE(v4) = (_DWORD)v21 == 0;
  return v4;
}
