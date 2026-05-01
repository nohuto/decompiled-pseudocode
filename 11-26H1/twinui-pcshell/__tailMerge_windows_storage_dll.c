/*
 * XREFs of __tailMerge_windows_storage_dll @ 0x1802D304A
 * Callers:
 *     __imp_load_SHExtCoCreateInstanceString @ 0x1802D30C9 (__imp_load_SHExtCoCreateInstanceString.c)
 *     __imp_load_SHGetStockIconInfo @ 0x1802D30DB (__imp_load_SHGetStockIconInfo.c)
 *     __imp_load_DetermineFolderDestinationParentAppID @ 0x1802D30ED (__imp_load_DetermineFolderDestinationParentAppID.c)
 *     __imp_load_SHBindToFolderIDListParentEx @ 0x1802D310B (__imp_load_SHBindToFolderIDListParentEx.c)
 *     __imp_load_SHBindToParent @ 0x1802D3129 (__imp_load_SHBindToParent.c)
 *     __imp_load_SHGetKnownFolderIDList @ 0x1802D313B (__imp_load_SHGetKnownFolderIDList.c)
 *     __imp_load_ILIsParent @ 0x1802D314D (__imp_load_ILIsParent.c)
 *     __imp_load_ILGetSize @ 0x1802D315F (__imp_load_ILGetSize.c)
 *     __imp_load_SHBindToObject @ 0x1802D3171 (__imp_load_SHBindToObject.c)
 *     __imp_load_ILCombine @ 0x1802D318F (__imp_load_ILCombine.c)
 *     __imp_load_DragQueryFileW @ 0x1802D31A1 (__imp_load_DragQueryFileW.c)
 *     __imp_load_PathComparePaths @ 0x1802D31B3 (__imp_load_PathComparePaths.c)
 *     __imp_load_IsProcessAnExplorer @ 0x1802D31C5 (__imp_load_IsProcessAnExplorer.c)
 *     __imp_load_SHLogILFromFSIL @ 0x1802D31D7 (__imp_load_SHLogILFromFSIL.c)
 *     __imp_load_ILIsEqual @ 0x1802D31E9 (__imp_load_ILIsEqual.c)
 *     __imp_load_SHRemoveLocalizedName @ 0x1802D31FB (__imp_load_SHRemoveLocalizedName.c)
 *     __imp_load_SHGetPathFromIDListW @ 0x1802D3219 (__imp_load_SHGetPathFromIDListW.c)
 *     __imp_load_PathYetAnotherMakeUniqueName @ 0x1802D322B (__imp_load_PathYetAnotherMakeUniqueName.c)
 *     __imp_load_SHILCreateFromPath @ 0x1802D323D (__imp_load_SHILCreateFromPath.c)
 *     __imp_load_ILFindChild @ 0x1802D324F (__imp_load_ILFindChild.c)
 *     __imp_load_PathCleanupSpec @ 0x1802D3261 (__imp_load_PathCleanupSpec.c)
 *     __imp_load_SHGetLocalizedName @ 0x1802D3273 (__imp_load_SHGetLocalizedName.c)
 *     __imp_load_SHSetLocalizedName @ 0x1802D3285 (__imp_load_SHSetLocalizedName.c)
 *     __imp_load_SHGetPathFromIDListEx @ 0x1802D3297 (__imp_load_SHGetPathFromIDListEx.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801B9A40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_windows_storage_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_windows_storage_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
