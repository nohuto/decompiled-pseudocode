/*
 * XREFs of WheaRecoveryBugCheck @ 0x1406D8C30
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     KiMcheckAlternateReturn @ 0x1405FF7C0 (KiMcheckAlternateReturn.c)
 * Callees:
 *     WheapCompressErrorRecord @ 0x1403E2ED8 (WheapCompressErrorRecord.c)
 *     WheapAddToDumpFile @ 0x1406D8D20 (WheapAddToDumpFile.c)
 *     WheapPersistPageForMemoryError @ 0x1406D8EB0 (WheapPersistPageForMemoryError.c)
 */

__int64 __fastcall WheaRecoveryBugCheck(__int64 a1, __int64 a2)
{
  WheapCompressErrorRecord(3, a1);
  WheapPersistPageForMemoryError(a1);
  PshedWriteErrorRecord(0LL, *(unsigned int *)(a1 + 20), a1);
  WheapAddToDumpFile(a1, *(unsigned int *)(a1 + 20));
  return PshedBugCheckSystem(a2, a1);
}
