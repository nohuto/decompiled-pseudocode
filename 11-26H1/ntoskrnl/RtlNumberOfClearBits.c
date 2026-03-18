/*
 * XREFs of RtlNumberOfClearBits @ 0x140356550
 * Callers:
 *     PopGetRemainingHibernateRangeDataSize @ 0x140BFA800 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 *     ViThunkFindAllSharedExports @ 0x140C3572C (ViThunkFindAllSharedExports.c)
 *     ViThunkReplaceAllSharedExports @ 0x140C35D24 (ViThunkReplaceAllSharedExports.c)
 *     ViThunkCreateSharedExportInformation @ 0x140C4407C (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140356570 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int SizeOfBitMap; // ebx

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  return SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
