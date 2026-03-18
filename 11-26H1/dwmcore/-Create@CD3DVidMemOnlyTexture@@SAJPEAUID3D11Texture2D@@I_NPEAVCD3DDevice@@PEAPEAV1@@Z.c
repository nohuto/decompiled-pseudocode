/*
 * XREFs of ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1801BAC74
 * Callers:
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x1800FAB08 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1801D3550 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F6010 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800F7A8C (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1801BADC0 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::Create(
        struct ID3D11Texture2D *a1,
        unsigned int a2,
        __int64 a3,
        struct CD3DDevice *a4,
        struct CD3DVidMemOnlyTexture **a5)
{
  CD3DResource *v8; // rax
  __int64 v9; // rdx
  CD3DTexture *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx

  *a5 = 0LL;
  v8 = (CD3DResource *)operator new(0x100uLL);
  v10 = v8;
  if ( v8 )
  {
    LOBYTE(v9) = 1;
    CD3DResource::CD3DResource(v8, v9);
    *(_QWORD *)(v11 + 120) = 0LL;
    *(_QWORD *)v11 = &CD3DVidMemOnlyTexture::`vftable';
    *(_QWORD *)(v11 + 172) = 0LL;
    *(_DWORD *)(v11 + 180) = 0;
    *(_QWORD *)(v11 + 192) = 0LL;
    *(_QWORD *)(v11 + 200) = 0LL;
    *(_QWORD *)(v11 + 208) = 0LL;
    *(_QWORD *)(v11 + 216) = 0LL;
    *(_QWORD *)(v11 + 224) = 0LL;
    *(_QWORD *)(v11 + 232) = 0LL;
    *(_QWORD *)(v11 + 240) = 0LL;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 8));
    v12 = CD3DTexture::Init(v10, (struct CD3DDevice *)((char *)a4 + 1136), a1, a2);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x108u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xC8u, 0LL);
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v10);
    }
    else
    {
      *a5 = v10;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xC0u, 0LL);
  }
  return v13;
}
