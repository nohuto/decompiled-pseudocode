/*
 * XREFs of TtmpCloseTerminalHandle @ 0x140760770
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     TtmpAcquireSessionLock @ 0x1406EBB64 (TtmpAcquireSessionLock.c)
 *     TtmiLogTerminalHandleClosed @ 0x14075F250 (TtmiLogTerminalHandleClosed.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1407609A4 (TtmpSetTerminalPendingCleanup.c)
 */

void __fastcall TtmpCloseTerminalHandle(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
  {
    TtmpAcquireSessionLock();
    TtmpSetTerminalPendingCleanup(*(_QWORD *)(a2 + 16), a2);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  PsGetProcessId(Process);
  TtmiLogTerminalHandleClosed();
}
