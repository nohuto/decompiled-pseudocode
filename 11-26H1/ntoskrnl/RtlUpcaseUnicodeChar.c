/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1408DB730
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402FA444 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1404600D0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x14053A280 (towupper.c)
 *     AslEnvVarQuery @ 0x140891A64 (AslEnvVarQuery.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1408CAFF0 (CmpGetNameControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpGetMappingHiveForString @ 0x1408D77A4 (CmpGetMappingHiveForString.c)
 *     CmpFindSubKeyInRoot @ 0x1408D8100 (CmpFindSubKeyInRoot.c)
 *     CmpCompareInIndex @ 0x1408D8DA0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408D94A0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1408DA640 (CmpDoCompareKeyName.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408DA960 (CmpFindSubkeyInHashByChildCell.c)
 *     PfpRpFileKeyUpdate @ 0x1408DB1B0 (PfpRpFileKeyUpdate.c)
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 *     CmQueryValueKey @ 0x1408DEEA0 (CmQueryValueKey.c)
 *     CmpCheckValueList @ 0x1408DFC60 (CmpCheckValueList.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14093BB0C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpAllocateDiffHiveEntry @ 0x14093BECC (VrpAllocateDiffHiveEntry.c)
 *     CmpFindNameInListCellWithStatus @ 0x140942DA0 (CmpFindNameInListCellWithStatus.c)
 *     RtlLookupAtomInAtomTable @ 0x140974FB0 (RtlLookupAtomInAtomTable.c)
 *     AslStringPatternMatchExW @ 0x1409D59C0 (AslStringPatternMatchExW.c)
 *     ObpCreateSymbolicLinkName @ 0x1409DE86C (ObpCreateSymbolicLinkName.c)
 *     ObpLookupDirectoryEntry @ 0x1409DF360 (ObpLookupDirectoryEntry.c)
 *     CmpFindKcbInHashEntryByName @ 0x1409DF780 (CmpFindKcbInHashEntryByName.c)
 *     CmpCompareCompressedName @ 0x1409DFA40 (CmpCompareCompressedName.c)
 *     CmpCheckRegistry2 @ 0x140A1DAC0 (CmpCheckRegistry2.c)
 *     CmpCheckLeaf @ 0x140A20814 (CmpCheckLeaf.c)
 *     RtlpHashStringToAtom @ 0x140A41880 (RtlpHashStringToAtom.c)
 *     CmpHashCompressedComponent @ 0x140A4C950 (CmpHashCompressedComponent.c)
 *     CmpCompareKeysByName @ 0x140A50214 (CmpCompareKeysByName.c)
 *     CmpCompareTwoCompressedNames @ 0x140A50420 (CmpCompareTwoCompressedNames.c)
 *     CmpCompareUnicodeString @ 0x140A8961C (CmpCompareUnicodeString.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140B42454 (CmpFindKcbInHashEntryByCompressedName.c)
 *     VfUtilPrintCheckinString @ 0x140C27A20 (VfUtilPrintCheckinString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
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
