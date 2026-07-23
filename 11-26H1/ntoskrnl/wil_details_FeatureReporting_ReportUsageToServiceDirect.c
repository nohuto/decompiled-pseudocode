/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140358A70
 * Callers:
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x1403589D0 (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x140358B60 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140358C78 (CmFcManagerNotifyFeatureUsage.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1404FD72C (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  volatile signed __int32 *v4; // r10
  unsigned int v6; // edi
  __int16 v8; // bx
  __int64 v9; // r14
  signed __int32 i; // edx
  signed __int32 v12; // r9d
  signed __int32 v13; // eax
  unsigned int v14; // r8d
  unsigned __int32 v15; // eax
  int v16; // edx
  unsigned __int32 v17; // ett
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h]
  __int128 v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-18h]

  v4 = *(volatile signed __int32 **)(a1 + 8);
  v6 = 0;
  v18 = a2;
  v20 = 0LL;
  v8 = a2;
  v9 = a1;
  v19 = 0LL;
  if ( a3 == 4 )
  {
LABEL_2:
    wil_details_FeatureReporting_IncrementUsageInCache(v4, a3, a4, &v19);
  }
  else
  {
    switch ( a3 )
    {
      case 0u:
        goto LABEL_2;
      case 1u:
      case 5u:
        wil_details_FeatureReporting_IncrementOpportunityInCache(v4, a3, a4, &v19);
        break;
      case 2u:
      case 3u:
      case 6u:
      case 7u:
        a1 = 0LL;
        switch ( a3 )
        {
          case 2u:
            a1 = 2LL;
            break;
          case 3u:
            a1 = 8LL;
            break;
          case 6u:
            a1 = 4LL;
            break;
          case 7u:
            a1 = 16LL;
            break;
        }
        for ( i = *v4; ; i = v13 )
        {
          v12 = i | a1 | 1;
          LODWORD(v20) = (i | (unsigned int)a1) == i;
          if ( (i | (unsigned int)a1) == i )
            v12 = i | a1;
          v13 = _InterlockedCompareExchange(v4, v12, i);
          if ( i == v13 )
            break;
        }
        LOBYTE(a1) = (v12 & 1) != 0;
        LODWORD(v19) = ((unsigned __int8)a1 & ((i & 1) == 0)) != 0;
        break;
      default:
        v14 = a3 - 320;
        if ( (int)(a3 - 320) >= 64 )
          goto LABEL_34;
        v15 = *((_DWORD *)v4 + 1);
        do
        {
          if ( (v15 & 0x10) == 0 || (v16 = 1, ((v15 >> 5) & 0x3F) != v14) )
            v16 = 0;
          LODWORD(v20) = v16;
          a1 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)(32 * v14)) & 0x7E0 | 0x10;
          v17 = v15;
          v15 = _InterlockedCompareExchange(v4 + 1, a1, v15);
        }
        while ( v17 != v15 );
        if ( !v16 )
        {
LABEL_34:
          *((_QWORD *)&v19 + 1) = __PAIR64__(HIDWORD(v18), a3);
          DWORD1(v19) = a4;
        }
        break;
    }
  }
  v22 = v20;
  v21 = v19;
  if ( g_wil_details_recordFeatureUsage )
    guard_dispatch_icall_no_overrides(*(unsigned int *)(v9 + 24), a3, a4);
  if ( (v8 & 0x400) != 0 && a3 != 254 )
  {
    LODWORD(v18) = *(_DWORD *)(v9 + 24);
    HIDWORD(v18) = (unsigned __int16)a3;
    if ( (v8 & 0x800) != 0 )
      HIWORD(v18) |= 1u;
    CmFcManagerNotifyFeatureUsage(a1, &v18);
  }
  LOBYTE(v6) = (_DWORD)v22 == 0;
  return v6;
}
