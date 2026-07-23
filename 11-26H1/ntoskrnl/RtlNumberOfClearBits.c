/*
 * XREFs of RtlNumberOfClearBits @ 0x1403582F0
 * Callers:
 *     PopGetRemainingHibernateRangeDataSize @ 0x140C00800 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     ViThunkFindAllSharedExports @ 0x140C3B73C (ViThunkFindAllSharedExports.c)
 *     ViThunkReplaceAllSharedExports @ 0x140C3BD34 (ViThunkReplaceAllSharedExports.c)
 *     ViThunkCreateSharedExportInformation @ 0x140C4A08C (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int SizeOfBitMap; // ebx

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  return SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
