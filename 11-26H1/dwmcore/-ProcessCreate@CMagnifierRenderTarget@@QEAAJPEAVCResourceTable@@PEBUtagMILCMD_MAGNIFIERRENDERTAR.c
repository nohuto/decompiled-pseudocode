/*
 * XREFs of ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x1802160E0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801DC480 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCreate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_CREATE *a3)
{
  int updated; // eax
  unsigned int v6; // ebx

  *((_QWORD *)this + 296) = *((_QWORD *)a3 + 1);
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((_DWORD *)a3 + 5));
  v6 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x52u, 0LL);
  }
  else
  {
    *((_DWORD *)this + 30) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 31) = *((_DWORD *)a3 + 7);
    if ( *((_DWORD *)a3 + 4) <= 6u )
    {
      *((_OWORD *)this + 149) = *((_OWORD *)a3 + 1);
      *((_OWORD *)this + 150) = *((_OWORD *)a3 + 2);
      *((_OWORD *)this + 151) = *((_OWORD *)a3 + 3);
      *((_OWORD *)this + 152) = *((_OWORD *)a3 + 4);
      *((_OWORD *)this + 153) = *((_OWORD *)a3 + 5);
      *((_OWORD *)this + 154) = *((_OWORD *)a3 + 6);
      *((_OWORD *)this + 155) = *((_OWORD *)a3 + 7);
      *((_OWORD *)this + 156) = *((_OWORD *)a3 + 8);
      *((_OWORD *)this + 157) = *((_OWORD *)a3 + 9);
      *((_OWORD *)this + 158) = *((_OWORD *)a3 + 10);
      *((_OWORD *)this + 159) = *((_OWORD *)a3 + 11);
      *((_OWORD *)this + 160) = *((_OWORD *)a3 + 12);
      *((_OWORD *)this + 161) = *((_OWORD *)a3 + 13);
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x59u, 0LL);
    }
  }
  return v6;
}
