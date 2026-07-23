/*
 * XREFs of KiRecordRecoveryFailure @ 0x1405FCF28
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405FCCBC (KiHandleMultipleBugchecksDuringRecovery.c)
 *     KiScheduleBugcheckRecovery @ 0x1405FCF90 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall KiRecordRecoveryFailure(int a1)
{
  *(_DWORD *)&KsepShimDbLock.SavedApcStateFill[16] = a1;
  IoAddTriageDumpDataBlock((ULONG)&KsepShimDbLock.SavedApcStateFill[16], (PVOID)4);
  return IoAddTriageDumpDataBlock((ULONG)&KsepShimDbLock.648, (PVOID)0x4C);
}
