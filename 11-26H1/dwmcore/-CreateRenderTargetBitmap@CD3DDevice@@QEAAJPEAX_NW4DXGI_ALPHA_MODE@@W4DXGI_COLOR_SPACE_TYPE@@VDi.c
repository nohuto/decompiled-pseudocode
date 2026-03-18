/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802992A0
 * Callers:
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180258680 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F7904 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAX_NPEAPEAUID3D11Texture2D@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18012452C (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        struct IRenderTargetBitmap **a8)
{
  unsigned int v11; // ebx
  int RenderTargetBitmap; // eax
  unsigned int v14; // [rsp+20h] [rbp-60h]
  struct ID3D11Texture2D *v15; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v16[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+70h] [rbp-10h]

  v15 = 0LL;
  *a8 = 0LL;
  if ( !*(_DWORD *)(a1 + 1124) )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v15);
    RenderTargetBitmap = CD3DDevice::OpenSharedTexture((__int64 **)a1, a2, 0, &v15);
    v11 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      v14 = 1222;
    }
    else
    {
      v17 = 0LL;
      v18 = 0;
      memset(v16, 0, sizeof(v16));
      ((void (__fastcall *)(struct ID3D11Texture2D *, _OWORD *))v15->lpVtbl->GetDesc)(v15, v16);
      RenderTargetBitmap = CD3DDevice::CreateRenderTargetBitmap(a1, (__int64 *)v15, a4, a5, a6, a7, a8);
      v11 = RenderTargetBitmap;
      if ( RenderTargetBitmap >= 0 )
        goto LABEL_8;
      v14 = 1232;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A26A8, 2u, RenderTargetBitmap, v14, 0LL);
    goto LABEL_8;
  }
  v11 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A26A8, 2u, -2003304307, 0x4C2u, 0LL);
LABEL_8:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  return v11;
}
