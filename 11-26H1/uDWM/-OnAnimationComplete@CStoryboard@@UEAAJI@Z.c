/*
 * XREFs of ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x180029C10
 * Callers:
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x18002A110 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180028368 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180029C44 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 */

__int64 __fastcall CStoryboard::OnAnimationComplete(CStoryboard *this, int a2)
{
  CStoryboard *v2; // rbx

  v2 = (CStoryboard *)((char *)this - 16);
  if ( *((_DWORD *)this + 3) == a2 )
  {
    CStoryboard::_NotifyStoryboardState((char *)this - 16, 4LL);
    CStoryboard::_Cleanup(v2);
  }
  return 0LL;
}
