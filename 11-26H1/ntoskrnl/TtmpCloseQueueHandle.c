/*
 * XREFs of TtmpCloseQueueHandle @ 0x1407F2DC0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x1407EFBA4 (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
