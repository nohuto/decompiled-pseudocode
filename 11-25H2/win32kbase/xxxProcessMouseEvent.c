/*
 * XREFs of xxxProcessMouseEvent @ 0x1402170E0
 * Callers:
 *     HandleMITWakeSignal @ 0x1400F06E8 (HandleMITWakeSignal.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x140222878 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall xxxProcessMouseEvent(__int64 a1, __int64 a2)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, a2);
  if ( MouseProcessor )
    CMouseProcessor::xxxProcessMouseEvent(MouseProcessor);
}
