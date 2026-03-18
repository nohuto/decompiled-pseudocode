/*
 * XREFs of ?Present@CCompSwapChain@@QEAAJII@Z @ 0x1802A3CDC
 * Callers:
 *     ?Present@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180255D8C (-Present@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x1800AFB20 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x18012F7D8 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801744A0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x180299670 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x1802A3460 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 */

__int64 __fastcall CCompSwapChain::Present(CCompSwapChain *this)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edi
  int v6; // eax
  DXGI_PRESENT_PARAMETERS v8; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v9[2]; // [rsp+58h] [rbp-59h] BYREF
  int v10; // [rsp+68h] [rbp-49h]
  __int64 v11; // [rsp+6Ch] [rbp-45h]
  char v12[128]; // [rsp+78h] [rbp-39h] BYREF

  v9[0] = v12;
  v10 = 8;
  v11 = 8LL;
  v9[1] = v12;
  memset(&v8, 0, sizeof(v8));
  `vector constructor iterator'(
    v12,
    16LL,
    8LL,
    (void (__fastcall *)(char *))TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>);
  v2 = CCompSwapChain::CopyFrontToBackBuffer(this);
  v5 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AB038, 2u, v2, 0x13Bu, 0LL);
  }
  else
  {
    if ( **((_DWORD **)this + 19) )
    {
      HIDWORD(v11) = 0;
      CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>,16,0>>(
        (int **)this + 19,
        (__int64)v9);
      v8.DirtyRectsCount = HIDWORD(v11);
      v8.pDirtyRects = (RECT *)v9[0];
    }
    v6 = CD3DDevice::Present(*((CD3DDevice **)this + 7), *((struct IDXGISwapChain1 **)this + 8), v3, v4, &v8);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AB038, 2u, v6, 0x14Au, 0LL);
    }
    else
    {
      if ( *((_DWORD *)this + 36) == 3 )
        CRegion::Copy((FastRegion::CRegion **)this + 37, (FastRegion::CRegion **)this + 28);
      CRegion::Copy((FastRegion::CRegion **)this + 28, (FastRegion::CRegion **)this + 19);
      **((_DWORD **)this + 19) = 0;
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v9);
  return v5;
}
