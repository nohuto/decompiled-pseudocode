/*
 * XREFs of ?OpenShared@CDeviceTexture@@SAJPEAVCD3DDevice@@PEAX_NI2PEAPEAV1@@Z @ 0x1802B8594
 * Callers:
 *     ?EnsureTexture@CSwapChainRealization@@IEAAJXZ @ 0x1802ACF30 (-EnsureTexture@CSwapChainRealization@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F7904 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAX_NPEAPEAUID3D11Texture2D@@@Z.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800F7A8C (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Initialize@?$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802B7F64 (-Initialize@-$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11T.c)
 */

__int64 __fastcall CDeviceTexture::OpenShared(
        __int64 **this,
        void *a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        struct CDeviceTexture **a6)
{
  struct CDeviceTexture **v6; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  CD3DResource *v12; // rcx
  __int64 v13; // rcx
  CD3DResourceManager *v14; // rdx
  struct CDeviceTexture **v15; // rdi
  int v16; // eax
  struct ID3D11Texture2D *v18[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a6;
  v18[0] = 0LL;
  *a6 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v18);
  v9 = CD3DDevice::OpenSharedTexture(this, a2, 1, v18);
  v10 = v9;
  if ( v9 >= 0 )
  {
    a6 = 0LL;
    v12 = (CD3DResource *)operator new(0xF0uLL);
    if ( v12 )
    {
      LOBYTE(v11) = 1;
      CD3DResource::CD3DResource(v12, v11);
      *(_QWORD *)(v13 + 136) = 0LL;
      *(_DWORD *)(v13 + 188) = 0;
      *(_DWORD *)(v13 + 192) = 3;
      *(_DWORD *)(v13 + 200) = -1;
      *(_QWORD *)(v13 + 208) = 0LL;
      *(_QWORD *)(v13 + 216) = 0LL;
      *(_QWORD *)(v13 + 224) = 0LL;
      *(_QWORD *)(v13 + 232) = 0LL;
      *(_QWORD *)v13 = &CDeviceTexture::`vftable';
      *(_QWORD *)(v13 + 120) = &CDeviceTexture::`vftable'{for `IDeviceResource'};
      *(_QWORD *)(v13 + 128) = &CSysmemTexture::`vftable'{for `IPixelFormat'};
    }
    else
    {
      v13 = 0LL;
    }
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)&a6, v13);
    v14 = (CD3DResourceManager *)(this + 142);
    v15 = a6;
    v16 = CDeviceTextureT<ICrossAdapterTexture>::Initialize(
            (struct CD3DResource *)a6,
            v14,
            (struct ID3D11Resource *)v18[0]);
    v10 = v16;
    if ( v16 >= 0 )
    {
      a6 = 0LL;
      *v6 = (struct CDeviceTexture *)v15;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&a6);
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\devicetexture.cpp",
        (const char *)(unsigned int)v16);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&a6);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\devicetexture.cpp",
      (const char *)(unsigned int)v9);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v18);
  return v10;
}
