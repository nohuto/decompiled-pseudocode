/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x140215FE0
 * Callers:
 *     HandleMITWakeSignal @ 0x1400F06E8 (HandleMITWakeSignal.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ @ 0x140220334 (-Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall ExecuteMarshaledInterceptRequest(__int64 a1, __int64 a2)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, a2);
  if ( MouseProcessor )
    CMouseProcessor::Extensibility_ExecuteMarshaledInterceptRequest(MouseProcessor);
}
