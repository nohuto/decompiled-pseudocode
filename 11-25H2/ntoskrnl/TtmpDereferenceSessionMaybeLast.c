/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x14075AC78
 * Callers:
 *     TtmpSessionWorker @ 0x14075B340 (TtmpSessionWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x1407601F4 (TtmiSessionTerminalListWorker.c)
 *     TtmpDeleteQueue @ 0x1407613A0 (TtmpDeleteQueue.c)
 *     TtmCleanupCurrentSession @ 0x140AA7F5C (TtmCleanupCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
