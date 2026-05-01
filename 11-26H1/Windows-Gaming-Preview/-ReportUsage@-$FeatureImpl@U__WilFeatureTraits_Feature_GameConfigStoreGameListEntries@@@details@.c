/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000EDD4
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180010A10 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000DAF4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListE.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18000EEB0 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall *wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        char a3,
        ...))(_QWORD, _QWORD, _QWORD)
{
  __int64 v3; // r8
  int v5; // edi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+80h] [rbp+18h]
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  LOBYTE(v8) = a3;
  LODWORD(v3) = *(_DWORD *)a1;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v3 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCachedFeatureEnabledState(
            a1,
            &v7);
    v7 = v3;
  }
  WORD2(v9) = 3;
  v8 = 3;
  LODWORD(v9) = 0;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                             (char *)a1 + 8,
                                                             11973136LL,
                                                             ((unsigned int)v3 >> 10) & 1,
                                                             ((unsigned int)v3 >> 11) & 1,
                                                             4 * (v5 ^ 1u) + 2);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(
                                                               11973136LL,
                                                               (__int64 *)va,
                                                               0LL);
  }
  return result;
}
