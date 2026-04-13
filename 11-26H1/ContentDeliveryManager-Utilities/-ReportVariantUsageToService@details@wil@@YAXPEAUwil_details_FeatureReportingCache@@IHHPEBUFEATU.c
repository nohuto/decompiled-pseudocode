/*
 * XREFs of ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18003A184
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x18003A0B0 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180039FD0 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     wil_details_MapVariantReportingKind @ 0x180040B8C (wil_details_MapVariantReportingKind.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_UNKNOWN **__fastcall wil::details::ReportVariantUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        unsigned int a8,
        unsigned int a9)
{
  _UNKNOWN **result; // rax
  unsigned int v10; // eax
  int v11; // r9d
  int v12; // r10d
  struct wil_details_FeatureReportingCache *v13; // r11
  __int64 v14; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a9 )
  {
    LOBYTE(a3) = a7;
    v10 = wil_details_MapVariantReportingKind(a9, a6, a3);
    result = (_UNKNOWN **)wil::details::ReportUsageToServiceDirect(
                            v13,
                            0xF81202u,
                            v12,
                            v11,
                            v10,
                            a8,
                            v14,
                            *(_BYTE *)(a5 + 4));
    if ( (_DWORD)result )
    {
      result = (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook;
      if ( g_wil_details_pfnFeatureLoggingHook )
        return (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook(16257538LL, a5);
    }
  }
  return result;
}
