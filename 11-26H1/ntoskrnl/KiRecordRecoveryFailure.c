/*
 * XREFs of KiRecordRecoveryFailure @ 0x1405FA508
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405F9734 (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405F9FE0 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405FA29C (KiHandleMultipleBugchecksDuringRecovery.c)
 *     KiScheduleBugcheckRecovery @ 0x1405FA570 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall KiRecordRecoveryFailure(int a1)
{
  *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[144] = a1;
  IoAddTriageDumpDataBlock((ULONG)&KsepShimDbLock.WaitBlockFill11[144], (PVOID)4);
  return IoAddTriageDumpDataBlock((ULONG)&KsepShimDbLock.WaitBlockFill11[152], (PVOID)0x4C);
}
