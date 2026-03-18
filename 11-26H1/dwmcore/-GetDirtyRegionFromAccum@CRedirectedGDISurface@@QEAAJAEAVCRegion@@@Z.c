/*
 * XREFs of ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z @ 0x1800E98E8
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18012DBA4 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18012EF44 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800E9CB0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::GetDirtyRegionFromAccum(CRedirectedGDISurface *this, struct CRegion *a2)
{
  signed int v3; // edi
  signed int LastError; // eax
  HGDIOBJ ho; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  ho = 0LL;
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfGetDirtyRgn(*((_QWORD *)this + 3), 0LL, 0LL, &ho, 0LL, 0LL, 0LL, 0LL, 0LL) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( v3 >= 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F4550, 4u, v3, 0xD6u, 0LL);
  }
  if ( ho )
  {
    CRegion::SetHRGN(a2, (HRGN)ho);
    DeleteObject(ho);
  }
  return (unsigned int)v3;
}
