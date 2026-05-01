/*
 * XREFs of GetVersionExW_0 @ 0x1802D48B7
 * Callers:
 *     ?IsServer@HideWallpaperIconsObject@@AEAA_NXZ @ 0x18065D6A4 (-IsServer@HideWallpaperIconsObject@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall GetVersionExW_0(LPOSVERSIONINFOW lpVersionInformation)
{
  return GetVersionExW(lpVersionInformation);
}
