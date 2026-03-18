/*
 * XREFs of ??4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x180206A28
 * Callers:
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x18006AE00 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006AFB0 (--$emplace_back@$$V@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippi.c)
 *     ?pop_back@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B300 (-pop_back@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScopeSta.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18006B470 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006B600 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z @ 0x18006BF80 (-EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScopedClipStack::ClippingScopeState::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 108) = *(_OWORD *)(a2 + 108);
  *(_OWORD *)(a1 + 124) = *(_OWORD *)(a2 + 124);
  *(_OWORD *)(a1 + 140) = *(_OWORD *)(a2 + 140);
  *(_OWORD *)(a1 + 156) = *(_OWORD *)(a2 + 156);
  *(_DWORD *)(a1 + 172) = *(_DWORD *)(a2 + 172);
  v4 = *(_QWORD *)(a2 + 176);
  *(_QWORD *)(a2 + 176) = 0LL;
  v5 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 176) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *(_BYTE *)(a1 + 184) = *(_BYTE *)(a2 + 184);
  return a1;
}
