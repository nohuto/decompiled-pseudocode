/*
 * XREFs of ?SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180281ABC
 * Callers:
 *     ?ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE@@@Z @ 0x180210320 (-ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFA.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180057CB8 (-IsEquivalentTo@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSceneSurfaceMaterialInput::SetSurfaceContentRect(const __m128i *a1, const __m128i *a2)
{
  char result; // al
  _OWORD *v3; // r10
  _OWORD *v4; // r11
  __int64 (__fastcall *v5)(_OWORD *, _QWORD, _OWORD *); // rax

  result = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEquivalentTo(a2, a1 + 6);
  if ( !result )
  {
    v5 = *(__int64 (__fastcall **)(_OWORD *, _QWORD, _OWORD *))(*(_QWORD *)v3 + 80LL);
    v3[6] = *v4;
    return v5(v3, 0LL, v3);
  }
  return result;
}
