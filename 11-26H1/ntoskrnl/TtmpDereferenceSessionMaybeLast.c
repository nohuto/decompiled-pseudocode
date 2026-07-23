/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1407ECA28
 * Callers:
 *     TtmpSessionWorker @ 0x1407ED0C0 (TtmpSessionWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x1407F1C68 (TtmiSessionTerminalListWorker.c)
 *     TtmpDeleteQueue @ 0x1407F2E00 (TtmpDeleteQueue.c)
 *     TtmCleanupCurrentSession @ 0x1409F5AB8 (TtmCleanupCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
