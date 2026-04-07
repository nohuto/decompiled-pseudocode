/*
 * XREFs of ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x1800C8430
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x18007DC64 (-RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ.c)
 */

__int64 __fastcall CLauncherLaunch::OnEndTransitionRequest(struct _LIST_ENTRY *this)
{
  CLauncherAnimationBase::RecordLauncherRect(this);
  return CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
}
