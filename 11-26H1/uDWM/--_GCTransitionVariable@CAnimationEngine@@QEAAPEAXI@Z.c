/*
 * XREFs of ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x1800652C8
 * Callers:
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18003D3BC (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x180065264 (--1CTransitionVisual@CAnimationEngine@@QEAA@XZ.c)
 * Callees:
 *     ??1CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x1800652F4 (--1CTransitionVariable@CAnimationEngine@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CAnimationEngine::CTransitionVariable *__fastcall CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVariable *this)
{
  CAnimationEngine::CTransitionVariable::~CTransitionVariable(this);
  operator delete(this, 0x18uLL);
  return this;
}
