/*
 * XREFs of ??C?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEBAPEAUClippingScopeState@CScopedClipStack@@XZ @ 0x18024F1DC
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006AFB0 (--$emplace_back@$$V@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippi.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006B600 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z @ 0x18006BF80 (-EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + 192 * v1;
}
