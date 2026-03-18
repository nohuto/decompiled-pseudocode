/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1408D5170
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403CF40C (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1403D07B0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x140537E00 (towupper.c)
 *     AslEnvVarQuery @ 0x14088B668 (AslEnvVarQuery.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1408C4A20 (CmpGetNameControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpGetMappingHiveForString @ 0x1408D11E4 (CmpGetMappingHiveForString.c)
 *     CmpFindSubKeyInRoot @ 0x1408D1B40 (CmpFindSubKeyInRoot.c)
 *     CmpCompareInIndex @ 0x1408D27E0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408D2EE0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1408D4080 (CmpDoCompareKeyName.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408D43A0 (CmpFindSubkeyInHashByChildCell.c)
 *     PfpRpFileKeyUpdate @ 0x1408D4BF0 (PfpRpFileKeyUpdate.c)
 *     CmpFindNameInListWithStatus @ 0x1408D5200 (CmpFindNameInListWithStatus.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408D7490 (CmpFindSubKeyByNameWithStatus.c)
 *     CmQueryValueKey @ 0x1408D88E0 (CmQueryValueKey.c)
 *     CmpCheckValueList @ 0x1408D96A0 (CmpCheckValueList.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     RtlLookupAtomInAtomTable @ 0x14091A550 (RtlLookupAtomInAtomTable.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140979AFC (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpAllocateDiffHiveEntry @ 0x140979EBC (VrpAllocateDiffHiveEntry.c)
 *     CmpFindNameInListCellWithStatus @ 0x140980D90 (CmpFindNameInListCellWithStatus.c)
 *     ObpCreateSymbolicLinkName @ 0x1409E185C (ObpCreateSymbolicLinkName.c)
 *     ObpLookupDirectoryEntry @ 0x1409E2350 (ObpLookupDirectoryEntry.c)
 *     CmpFindKcbInHashEntryByName @ 0x1409E2770 (CmpFindKcbInHashEntryByName.c)
 *     CmpCompareCompressedName @ 0x1409E2A30 (CmpCompareCompressedName.c)
 *     AslStringPatternMatchExW @ 0x1409E7030 (AslStringPatternMatchExW.c)
 *     CmpCheckRegistry2 @ 0x140A079F0 (CmpCheckRegistry2.c)
 *     CmpCheckLeaf @ 0x140A0A744 (CmpCheckLeaf.c)
 *     RtlpHashStringToAtom @ 0x140A2FA00 (RtlpHashStringToAtom.c)
 *     CmpHashCompressedComponent @ 0x140A319F0 (CmpHashCompressedComponent.c)
 *     CmpCompareKeysByName @ 0x140A46F20 (CmpCompareKeysByName.c)
 *     CmpCompareTwoCompressedNames @ 0x140A47130 (CmpCompareTwoCompressedNames.c)
 *     CmpCompareUnicodeString @ 0x140A842C8 (CmpCompareUnicodeString.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140B40448 (CmpFindKcbInHashEntryByCompressedName.c)
 *     VfUtilPrintCheckinString @ 0x140C21A10 (VfUtilPrintCheckinString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int64 v2; // rdx
  struct _LIST_ENTRY *Flink; // r9

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( (unsigned int)v2 >= 0x61 )
  {
    if ( (unsigned int)v2 <= 0x7A )
      return v2 - 32;
    Flink = CurrentServerSiloGlobals[75].Flink;
    if ( Flink )
    {
      if ( (unsigned __int16)v2 >= 0xC0u )
        LOWORD(v2) = *((_WORD *)&Flink->Flink
                     + (v2 & 0xF)
                     + *((unsigned __int16 *)&Flink->Flink
                       + ((unsigned __int8)v2 >> 4)
                       + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v2 >> 8))))
                   + v2;
    }
  }
  return v2;
}
