/*
 * XREFs of TtmpCloseQueueHandle @ 0x1407ED260
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140466BE0 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x1407EA044 (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
