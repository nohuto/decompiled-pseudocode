/*
 * XREFs of CmpTransDereferenceTransaction @ 0x1408ECC08
 * Callers:
 *     CmpTransInitializeTransaction @ 0x1408AC920 (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x1408ACEE8 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408AECE8 (CmpCleanupLightWeightTransaction.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmpCleanupRollbackPacket @ 0x1408B1080 (CmpCleanupRollbackPacket.c)
 *     CmpTransSearchAddTrans @ 0x1408EC150 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     NtCreateKeyTransacted @ 0x140974390 (NtCreateKeyTransacted.c)
 *     NtOpenKeyTransactedEx @ 0x140974730 (NtOpenKeyTransactedEx.c)
 *     CmRmFinalizeRecovery @ 0x140B3A6E8 (CmRmFinalizeRecovery.c)
 *     CmpAbortRollbackPacket @ 0x140B4CB14 (CmpAbortRollbackPacket.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
