/*
 * XREFs of UpdateGlobalCursorOwner @ 0x140161940
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14009C52C (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 */

void __fastcall UpdateGlobalCursorOwner(struct CInputDest *a1, struct tagPOINT *a2, int a3)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor((int)a1, (int)a2, a3);
  if ( MouseProcessor )
    CMouseProcessor::UpdateGlobalCursorOwner(MouseProcessor, a1, a2, 0LL);
}
