/*
 * XREFs of __tailMerge_shell32_dll @ 0x1802D75ED
 * Callers:
 *     __imp_load_ShellExecuteExW @ 0x1802D766C (__imp_load_ShellExecuteExW.c)
 *     __imp_load_ShellExecuteW @ 0x1802D767E (__imp_load_ShellExecuteW.c)
 *     __imp_load_SHAppBarMessage @ 0x1802D7690 (__imp_load_SHAppBarMessage.c)
 *     __imp_load_SHCreateItemInKnownFolder @ 0x1802D76A2 (__imp_load_SHCreateItemInKnownFolder.c)
 *     __imp_load_SHGetImageList @ 0x1802D76B4 (__imp_load_SHGetImageList.c)
 *     __imp_load_SHGetPropertyStoreForWindow @ 0x1802D76C6 (__imp_load_SHGetPropertyStoreForWindow.c)
 *     __imp_load_SHEvaluateSystemCommandTemplate @ 0x1802D76D8 (__imp_load_SHEvaluateSystemCommandTemplate.c)
 *     __imp_load_SHCreateItemFromRelativeName @ 0x1802D76EA (__imp_load_SHCreateItemFromRelativeName.c)
 *     __imp_load_SHFileOperationW @ 0x1802D76FC (__imp_load_SHFileOperationW.c)
 *     __imp_load_?UpdateWallpaperTransition@@YAJW4WALLPAPER_TRANSITION_TYPE@@_J@Z @ 0x1802DA38C (__imp_load_-UpdateWallpaperTransition@@YAJW4WALLPAPER_TRANSITION_TYPE@@_J@Z.c)
 *     __imp_load_SHCreateSessionKey @ 0x1802DA39E (__imp_load_SHCreateSessionKey.c)
 *     __imp_load_LogoffWindowsDialog @ 0x1802DA3B0 (__imp_load_LogoffWindowsDialog.c)
 *     __imp_load_GetThreadFlags @ 0x1802DA3C2 (__imp_load_GetThreadFlags.c)
 *     __imp_load_ILFree @ 0x1802DA3D4 (__imp_load_ILFree.c)
 *     __imp_load_SHChangeNotify @ 0x1802DA3E6 (__imp_load_SHChangeNotify.c)
 *     __imp_load_RealDriveType @ 0x1802DB35A (__imp_load_RealDriveType.c)
 *     __imp_load_MakeDestinationItem @ 0x1802DB9C3 (__imp_load_MakeDestinationItem.c)
 *     __imp_load_SHBindToFolderIDListParent @ 0x1802DB9D5 (__imp_load_SHBindToFolderIDListParent.c)
 *     __imp_load_ILCloneFirst @ 0x1802DB9E7 (__imp_load_ILCloneFirst.c)
 *     __imp_load_SHCreateItemWithParent @ 0x1802DB9F9 (__imp_load_SHCreateItemWithParent.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
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
