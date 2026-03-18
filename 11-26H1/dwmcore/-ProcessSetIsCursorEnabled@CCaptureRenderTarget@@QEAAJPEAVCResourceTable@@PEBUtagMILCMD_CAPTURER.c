/*
 * XREFs of ?ProcessSetIsCursorEnabled@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED@@@Z @ 0x180257890
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022A68C (-AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022B188 (-RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetIsCursorEnabled(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED *a3)
{
  char v4; // al
  int v5; // edi

  v4 = *((_BYTE *)this + 2592);
  if ( *((_BYTE *)a3 + 8) )
  {
    v5 = 1;
    if ( !v4 )
    {
      CComposition::AddCursorVisualListener(this, this);
      *((_BYTE *)this + 2592) = 1;
    }
  }
  else
  {
    if ( v4 )
    {
      CComposition::RemoveCursorVisualListener(this, this);
      *((_BYTE *)this + 2592) = 0;
    }
    v5 = 2;
  }
  *((_DWORD *)this + 46) = v5;
  return 0LL;
}
