/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801E3F0C
 * Callers:
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027AD34 (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18038CFC0 (-GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUII.c)
 *     ??0MeetNowExperienceManager@@QEAA@XZ @ 0x1803C11B4 (--0MeetNowExperienceManager@@QEAA@XZ.c)
 *     ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C4210 (-OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C4490 (-OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803C5178 (-RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?IsMeetAndChatManagerEnabled@@YA_NXZ @ 0x1803E5230 (-IsMeetAndChatManagerEnabled@@YA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801E3FA4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  unsigned int v5; // r8d
  unsigned int v6; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::GetCachedFeatureEnabledState(
                      a1,
                      &v7);
    v5 = v7;
  }
  LODWORD(v8) = 0;
  WORD2(v8) = 3;
  wil::details::ReportUsageToService((__int64)(a1 + 2), 0x1DEAF39u, (v5 >> 10) & 1, (v5 >> 11) & 1, (__int64)va, v6, v3);
}
