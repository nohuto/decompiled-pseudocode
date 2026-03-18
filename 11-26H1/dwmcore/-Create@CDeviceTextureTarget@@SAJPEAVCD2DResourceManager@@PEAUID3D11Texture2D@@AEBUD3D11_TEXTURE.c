/*
 * XREFs of ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F5DE4
 * Callers:
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800F588C (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F680C (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18012452C (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1801D0E54 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F6010 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x1800F6130 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x1800F62F4 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 */

__int64 __fastcall CDeviceTextureTarget::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        char a8,
        unsigned __int64 *a9)
{
  _QWORD *v13; // rbx
  int v14; // edi
  unsigned int v15; // eax

  *a9 = 0LL;
  if ( (*(_BYTE *)(a3 + 32) & 0x20) != 0 )
  {
    v13 = MIDL_user_allocate(0x128uLL);
    if ( v13 )
    {
      CD2DBitmap::CD2DBitmap(v13, a1, 0LL, a2, a3, a4, a5, a6, 0);
      *v13 = &CDeviceTextureTarget::`vftable'{for `IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>'};
      v13[9] = &CDeviceTextureTarget::`vftable'{for `IDeviceResource'};
      v13[10] = &CDeviceTextureTarget::`vftable'{for `IPixelFormat'};
      v13[11] = &CDeviceTextureTarget::`vftable'{for `ID2DBitmapCacheSource'};
      v13[12] = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IBitmapUnlock'};
      v13[30] = &CDeviceTextureTarget::`vftable'{for `IDeviceResource's `IDeviceTexture'};
      v13[31] = &CDeviceTextureTarget::`vftable'{for `IPixelFormat's `IDeviceTexture'};
      v13[32] = &CDeviceTextureTarget::`vftable'{for `IDeviceResource's `IDeviceTarget'};
      v13[33] = &CDeviceTextureTarget::`vftable'{for `IPixelFormat's `IDeviceTarget'};
      v13[34] = 0LL;
      *((_BYTE *)v13 + 289) = a8;
      *((_DWORD *)v13 + 71) = a7;
      *((_DWORD *)v13 + 70) = 0;
      *((_BYTE *)v13 + 288) = 0;
      *((_WORD *)v13 + 145) = 1;
      *((_BYTE *)v13 + 292) = 0;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 1));
      v14 = CDeviceTextureTarget::Initialize((CDeviceTextureTarget *)v13);
      if ( v14 >= 0 )
      {
        *a9 = (unsigned __int64)(v13 + 30) & -(__int64)(v13 != 0LL);
        return (unsigned int)v14;
      }
      v15 = 43;
    }
    else
    {
      v13 = 0LL;
      v14 = -2147024882;
      v15 = 41;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v15, 0LL);
    if ( v13 )
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v13);
  }
  else
  {
    v14 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292287, 0x1Eu, 0LL);
  }
  return (unsigned int)v14;
}
