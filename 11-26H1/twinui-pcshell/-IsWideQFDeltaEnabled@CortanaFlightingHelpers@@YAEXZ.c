/*
 * XREFs of ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x18038988C
 * Callers:
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180389FF0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803C7490 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803D0DA0 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180388DB4 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 */

bool __fastcall CortanaFlightingHelpers::IsWideQFDeltaEnabled(CortanaFlightingHelpers *this)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x39, &v2);
  return v2 != 0;
}
