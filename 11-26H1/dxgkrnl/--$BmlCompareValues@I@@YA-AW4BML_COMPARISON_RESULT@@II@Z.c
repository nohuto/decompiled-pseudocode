/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1402DFF14
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1402DDDC0 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareSourceModes @ 0x1402DE178 (BmlCompareSourceModes.c)
 *     BmlCompareModeRegions @ 0x1402DF230 (BmlCompareModeRegions.c)
 *     BmlCompareMonitorRegions @ 0x1402E0C68 (BmlCompareMonitorRegions.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1404220A0 (BmlCompareTargetModeWithVirtualRefreshRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<unsigned int>(unsigned int a1, unsigned int a2)
{
  if ( a1 > a2 )
    return 1LL;
  else
    return (unsigned int)-(a1 < a2);
}
