/*
 * XREFs of AslFree @ 0x180098D34
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180058564 (SdbShouldBlockPackageLaunch.c)
 *     SdbCloseDatabaseRead @ 0x18008D3D4 (SdbCloseDatabaseRead.c)
 *     SdbGetMergeRedirectPath @ 0x18008D65C (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x18008D810 (SdbGetMergeStubPath.c)
 *     SdbOpenDatabaseEx @ 0x18008DAA0 (SdbOpenDatabaseEx.c)
 *     SdbReleaseDatabase @ 0x18008DDFC (SdbReleaseDatabase.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x18008E3FC (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x18008E830 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpOpenDatabaseInMemory @ 0x18008F2B8 (SdbpOpenDatabaseInMemory.c)
 *     SdbpSafeAllocAndConcatW @ 0x18008F4D0 (SdbpSafeAllocAndConcatW.c)
 *     SdbInitDatabaseEx @ 0x18008FBFC (SdbInitDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x18009127C (SdbResolveDatabaseEx.c)
 *     SdbpRemoveSDBLookupEntry @ 0x1800920B4 (SdbpRemoveSDBLookupEntry.c)
 *     SdbpCheckAllAttributes @ 0x180092108 (SdbpCheckAllAttributes.c)
 *     SdbpCheckMatchingDir @ 0x180094A80 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180094C30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180095210 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingText @ 0x1800955D0 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x1800956FC (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095C10 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpGetMatchingTextAttributes @ 0x1800963F8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpResolveMatchingFile @ 0x1800971F8 (SdbpResolveMatchingFile.c)
 *     SdbpOpenCompressedDatabase @ 0x1800975B0 (SdbpOpenCompressedDatabase.c)
 *     AslDoesFileExistNtPath @ 0x180098A78 (AslDoesFileExistNtPath.c)
 *     AslRegistryGetKey @ 0x180098F30 (AslRegistryGetKey.c)
 *     AslRegistryGetString @ 0x180099048 (AslRegistryGetString.c)
 *     AslGuidToString_UStr @ 0x18009959C (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x18009970C (AslStringAnsiToUnicode.c)
 *     AslStringDuplicate @ 0x180099864 (AslStringDuplicate.c)
 *     AslStringReplace @ 0x180099B6C (AslStringReplace.c)
 *     AslStringReplaceArray @ 0x180099DCC (AslStringReplaceArray.c)
 *     AslUnicodeStringFree @ 0x180099F48 (AslUnicodeStringFree.c)
 *     AslFileMappingDelete @ 0x18009A30C (AslFileMappingDelete.c)
 *     AslFileFreeAttributes @ 0x18009B34C (AslFileFreeAttributes.c)
 *     AslpFileGetVersionBlock @ 0x18009CB34 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x18009D410 (AslpFileGetVersionBlockImageOnly.c)
 *     AslpFileVerQueryBlock @ 0x18009E4B4 (AslpFileVerQueryBlock.c)
 *     AslPathWildcardFindFirst @ 0x18009F358 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x18009F90C (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindClose @ 0x1800A0414 (AslRegWildcardFindClose.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A09FC (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A0AF4 (AslpPathWildcardFreeMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1800A0D28 (AslpProcessMatchRegNode.c)
 *     AslHashFree @ 0x1800A1148 (AslHashFree.c)
 *     AslEnvExpandStrings2 @ 0x1800A13C0 (AslEnvExpandStrings2.c)
 *     AslpFileLargeMapDelete @ 0x1800A261C (AslpFileLargeMapDelete.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AslFree(void *a1, void *a2)
{
  BOOLEAN result; // al

  if ( a2 )
    return RtlFreeHeap(a1, 0, a2);
  return result;
}
