/*
 * XREFs of ??$_Emplace_one_at_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1802C00B0
 * Callers:
 *     ?EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1801F5950 (-EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$vector@V-$basic_string@GU-$char_trai.c)
 *     ?GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAH@Z @ 0x1802356F0 (-GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU-$IVectorView@PEAUHSTRING__@@@.c)
 *     ?GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@3@@Z @ 0x18034A664 (-GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV-$vector@U-$pair@KV-$basic_.c)
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x18039CDA0 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 *     ?EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18054DDB0 (-EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$vector@V-$basic_string@GU-$char_traits.c)
 *     ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180564130 (-PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 *     ?GetActiveApps@Win32AppStateManager@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x180574D60 (-GetActiveApps@Win32AppStateManager@@UEAA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$a.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180625824 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x1806344E8 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::vector<std::wstring>::_Emplace_one_at_back<std::wstring>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<std::wstring>::_Emplace_reallocate<std::wstring>(a1, v3, a2);
  std::wstring::wstring(v3, a2);
  result = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 8) = result + 32;
  return result;
}
