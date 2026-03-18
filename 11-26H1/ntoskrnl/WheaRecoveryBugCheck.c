/*
 * XREFs of WheaRecoveryBugCheck @ 0x1406D4B50
 * Callers:
 *     WheaReportHwError @ 0x1403DDD80 (WheaReportHwError.c)
 *     KiMcheckAlternateReturn @ 0x1405FCD70 (KiMcheckAlternateReturn.c)
 * Callees:
 *     WheapCompressErrorRecord @ 0x1403DFCE8 (WheapCompressErrorRecord.c)
 *     WheapAddToDumpFile @ 0x1406D4C40 (WheapAddToDumpFile.c)
 *     WheapPersistPageForMemoryError @ 0x1406D4DD0 (WheapPersistPageForMemoryError.c)
 */

__int64 __fastcall WheaRecoveryBugCheck(__int64 a1, __int64 a2)
{
  WheapCompressErrorRecord(3, a1);
  WheapPersistPageForMemoryError(a1);
  PshedWriteErrorRecord(0LL, *(unsigned int *)(a1 + 20), a1);
  WheapAddToDumpFile(a1, *(unsigned int *)(a1 + 20));
  return PshedBugCheckSystem(a2, a1);
}
