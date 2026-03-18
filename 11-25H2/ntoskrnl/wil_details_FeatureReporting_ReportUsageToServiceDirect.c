/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1403B86D0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1403B87B4 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1403B8968 (CmFcManagerNotifyFeatureUsage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int16 v4; // bx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int *v9; // rsi
  unsigned int v10; // edi
  int v12; // [rsp+30h] [rbp-68h] BYREF
  int v13; // [rsp+34h] [rbp-64h]
  char v14; // [rsp+38h] [rbp-60h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+60h] [rbp-38h]

  v4 = a2;
  v7 = wil_details_FeatureReporting_RecordUsageInCache((unsigned int)&v14, *(_QWORD *)(a1 + 8), a3, HIDWORD(a2), a4);
  v9 = (unsigned int *)(a1 + 24);
  v15 = *(_OWORD *)v7;
  v16 = *(_QWORD *)(v7 + 16);
  if ( g_wil_details_recordFeatureUsage )
    guard_dispatch_icall_no_overrides(*v9, a3);
  v10 = 0;
  if ( (v4 & 0x400) != 0 && a3 != 254 )
  {
    v12 = *v9;
    v13 = (unsigned __int16)a3;
    if ( (v4 & 0x800) != 0 )
      HIWORD(v13) |= 1u;
    CmFcManagerNotifyFeatureUsage(v8, &v12);
  }
  LOBYTE(v10) = (_DWORD)v16 == 0;
  return v10;
}
