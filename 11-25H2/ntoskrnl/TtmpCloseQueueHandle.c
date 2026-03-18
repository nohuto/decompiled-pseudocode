/*
 * XREFs of TtmpCloseQueueHandle @ 0x140761360
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x14075E010 (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
