/*
 * XREFs of CmpIsWriteQueueActive @ 0x1404B6690
 * Callers:
 *     NtCompressKey @ 0x140854EB0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14085D050 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x1408BA65C (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x1408BD598 (HvGetHiveLogFileStatus.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsWriteQueueActive(_QWORD *a1)
{
  return *a1 != 0LL;
}
