/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x14078D7C0
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x1406D5E6C (WheaPersistBadPageToBcd.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistBadPageToBcd((unsigned int)EmpBadS3Page);
}
