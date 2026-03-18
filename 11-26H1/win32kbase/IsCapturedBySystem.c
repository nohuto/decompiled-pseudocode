/*
 * XREFs of IsCapturedBySystem @ 0x140199570
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400D029C (-IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 */

bool __fastcall IsCapturedBySystem(struct tagINPUTDEST *a1, int a2, int a3)
{
  CMouseProcessor *MouseProcessor; // rax
  char v5; // bl

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor((int)a1, a2, a3);
  v5 = 0;
  if ( MouseProcessor )
    return (unsigned __int8)CMouseProcessor::IsMouseOwner(MouseProcessor, a1) != 0;
  return v5;
}
