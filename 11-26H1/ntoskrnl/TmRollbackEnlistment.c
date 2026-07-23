/*
 * XREFs of TmRollbackEnlistment @ 0x140536C50
 * Callers:
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmpRollbackTransactionArray @ 0x1408D67C8 (CmpRollbackTransactionArray.c)
 *     CmpAbortRollbackPacket @ 0x140B4E8A4 (CmpAbortRollbackPacket.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackEnlistment(Enlistment, TmVirtualClock);
}
