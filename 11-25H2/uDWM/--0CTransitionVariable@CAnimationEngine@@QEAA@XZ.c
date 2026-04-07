/*
 * XREFs of ??0CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x18006E3E4
 * Callers:
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18006E330 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

CAnimationEngine::CTransitionVariable *__fastcall CAnimationEngine::CTransitionVariable::CTransitionVariable(
        CAnimationEngine::CTransitionVariable *this)
{
  CAnimationEngine::CTransitionVariable *result; // rax

  *(_QWORD *)this = 0LL;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
