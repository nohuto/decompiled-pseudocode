/*
 * XREFs of ?DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA?AW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@XZ @ 0x18022A770
 * Callers:
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18021F69C (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180244B74 (-InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?get_OverlayDisplayMode@GamingOverlayExperienceManager@@UEAAJPEAW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@@Z @ 0x180246380 (-get_OverlayDisplayMode@GamingOverlayExperienceManager@@UEAAJPEAW4GamingOverlayDisplayMode@Gamin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingOverlayExperienceManager::DetermineCurrentDisplayMode(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 1512) )
    return (unsigned int)(*(_BYTE *)(a1 + 1513) != 0) + 1;
  return result;
}
