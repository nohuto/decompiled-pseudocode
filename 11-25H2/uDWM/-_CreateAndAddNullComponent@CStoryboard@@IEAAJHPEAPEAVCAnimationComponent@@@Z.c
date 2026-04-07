/*
 * XREFs of ?_CreateAndAddNullComponent@CStoryboard@@IEAAJHPEAPEAVCAnimationComponent@@@Z @ 0x180097320
 * Callers:
 *     ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x1800697B0 (-OnEndTransitionRequest@CNoAnimation@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x1800C80C0 (-OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStoryboard::_CreateAndAddNullComponent(CStoryboard *this, int a2, struct CAnimationComponent **a3)
{
  return CStoryboard::_CreateAndAddNullComponentWithWindow(this, 0LL, a2, a3);
}
