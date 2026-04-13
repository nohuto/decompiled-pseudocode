/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180039FD0
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180039F24 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18003A184 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180037570 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18003D0D0 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180040968 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 v12; // rax
  __int64 v13; // xmm0_8
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // r9d
  unsigned int v17; // ebx
  unsigned int v18; // edx
  char *v20; // [rsp+20h] [rbp-48h]
  char v21[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h]
  __int64 v23; // [rsp+48h] [rbp-20h] BYREF

  v12 = wil_details_FeatureReporting_RecordUsageInCache(&v23, a1, a5, a6);
  v13 = *(_QWORD *)(v12 + 16);
  *(_OWORD *)v21 = *(_OWORD *)v12;
  v22 = v13;
  wil::details::RecordFeatureUsageCallback(a2, a5, v14, a1, (RTL_SRWLOCK *)v21);
  v17 = 0;
  if ( a3 )
  {
    v18 = a5 | 0x80000000;
    if ( !a4 )
      v18 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v18, 0, v16, v20);
  }
  if ( !(_DWORD)v22 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v15) = a8;
      g_wil_details_realtimeFeatureUsageHook(a2, a5, v15);
    }
    return 1;
  }
  return v17;
}
