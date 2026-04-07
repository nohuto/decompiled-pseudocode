/*
 * XREFs of ??0CWindowArrangementTransition@@QEAA@PEAVCWindowList@@@Z @ 0x18008DDD8
 * Callers:
 *     ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180042B4C (-EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CWindowArrangementTransition *__fastcall CWindowArrangementTransition::CWindowArrangementTransition(
        CWindowArrangementTransition *this,
        struct CWindowList *a2)
{
  CWindowArrangementTransition *result; // rax

  *(_QWORD *)this = a2;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  return result;
}
