/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180037134
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800376F0 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18000EEB0 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180036B4C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall *wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        char a3,
        ...))(_QWORD, _QWORD, _QWORD)
{
  __int64 v3; // r8
  int v5; // edi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+80h] [rbp+18h]
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  LOBYTE(v10) = a3;
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v3 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            &v9);
    v9 = v3;
  }
  WORD2(v11) = 3;
  v10 = 3;
  LODWORD(v11) = 0;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                             a1 + 2,
                                                             0xA8161Eu,
                                                             ((unsigned int)v3 >> 10) & 1,
                                                             ((unsigned int)v3 >> 11) & 1,
                                                             4 * (v5 ^ 1u) + 2,
                                                             v7,
                                                             v8,
                                                             3);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(
                                                               11015710LL,
                                                               (__int64 *)va,
                                                               0LL);
  }
  return result;
}
