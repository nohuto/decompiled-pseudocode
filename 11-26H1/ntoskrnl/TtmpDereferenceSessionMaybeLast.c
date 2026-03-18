/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1407E6ED0
 * Callers:
 *     TtmpSessionWorker @ 0x1407E7560 (TtmpSessionWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x1407EC104 (TtmiSessionTerminalListWorker.c)
 *     TtmpDeleteQueue @ 0x1407ED2A0 (TtmpDeleteQueue.c)
 *     TtmCleanupCurrentSession @ 0x140A39EB8 (TtmCleanupCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
