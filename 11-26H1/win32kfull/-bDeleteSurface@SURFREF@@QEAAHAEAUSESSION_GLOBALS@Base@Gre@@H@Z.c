/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z @ 0x140295898
 * Callers:
 *     ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x14028C6C8 (-GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z.c)
 *     ?GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x140330354 (-GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFREF::bDeleteSurface(SURFREF *this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*((_QWORD *)this + 4), a2, 0LL, 0LL);
  if ( (_DWORD)result )
    *((_QWORD *)this + 4) = 0LL;
  return result;
}
