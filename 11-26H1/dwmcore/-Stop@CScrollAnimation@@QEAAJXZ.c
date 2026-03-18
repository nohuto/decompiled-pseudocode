/*
 * XREFs of ?Stop@CScrollAnimation@@QEAAJXZ @ 0x18013E998
 * Callers:
 *     ?DestroyInteractionAnimations@CInteractionTracker@@EEAAXXZ @ 0x18013D150 (-DestroyInteractionAnimations@CInteractionTracker@@EEAAXXZ.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x18013E9D8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z.c)
 *     ??1CScrollAnimation@@MEAA@XZ @ 0x180200004 (--1CScrollAnimation@@MEAA@XZ.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker2@@EEAAXXZ @ 0x180214EF0 (-DestroyInteractionAnimations@CInteractionTracker2@@EEAAXXZ.c)
 * Callees:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18010E190 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 */

__int64 __fastcall CScrollAnimation::Stop(CScrollAnimation *this)
{
  *((_BYTE *)this + 216) &= ~1u;
  if ( (*((_BYTE *)this + 312) & 1) != 0 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    *((_BYTE *)this + 312) &= ~1u;
    *((_DWORD *)this + 56) = 16;
  }
  return 0LL;
}
