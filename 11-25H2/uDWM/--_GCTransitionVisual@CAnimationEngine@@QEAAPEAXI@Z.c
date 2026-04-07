/*
 * XREFs of ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18007444C
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18006E194 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ @ 0x1800743D8 (--1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x180074474 (--1CTransitionVisual@CAnimationEngine@@QEAA@XZ.c)
 */

CAnimationEngine::CTransitionVisual *__fastcall CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisual *this)
{
  const struct std::nothrow_t *v2; // rdx

  CAnimationEngine::CTransitionVisual::~CTransitionVisual(this);
  CDisplayBlackCurtainAnimatedVisual::operator delete(this, v2);
  return this;
}
