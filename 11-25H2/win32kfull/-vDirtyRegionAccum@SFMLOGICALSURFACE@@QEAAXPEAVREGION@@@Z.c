/*
 * XREFs of ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x140095554
 * Callers:
 *     GreAdjustSpriteDirtyAccum @ 0x1400579A0 (GreAdjustSpriteDirtyAccum.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x140095E98 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1403219F0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACE::vDirtyRegionAccum(SFMLOGICALSURFACE *this, struct REGION *a2)
{
  *((_QWORD *)this + 10) = a2;
  EtwTraceLifetimeAccum(*(_QWORD *)this, 1LL);
}
