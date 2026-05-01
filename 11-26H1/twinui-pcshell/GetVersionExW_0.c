/*
 * XREFs of GetVersionExW_0 @ 0x1802CB7D7
 * Callers:
 *     ?IsServer@HideWallpaperIconsObject@@AEAA_NXZ @ 0x180683854 (-IsServer@HideWallpaperIconsObject@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall GetVersionExW_0(LPOSVERSIONINFOW lpVersionInformation)
{
  return GetVersionExW(lpVersionInformation);
}
