/*
 * XREFs of __tailMerge_shell32_dll @ 0x1802CFD68
 * Callers:
 *     __imp_load_ShellExecuteExW @ 0x1802CFDE7 (__imp_load_ShellExecuteExW.c)
 *     __imp_load_ShellExecuteW @ 0x1802CFDF9 (__imp_load_ShellExecuteW.c)
 *     __imp_load_SHAppBarMessage @ 0x1802CFE0B (__imp_load_SHAppBarMessage.c)
 *     __imp_load_SHCreateItemInKnownFolder @ 0x1802CFE1D (__imp_load_SHCreateItemInKnownFolder.c)
 *     __imp_load_SHGetImageList @ 0x1802CFE2F (__imp_load_SHGetImageList.c)
 *     __imp_load_SHGetPropertyStoreForWindow @ 0x1802CFE41 (__imp_load_SHGetPropertyStoreForWindow.c)
 *     __imp_load_SHEvaluateSystemCommandTemplate @ 0x1802CFE53 (__imp_load_SHEvaluateSystemCommandTemplate.c)
 *     __imp_load_SHCreateItemFromRelativeName @ 0x1802CFE65 (__imp_load_SHCreateItemFromRelativeName.c)
 *     __imp_load_SHFileOperationW @ 0x1802CFE77 (__imp_load_SHFileOperationW.c)
 *     __imp_load_?UpdateWallpaperTransition@@YAJW4WALLPAPER_TRANSITION_TYPE@@_J@Z @ 0x1802D2AFC (__imp_load_-UpdateWallpaperTransition@@YAJW4WALLPAPER_TRANSITION_TYPE@@_J@Z.c)
 *     __imp_load_SHCreateSessionKey @ 0x1802D2B0E (__imp_load_SHCreateSessionKey.c)
 *     __imp_load_LogoffWindowsDialog @ 0x1802D2B20 (__imp_load_LogoffWindowsDialog.c)
 *     __imp_load_GetThreadFlags @ 0x1802D2B32 (__imp_load_GetThreadFlags.c)
 *     __imp_load_ILFree @ 0x1802D2B44 (__imp_load_ILFree.c)
 *     __imp_load_SHChangeNotify @ 0x1802D2B56 (__imp_load_SHChangeNotify.c)
 *     __imp_load_RealDriveType @ 0x1802D3A58 (__imp_load_RealDriveType.c)
 *     __imp_load_MakeDestinationItem @ 0x1802D40C3 (__imp_load_MakeDestinationItem.c)
 *     __imp_load_SHBindToFolderIDListParent @ 0x1802D40D5 (__imp_load_SHBindToFolderIDListParent.c)
 *     __imp_load_ILCloneFirst @ 0x1802D40E7 (__imp_load_ILCloneFirst.c)
 *     __imp_load_SHCreateItemWithParent @ 0x1802D40F9 (__imp_load_SHCreateItemWithParent.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801B9A40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_shell32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_shell32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
