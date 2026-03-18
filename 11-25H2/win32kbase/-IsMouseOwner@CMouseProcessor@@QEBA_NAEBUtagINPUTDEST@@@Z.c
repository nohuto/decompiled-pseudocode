/*
 * XREFs of ?IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x140039D94
 * Callers:
 *     IsCapturedBySystem @ 0x14015A4C0 (IsCapturedBySystem.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x140039A7C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

char __fastcall CMouseProcessor::IsMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2)
{
  return CInputDest::operator==((int *)this + 944, (__int64)a2);
}
