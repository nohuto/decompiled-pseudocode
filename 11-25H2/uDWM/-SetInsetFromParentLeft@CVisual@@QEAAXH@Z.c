/*
 * XREFs of ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002D4AC
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18000C8B0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18002BCC0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18002D244 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18002D3A8 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18002FCAC (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180053B00 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180093928 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x180094858 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B9B0C (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800BC49C (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800BCA24 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800BCE70 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetInsetFromParentLeft(CVisual *this, int a2)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 20) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 20) = a2;
    (*(void (__fastcall **)(CVisual *, __int64))(v2 + 24))(this, 2LL);
  }
}
