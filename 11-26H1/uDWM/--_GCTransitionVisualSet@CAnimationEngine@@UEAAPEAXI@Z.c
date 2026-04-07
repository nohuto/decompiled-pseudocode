/*
 * XREFs of ??_GCTransitionVisualSet@CAnimationEngine@@UEAAPEAXI@Z @ 0x180065180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ @ 0x1800651C0 (--1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CAnimationEngine::CTransitionVisualSet *__fastcall CAnimationEngine::CTransitionVisualSet::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisualSet *this,
        char a2)
{
  CAnimationEngine::CTransitionVisualSet::~CTransitionVisualSet(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
