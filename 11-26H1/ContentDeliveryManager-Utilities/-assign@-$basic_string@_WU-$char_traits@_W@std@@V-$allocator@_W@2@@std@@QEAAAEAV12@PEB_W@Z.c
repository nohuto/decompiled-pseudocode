/*
 * XREFs of ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x18005CCB4
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ??0BaseScenarioEvents@details@Health@CreativeFramework@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x18004B880 (--0BaseScenarioEvents@details@Health@CreativeFramework@@QEAA@AEBV-$basic_string@GU-$char_traits@.c)
 *     ??0AppInstallService@Actions@CreativeFramework@@QEAA@PEB_W_N11100000@Z @ 0x180093090 (--0AppInstallService@Actions@CreativeFramework@@QEAA@PEB_W_N11100000@Z.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18009F79C (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800A8F44 (-InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?ResolveAltRatings@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800A9218 (-ResolveAltRatings@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 *     ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800A9358 (-ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 *     ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800AB254 (--$LookupWString@U-$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@P.c)
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800B0210 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18005E9A4 (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 */

__int64 __fastcall std::wstring::assign(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = std::char_traits<wchar_t>::length(a2);
  return std::wstring::assign(a1, a2, v4);
}
