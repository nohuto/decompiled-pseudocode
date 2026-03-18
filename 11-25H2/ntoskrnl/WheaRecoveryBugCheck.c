/*
 * XREFs of WheaRecoveryBugCheck @ 0x14064FC40
 * Callers:
 *     WheaReportHwError @ 0x140353D30 (WheaReportHwError.c)
 *     KiMcheckAlternateReturn @ 0x1405C5660 (KiMcheckAlternateReturn.c)
 * Callees:
 *     WheapCompressErrorRecord @ 0x140478378 (WheapCompressErrorRecord.c)
 *     WheapAddToDumpFile @ 0x14064FD2C (WheapAddToDumpFile.c)
 *     WheapPersistPageForMemoryError @ 0x14064FEB8 (WheapPersistPageForMemoryError.c)
 */

__int64 __fastcall WheaRecoveryBugCheck(__int64 a1, __int64 a2)
{
  WheapCompressErrorRecord(3, a1);
  WheapPersistPageForMemoryError(a1);
  PshedWriteErrorRecord(0LL, *(unsigned int *)(a1 + 20), a1);
  WheapAddToDumpFile(a1, *(unsigned int *)(a1 + 20));
  return PshedBugCheckSystem(a2, a1);
}
