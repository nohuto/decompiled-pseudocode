/*
 * XREFs of xxxProcessMouseEvent @ 0x1400D0BC0
 * Callers:
 *     HandleMITWakeSignal @ 0x14012BBF8 (HandleMITWakeSignal.c)
 * Callees:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 */

void __fastcall xxxProcessMouseEvent(__int64 a1)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1);
  if ( MouseProcessor )
    CMouseProcessor::xxxProcessMouseEvent(MouseProcessor);
}
