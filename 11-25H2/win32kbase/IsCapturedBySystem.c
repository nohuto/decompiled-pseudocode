/*
 * XREFs of IsCapturedBySystem @ 0x14015A4C0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x140039D94 (-IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

bool __fastcall IsCapturedBySystem(struct tagINPUTDEST *a1, __int64 a2)
{
  CMouseProcessor *MouseProcessor; // rax
  char v4; // bl

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor((__int64)a1, a2);
  v4 = 0;
  if ( MouseProcessor )
    return CMouseProcessor::IsMouseOwner(MouseProcessor, a1) != 0;
  return v4;
}
