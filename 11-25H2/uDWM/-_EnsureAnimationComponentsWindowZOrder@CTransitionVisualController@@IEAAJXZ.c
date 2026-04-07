/*
 * XREFs of ?_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ @ 0x18002AA5C
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002A18C (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x1800281EC (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800A64F0 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureAnimationComponentsWindowZOrder(
        CTransitionVisualController *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 34); i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * i)) == 0x80000000 )
      CAnimationComponent::SetGhost(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * i));
  }
  return 0LL;
}
