/*
 * XREFs of ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x180684284
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180685C54 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x18068DF84 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x18021FF88 (-DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z.c)
 */

HSTRING __fastcall Platform::String::String(__int64 a1, Platform::Details *a2, HSTRING *a3)
{
  HSTRING v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  Platform::Details::DuplicateString(a2, &v4, a3);
  return v4;
}
