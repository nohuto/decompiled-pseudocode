/*
 * XREFs of ?IsCoalesableMouseMoveInputSource@CMouseProcessor@@AEBA_NPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140223DB0
 * Callers:
 *     ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14016F764 (-CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMouseProcessor::IsCoalesableMouseMoveInputSource(
        CMouseProcessor *this,
        const struct tagINPUT_MESSAGE_SOURCE *a2)
{
  int v2; // ecx
  char result; // al

  v2 = *((_DWORD *)a2 + 1);
  result = 0;
  if ( !v2 || v2 == 4 )
    return 1;
  return result;
}
