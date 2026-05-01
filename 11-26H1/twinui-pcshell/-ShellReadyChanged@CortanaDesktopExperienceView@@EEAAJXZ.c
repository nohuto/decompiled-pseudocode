/*
 * XREFs of ?ShellReadyChanged@CortanaDesktopExperienceView@@EEAAJXZ @ 0x1803D7160
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803D634C (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShellReadyChanged(CortanaDesktopExperienceView *this)
{
  CortanaDesktopExperienceView::PostTargetedMessage((__int64)this - 72, 1u, 0);
  return 0LL;
}
