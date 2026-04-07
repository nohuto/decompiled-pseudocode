/*
 * XREFs of ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x18002D4D8
 * Callers:
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18002D3A8 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18002FCAC (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800BCA24 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 * Callees:
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18002D548 (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18008F5E8 (-GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 */

__int64 __fastcall CContactManager::GetBoundedContactWidth(CContactManager *this, signed int a2, struct tagPOINT a3)
{
  unsigned int MinimumContactWidth; // ecx
  unsigned int MaximumContactWidth; // eax

  MinimumContactWidth = CContactManager::GetMinimumContactWidth(a3);
  if ( a2 >= (int)MinimumContactWidth )
  {
    MaximumContactWidth = CContactManager::GetMaximumContactWidth(a3);
    MinimumContactWidth = a2;
    if ( a2 > (int)MaximumContactWidth )
      return MaximumContactWidth;
  }
  return MinimumContactWidth;
}
