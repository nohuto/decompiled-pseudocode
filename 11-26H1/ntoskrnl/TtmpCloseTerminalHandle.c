/*
 * XREFs of TtmpCloseTerminalHandle @ 0x1407EC690
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PsGetProcessId @ 0x140466BE0 (PsGetProcessId.c)
 *     TtmiLogTerminalHandleClosed @ 0x1407EB1A8 (TtmiLogTerminalHandleClosed.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1407EC8C0 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpAcquireSessionLock @ 0x140A3ACCC (TtmpAcquireSessionLock.c)
 */

void __fastcall TtmpCloseTerminalHandle(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
  {
    TtmpAcquireSessionLock();
    TtmpSetTerminalPendingCleanup(*(_QWORD *)(a2 + 16), a2);
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
  PsGetProcessId(Process);
  TtmiLogTerminalHandleClosed();
}
