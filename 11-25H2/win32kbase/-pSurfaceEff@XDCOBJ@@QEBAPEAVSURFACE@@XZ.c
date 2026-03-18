/*
 * XREFs of ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400CD1B8
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     <none>
 */

struct SURFACE *__fastcall XDCOBJ::pSurfaceEff(XDCOBJ *this)
{
  __int64 v2; // r8
  struct SURFACE *result; // rax

  v2 = *(_QWORD *)(W32GetSessionState(this) + 88);
  result = *(struct SURFACE **)(*(_QWORD *)this + 496LL);
  if ( !result )
    return *(struct SURFACE **)(v2 + 4264);
  if ( *((_QWORD *)this + 3) )
    return (struct SURFACE *)*((_QWORD *)this + 3);
  return result;
}
