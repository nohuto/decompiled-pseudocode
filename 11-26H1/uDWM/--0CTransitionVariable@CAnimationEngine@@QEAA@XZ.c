/*
 * XREFs of ??0CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x18003D478
 * Callers:
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18003D3BC (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
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
