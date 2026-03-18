/*
 * XREFs of ?StartSignaling@CRedirectedGDISurface@@QEAAJXZ @ 0x1801C1048
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x18004A9AC (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::StartSignaling(CRedirectedGDISurface *this)
{
  signed int v2; // edi
  signed int LastError; // eax

  v2 = 0;
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfSetSignalOnDirty(*((_QWORD *)this + 3), 0LL, qword_1803E2618, 1LL) )
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AB220, 2u, v2, 0xEFu, 0LL);
  }
  return (unsigned int)v2;
}
