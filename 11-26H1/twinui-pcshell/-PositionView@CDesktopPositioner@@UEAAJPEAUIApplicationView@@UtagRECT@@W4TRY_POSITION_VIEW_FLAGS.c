/*
 * XREFs of ?PositionView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1805108B0
 * Callers:
 *     ?PositionView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1805108E0 (-PositionView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAG.c)
 *     ?PositionView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1805108F0 (-PositionView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FL.c)
 * Callees:
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x180510EF0 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W_ea_180510EF0.c)
 */

__int64 __fastcall CDesktopPositioner::PositionView(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int128 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = *a3;
  return CDesktopPositioner::PositionViewWithOptions(a1 - 120, a2, &v5, a4);
}
