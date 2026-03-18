/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@PEAUClippingScopeState@CScopedClipStack@@@std@@YAPEAUClippingScopeState@CScopedClipStack@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@V30@PEAU12@@Z @ 0x18016C3B8
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006AFB0 (--$emplace_back@$$V@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippi.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006B600 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z @ 0x18006BF80 (-EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z.c)
 * Callees:
 *     ??0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z @ 0x1801B8E00 (--0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Uninitialized_move_unchecked<std::move_iterator<CScopedClipStack::ClippingScopeState *>,CScopedClipStack::ClippingScopeState *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rdx

  v4 = a2;
  while ( a1 != v4 )
  {
    CScopedClipStack::ClippingScopeState::ClippingScopeState(a3, a1);
    a3 = v7 + v6;
    a1 = v7 + v8;
  }
  return a3;
}
