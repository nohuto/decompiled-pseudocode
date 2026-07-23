/*
 * XREFs of CmpTransDereferenceTransaction @ 0x1408F31C8
 * Callers:
 *     CmpTransInitializeTransaction @ 0x1408B2D64 (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x1408B3328 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408B5128 (CmpCleanupLightWeightTransaction.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmpCleanupRollbackPacket @ 0x1408B7570 (CmpCleanupRollbackPacket.c)
 *     CmpTransSearchAddTrans @ 0x1408F2710 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     NtCreateKeyTransacted @ 0x1409363A0 (NtCreateKeyTransacted.c)
 *     NtOpenKeyTransactedEx @ 0x140936740 (NtOpenKeyTransactedEx.c)
 *     CmRmFinalizeRecovery @ 0x140B3CA88 (CmRmFinalizeRecovery.c)
 *     CmpAbortRollbackPacket @ 0x140B4E8A4 (CmpAbortRollbackPacket.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
