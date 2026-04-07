/*
 * XREFs of ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x180013600
 * Callers:
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800036B0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800134C4 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800BC2D0 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 * Callees:
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18001345C (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18007E8CC (-GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 */

__int64 __fastcall CContactManager::GetBoundedContactWidth(CContactManager *this, int a2, POINT a3)
{
  int MinimumContactWidth; // ecx
  unsigned int MaximumContactWidth; // eax

  MinimumContactWidth = CContactManager::GetMinimumContactWidth(a3);
  if ( a2 >= MinimumContactWidth )
  {
    MaximumContactWidth = CContactManager::GetMaximumContactWidth(a3);
    MinimumContactWidth = a2;
    if ( a2 > (int)MaximumContactWidth )
      return MaximumContactWidth;
  }
  return (unsigned int)MinimumContactWidth;
}
