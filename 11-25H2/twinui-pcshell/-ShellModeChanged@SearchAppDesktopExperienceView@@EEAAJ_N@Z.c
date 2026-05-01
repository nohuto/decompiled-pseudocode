/*
 * XREFs of ?ShellModeChanged@SearchAppDesktopExperienceView@@EEAAJ_N@Z @ 0x1803C3580
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803C2B84 (-PostTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ShellModeChanged(
        SearchAppDesktopExperienceView *this,
        unsigned __int8 a2)
{
  SearchAppDesktopExperienceView::PostTargetedMessage((__int64)this - 56, 0, a2);
  return 0LL;
}
