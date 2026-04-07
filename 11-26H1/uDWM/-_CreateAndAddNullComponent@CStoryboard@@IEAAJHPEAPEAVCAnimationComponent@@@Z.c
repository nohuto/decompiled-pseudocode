/*
 * XREFs of ?_CreateAndAddNullComponent@CStoryboard@@IEAAJHPEAPEAVCAnimationComponent@@@Z @ 0x18008A380
 * Callers:
 *     ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x180030E60 (-OnEndTransitionRequest@CNoAnimation@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x1800C20B0 (-OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStoryboard::_CreateAndAddNullComponent(CStoryboard *this, int a2, struct CAnimationComponent **a3)
{
  return CStoryboard::_CreateAndAddNullComponentWithWindow(this, 0LL, a2, a3);
}
