/*
 * XREFs of __tailMerge_windows_storage_dll @ 0x1802DA8DA
 * Callers:
 *     __imp_load_SHExtCoCreateInstanceString @ 0x1802DA959 (__imp_load_SHExtCoCreateInstanceString.c)
 *     __imp_load_SHGetStockIconInfo @ 0x1802DA96B (__imp_load_SHGetStockIconInfo.c)
 *     __imp_load_DetermineFolderDestinationParentAppID @ 0x1802DA97D (__imp_load_DetermineFolderDestinationParentAppID.c)
 *     __imp_load_SHBindToFolderIDListParentEx @ 0x1802DA99B (__imp_load_SHBindToFolderIDListParentEx.c)
 *     __imp_load_SHBindToParent @ 0x1802DA9B9 (__imp_load_SHBindToParent.c)
 *     __imp_load_SHGetKnownFolderIDList @ 0x1802DA9CB (__imp_load_SHGetKnownFolderIDList.c)
 *     __imp_load_ILIsParent @ 0x1802DA9DD (__imp_load_ILIsParent.c)
 *     __imp_load_ILGetSize @ 0x1802DA9EF (__imp_load_ILGetSize.c)
 *     __imp_load_SHBindToObject @ 0x1802DAA01 (__imp_load_SHBindToObject.c)
 *     __imp_load_ILCombine @ 0x1802DAA1F (__imp_load_ILCombine.c)
 *     __imp_load_DragQueryFileW @ 0x1802DAA31 (__imp_load_DragQueryFileW.c)
 *     __imp_load_PathComparePaths @ 0x1802DAA43 (__imp_load_PathComparePaths.c)
 *     __imp_load_IsProcessAnExplorer @ 0x1802DAA55 (__imp_load_IsProcessAnExplorer.c)
 *     __imp_load_SHLogILFromFSIL @ 0x1802DAA67 (__imp_load_SHLogILFromFSIL.c)
 *     __imp_load_ILIsEqual @ 0x1802DAA79 (__imp_load_ILIsEqual.c)
 *     __imp_load_SHRemoveLocalizedName @ 0x1802DAA8B (__imp_load_SHRemoveLocalizedName.c)
 *     __imp_load_SHGetPathFromIDListW @ 0x1802DAAA9 (__imp_load_SHGetPathFromIDListW.c)
 *     __imp_load_PathYetAnotherMakeUniqueName @ 0x1802DAABB (__imp_load_PathYetAnotherMakeUniqueName.c)
 *     __imp_load_SHILCreateFromPath @ 0x1802DAACD (__imp_load_SHILCreateFromPath.c)
 *     __imp_load_ILFindChild @ 0x1802DAADF (__imp_load_ILFindChild.c)
 *     __imp_load_PathCleanupSpec @ 0x1802DAAF1 (__imp_load_PathCleanupSpec.c)
 *     __imp_load_SHGetLocalizedName @ 0x1802DAB03 (__imp_load_SHGetLocalizedName.c)
 *     __imp_load_SHSetLocalizedName @ 0x1802DAB15 (__imp_load_SHSetLocalizedName.c)
 *     __imp_load_SHGetPathFromIDListEx @ 0x1802DAB27 (__imp_load_SHGetPathFromIDListEx.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
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
