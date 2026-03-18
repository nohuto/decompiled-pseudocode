/*
 * XREFs of ForceCapture @ 0x14021B530
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x140223874 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 */

void __fastcall ForceCapture(unsigned int a1, struct tagINPUTDEST *a2, int a3)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, (int)a2, a3);
  if ( MouseProcessor && (a2 || a1 == 3) )
    CMouseProcessor::ForceMouseOwner(MouseProcessor, a2, a1);
}
