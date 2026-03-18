/*
 * XREFs of ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180034350
 * Callers:
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801A8440 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 * Callees:
 *     ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z @ 0x18003457C (-CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::PresentMPO(CD3DDevice *this, struct IDXGISwapChainDWM1 *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // r9d
  int v10; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 281) )
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x3D8u, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGISwapChainDWM1 *))(**((_QWORD **)this + 28) + 112LL))(
           *((_QWORD *)this + 28),
           a2);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3E0u, 0LL);
    }
    else
    {
      v5 = 0LL;
      if ( g_pComposition )
        v5 = *((_QWORD *)g_pComposition + 110);
      *((_QWORD *)this + 184) = v5;
      *((_BYTE *)this + 1491) = 0;
      if ( v4 == 142213121 )
        CD3DDevice::CheckForLeakedDWMSwapChain(a2);
    }
  }
  if ( *((_DWORD *)this + 281)
    || v4 != -2005532292 && v4 != -2147024882 && v4 != -2005270523
    || !*((_DWORD *)this + 110) )
  {
    goto LABEL_11;
  }
  if ( v4 != -2005270523 )
  {
LABEL_21:
    CD2DContext::TempDisableHardwareProtection((CD3DDevice *)((char *)this + 16));
    goto LABEL_11;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 68) + 312LL))(*((_QWORD *)this + 68));
  v8 = *((_DWORD *)this + 281);
  if ( v7 == -2005270480 )
  {
    if ( v8 )
      goto LABEL_21;
    *((_DWORD *)this + 281) = -2005270480;
    CD2DContext::TempDisableHardwareProtection((CD3DDevice *)((char *)this + 16));
LABEL_11:
    if ( v4 >= 0 )
      goto LABEL_12;
    goto LABEL_24;
  }
  if ( !v8 )
    *((_DWORD *)this + 281) = -2005270523;
LABEL_24:
  if ( *((_DWORD *)this + 281) )
    return 2291662989LL;
LABEL_12:
  v10 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v4, 1LL, &v10) )
  {
    v9 = v10;
    if ( v10 == -2003304307 )
    {
      if ( v4 >= 0 )
        v4 = -2003304307;
      if ( !*((_DWORD *)this + 281) )
        *((_DWORD *)this + 281) = v4;
    }
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB71u, 0LL);
  }
  return (unsigned int)v4;
}
