/*
 * XREFs of ?WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ @ 0x140076D20
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 */

void __fastcall FxIoTarget::WaitForSentIoToComplete(FxIoTarget *this)
{
  FxCREvent::EnterCRAndWaitAndLeave(&this->m_SentIoEvent);
}
