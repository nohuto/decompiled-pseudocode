/*
 * XREFs of CmpIsWriteQueueActive @ 0x1404BCEB0
 * Callers:
 *     NtCompressKey @ 0x14084EBA0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140856CB8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x1408B4088 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x1408B6FC8 (HvGetHiveLogFileStatus.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsWriteQueueActive(_QWORD *a1)
{
  return *a1 != 0LL;
}
