/*
 * XREFs of ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009A648
 * Callers:
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x180082CC4 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009C5C8 (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18009F79C (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800A718C (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800A7D9C (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800A8F44 (-InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?ReplaceAll@Details@NotificationManager@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800A917C (-ReplaceAll@Details@NotificationManager@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800B4320 (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z.c)
 *     ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x1800B495C (-SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV-$vector@V-.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005CBE0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

_QWORD *__fastcall std::wstring::operator=(_QWORD *a1, _QWORD *a2)
{
  if ( a1 != a2 )
    std::wstring::assign(a1, a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  return a1;
}
