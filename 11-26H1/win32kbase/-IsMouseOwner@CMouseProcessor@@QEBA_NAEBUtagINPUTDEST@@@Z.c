/*
 * XREFs of ?IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400D029C
 * Callers:
 *     IsCapturedBySystem @ 0x140199570 (IsCapturedBySystem.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400D0D68 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

__int64 __fastcall CMouseProcessor::IsMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2)
{
  return CInputDest::operator==((char *)this + 3784, a2);
}
