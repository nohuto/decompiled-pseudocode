/*
 * XREFs of ?OpenShared@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@PEAXIPEAPEAV1@@Z @ 0x1802B840C
 * Callers:
 *     ?OpenOnAdapter@CCrossAdapterTexture@@UEBAJU_LUID@@PEAPEAVICrossAdapterTexture@@@Z @ 0x1802B8290 (-OpenOnAdapter@CCrossAdapterTexture@@UEBAJU_LUID@@PEAPEAVICrossAdapterTexture@@@Z.c)
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

__int64 __fastcall CCrossAdapterTexture::OpenShared(__int64 **this, void *a2, int a3, struct CCrossAdapterTexture **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  CD3DResource *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  CD3DResourceManager *v13; // rdx
  struct CD3DResource *v14; // rdi
  int v15; // eax
  struct ID3D11Texture2D *v17[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CD3DResource *v19; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v17[0] = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v17);
  v8 = CD3DDevice::OpenSharedTexture(this, a2, 1, v17);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v19 = 0LL;
    v10 = (CD3DResource *)operator new(0xF0uLL);
    if ( v10 )
    {
      CD3DResource::CD3DResource(v10, 0LL);
      *(_QWORD *)(v11 + 136) = v12;
      *(_DWORD *)(v11 + 188) = a3;
      *(_DWORD *)(v11 + 192) = 3;
      *(_DWORD *)(v11 + 200) = -1;
      *(_QWORD *)(v11 + 208) = v12;
      *(_QWORD *)(v11 + 216) = v12;
      *(_QWORD *)(v11 + 224) = v12;
      *(_QWORD *)(v11 + 232) = v12;
      *(_QWORD *)v11 = &CCrossAdapterTexture::`vftable';
      *(_QWORD *)(v11 + 120) = &CCrossAdapterTexture::`vftable'{for `IDeviceResource'};
      *(_QWORD *)(v11 + 128) = &CSysmemTexture::`vftable'{for `IPixelFormat'};
    }
    else
    {
      v11 = 0LL;
    }
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)&v19, v11);
    v13 = (CD3DResourceManager *)(this + 142);
    v14 = v19;
    v15 = CDeviceTextureT<ICrossAdapterTexture>::Initialize(v19, v13, (struct ID3D11Resource *)v17[0]);
    v9 = v15;
    if ( v15 >= 0 )
    {
      v19 = 0LL;
      *a4 = v14;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\devicetexture.cpp",
        (const char *)(unsigned int)v15);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\devicetexture.cpp",
      (const char *)(unsigned int)v8);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v17);
  return v9;
}
