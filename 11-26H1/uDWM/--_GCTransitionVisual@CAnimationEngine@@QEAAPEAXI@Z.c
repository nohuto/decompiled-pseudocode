/*
 * XREFs of ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x180065238
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003D214 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ @ 0x1800651C0 (--1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ.c)
 * Callees:
 *     ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x180065264 (--1CTransitionVisual@CAnimationEngine@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CAnimationEngine::CTransitionVisual *__fastcall CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisual *this)
{
  CAnimationEngine::CTransitionVisual::~CTransitionVisual(this);
  operator delete(this, 0x58uLL);
  return this;
}
