/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterNotification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056E94
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@wil@@SA_NXZ @ 0x180054060 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@wil@@SA_NXZ.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18009F79C (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180039F24 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterNotification@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800503A0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterNotification.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActionCenterNotification>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  LODWORD(v3) = *(_DWORD *)a1;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v3 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActionCenterNotification>::GetCachedFeatureEnabledState(
            a1,
            &v7);
    v7 = v3;
  }
  LODWORD(v8) = 2;
  WORD2(v8) = 3;
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0x83333Eu,
           ((unsigned int)v3 >> 10) & 1,
           ((unsigned int)v3 >> 11) & 1,
           (__int64)va,
           v5,
           3u);
}
