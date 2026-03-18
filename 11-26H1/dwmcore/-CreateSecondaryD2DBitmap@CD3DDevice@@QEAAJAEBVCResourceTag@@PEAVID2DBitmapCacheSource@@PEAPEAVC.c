/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1801306C8
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18012F084 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800F5AE8 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetDefaultDXGIColorSpaceForFormat@@YA?AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z @ 0x1800F7118 (-GetDefaultDXGIColorSpaceForFormat@@YA-AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAA_NXZ @ 0x1800F72C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@detail.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F7904 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAX_NPEAPEAUID3D11Texture2D@@@Z.c)
 *     ?GetCompatibleTextureFormat@CD3DDevice@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x180131048 (-GetCompatibleTextureFormat@CD3DDevice@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x180131AD0 (-Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802B0274 (-Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11T.c)
 *     ?Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@2AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802B046C (-Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateSecondaryD2DBitmap(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        struct ID2DBitmapCacheSource *a3,
        struct CSecondaryD2DBitmap **a4)
{
  __int64 v4; // rax
  char IsEnabled; // al
  int v10; // r14d
  struct ID3D11Texture2D *v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 (__fastcall *v14)(struct ID2DBitmapCacheSource *, struct _LUID *); // rax
  char v15; // al
  struct CD3DDevice *v16; // r10
  unsigned __int64 v17; // r8
  enum DXGI_FORMAT v18; // ecx
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // edi
  struct ID3D11Texture2D *v25; // rcx
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  int v28; // r9d
  float v29; // xmm2_4
  int v30; // eax
  int v31; // r14d
  int v32; // eax
  int v33; // r8d
  int DefaultDXGIColorSpaceForFormat; // ebx
  __int128 v35; // xmm0
  int v36; // r9d
  enum DXGI_FORMAT CompatibleTextureFormat; // ecx
  struct CD3DDevice *v38; // r8
  unsigned int v39; // ecx
  unsigned int v40; // r9d
  unsigned int v41; // edx
  float v42; // xmm2_4
  int v43; // eax
  unsigned int v44; // r8d
  unsigned int v45; // eax
  struct ID3D11Texture2D *v46; // r8
  int v47; // eax
  int Device; // eax
  __int64 (__fastcall *v49)(struct ID2DBitmapCacheSource *, struct CD3DDevice **); // rdi
  int v50; // eax
  int v51; // eax
  unsigned int v52; // [rsp+20h] [rbp-E0h]
  unsigned int v53; // [rsp+20h] [rbp-E0h]
  struct CD3DDevice *v54; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Texture2D *v55; // [rsp+58h] [rbp-A8h] BYREF
  struct ID3D11Texture2D *v56; // [rsp+60h] [rbp-A0h] BYREF
  int v57; // [rsp+68h] [rbp-98h]
  struct CD3DDevice *v58; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  float v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+84h] [rbp-7Ch]
  __int64 v62; // [rsp+8Ch] [rbp-74h]
  int v63; // [rsp+94h] [rbp-6Ch]
  struct ID2DBitmapCacheSource *v64; // [rsp+98h] [rbp-68h]
  struct _LUID v65; // [rsp+A8h] [rbp-58h] BYREF
  struct ID2DBitmapCacheSource *v66; // [rsp+B0h] [rbp-50h]
  enum DXGI_FORMAT v67[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v70; // [rsp+D4h] [rbp-2Ch]
  int v71; // [rsp+D8h] [rbp-28h]
  int v72; // [rsp+DCh] [rbp-24h]
  unsigned int v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E4h] [rbp-1Ch]
  int v75; // [rsp+ECh] [rbp-14h]
  __int64 v76; // [rsp+F0h] [rbp-10h]
  int v77; // [rsp+F8h] [rbp-8h]
  __int128 v78; // [rsp+100h] [rbp+0h]

  v4 = *(_QWORD *)a3;
  v64 = a3;
  (*(void (__fastcall **)(struct ID2DBitmapCacheSource *, enum DXGI_FORMAT *))(v4 + 24))(a3, v67);
  (*(void (__fastcall **)(struct ID2DBitmapCacheSource *, struct CD3DDevice **))(*(_QWORD *)a3 + 32LL))(a3, &v58);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::GetImpl'::`2'::impl);
  v10 = 0;
  v62 = 0LL;
  v63 = 0;
  if ( !IsEnabled )
  {
    v33 = (int)v58;
    DefaultDXGIColorSpaceForFormat = v68;
    v64 = *(struct ID2DBitmapCacheSource **)v67;
    v55 = 0LL;
    v35 = *(_OWORD *)a2;
    *a4 = 0LL;
    v78 = v35;
    if ( v33 && HIDWORD(v58) )
    {
      if ( !*((_DWORD *)this + 281) )
      {
        CompatibleTextureFormat = CD3DDevice::GetCompatibleTextureFormat(this, v67[0]);
        if ( CompatibleTextureFormat == v67[0] )
        {
          v40 = HIDWORD(v64);
          v39 = (unsigned int)v64;
        }
        else
        {
          DefaultDXGIColorSpaceForFormat = GetDefaultDXGIColorSpaceForFormat(CompatibleTextureFormat);
        }
        v41 = *((_DWORD *)this + 242);
        v59 = __PAIR64__(v40, v39);
        v60 = 96.0;
        v61 = 1119879168LL;
        v54 = v38;
        v42 = (float)(int)v41;
        if ( (unsigned int)v38 <= v41 )
        {
          v44 = (unsigned int)v54;
        }
        else
        {
          v43 = (int)v38;
          v44 = v41;
          v60 = (float)(v42 / (float)v43) * 96.0;
        }
        v45 = HIDWORD(v54);
        if ( HIDWORD(v54) > v41 )
        {
          v45 = v41;
          *(float *)&v61 = (float)(v42 / (float)SHIDWORD(v54)) * 96.0;
        }
        v73 = v39;
        v71 = 1;
        v72 = 1;
        v74 = 1LL;
        v69 = v44;
        v70 = v45;
        v75 = 0;
        v76 = 8LL;
        v77 = 0;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v55);
        v47 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&v69, v46, &v55);
        v24 = v47;
        if ( v47 < 0 )
        {
          v53 = 1594;
        }
        else
        {
          v47 = CSecondaryD2DBitmap::Create(
                  *((_QWORD *)this + 23),
                  v58,
                  v55,
                  &v69,
                  &v59,
                  DefaultDXGIColorSpaceForFormat,
                  -1,
                  a4);
          v24 = v47;
          if ( v47 >= 0 )
            goto LABEL_24;
          v53 = 1604;
        }
        v36 = v47;
        goto LABEL_52;
      }
      v36 = -2003304307;
      v53 = 1542;
    }
    else
    {
      v36 = -2147024809;
      v53 = 1539;
    }
    v24 = v36;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5648, 2u, v36, v53, 0LL);
    goto LABEL_24;
  }
  v57 = v68;
  v11 = 0LL;
  v66 = *(struct ID2DBitmapCacheSource **)v67;
  v12 = *(_OWORD *)a2;
  *a4 = 0LL;
  v13 = *(_QWORD *)a3;
  v55 = 0LL;
  v56 = 0LL;
  v78 = v12;
  v14 = *(__int64 (__fastcall **)(struct ID2DBitmapCacheSource *, struct _LUID *))(v13 + 88);
  v65 = 0LL;
  v15 = v14(a3, &v65);
  v16 = 0LL;
  if ( v15 )
  {
    v10 = 2;
    if ( *((_DWORD *)this + 374) == 1 )
    {
      v54 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v54);
      Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v65, &v54);
      v24 = Device;
      if ( Device < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5648, 2u, Device, 0x56Eu, 0LL);
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v54);
        goto LABEL_23;
      }
      v10 = (*((_DWORD *)v54 + 374) != 2) + 1;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v54);
      v16 = 0LL;
    }
  }
  v17 = (unsigned __int64)v58;
  if ( !(_DWORD)v58 || !HIDWORD(v58) )
  {
    v24 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5648, 2u, -2147024809, 0x57Bu, 0LL);
    v25 = v56;
    goto LABEL_17;
  }
  if ( *((_DWORD *)this + 281) )
  {
    v28 = -2003304307;
    v24 = -2003304307;
    v52 = 1406;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5648, 2u, v28, v52, 0LL);
LABEL_23:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v56);
LABEL_24:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v55);
    return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v24, 0);
  }
  if ( v10 || (v18 = CD3DDevice::GetCompatibleTextureFormat(this, v67[0]), v18 == v67[0]) )
  {
    v19 = HIDWORD(v66);
    v20 = (unsigned int)v66;
  }
  else
  {
    v57 = GetDefaultDXGIColorSpaceForFormat(v18);
  }
  v21 = *((_DWORD *)this + 242);
  v59 = __PAIR64__(v19, v20);
  v60 = 96.0;
  v61 = 1119879168LL;
  v54 = (struct CD3DDevice *)v17;
  if ( v10 )
  {
    v22 = HIDWORD(v54);
  }
  else
  {
    v29 = (float)(int)v21;
    if ( (unsigned int)v17 > v21 )
    {
      v32 = v17;
      v17 = v21;
      v60 = (float)(v29 / (float)v32) * 96.0;
    }
    else
    {
      v17 = (unsigned int)v54;
    }
    v22 = HIDWORD(v54);
    if ( HIDWORD(v54) > v21 )
    {
      v22 = v21;
      *(float *)&v61 = (float)(v29 / (float)SHIDWORD(v54)) * 96.0;
    }
  }
  v69 = v17;
  v70 = v22;
  v71 = 1;
  v72 = 1;
  v73 = v20;
  v74 = 1LL;
  v75 = (int)v16;
  v76 = 8LL;
  v77 = (int)v16;
  if ( v10 != 1 )
  {
    v23 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&v69, (struct ID3D11Texture2D *)v17, &v55);
    v16 = 0LL;
    v24 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5648, 2u, v23, 0x5BAu, 0LL);
      if ( v56 )
        ((void (__fastcall *)(struct ID3D11Texture2D *))v56->lpVtbl->Release)(v56);
      v25 = v55;
LABEL_17:
      if ( v25 )
      {
        lpVtbl = v25->lpVtbl;
LABEL_19:
        ((void (*)(void))lpVtbl->Release)();
        return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v24, 0);
      }
      return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v24, 0);
    }
    v11 = v55;
    if ( !v10 )
    {
      v30 = CSecondaryD2DBitmap::Create(*((_QWORD *)this + 23), v58, v55, &v69, &v59, v57, -1, a4);
      v24 = v30;
      if ( v30 >= 0 )
        goto LABEL_31;
      v52 = 1491;
      goto LABEL_73;
    }
  }
  v54 = v16;
  v49 = *(__int64 (__fastcall **)(struct ID2DBitmapCacheSource *, struct CD3DDevice **))(*(_QWORD *)v64 + 96LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v54,
    0LL);
  v50 = v49(v64, &v54);
  v24 = v50;
  if ( v50 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5648, 2u, v50, 0x5C1u, 0LL);
    goto LABEL_75;
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v56);
  v51 = CD3DDevice::OpenSharedTexture((__int64 **)this, v54, 1, &v56);
  v24 = v51;
  if ( v51 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5648, 2u, v51, 0x5C3u, 0LL);
LABEL_75:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v54);
    goto LABEL_23;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v54);
  v31 = v10 - 1;
  if ( v31 )
  {
    if ( v31 == 1 )
    {
      v30 = CSecondaryCrossAdapterIndirectBitmap::Create(*((_QWORD *)this + 23), v58, v56, v11, &v69, &v59, v57, -1, a4);
      v24 = v30;
      if ( v30 < 0 )
      {
        v52 = 1522;
        goto LABEL_73;
      }
    }
  }
  else
  {
    v30 = CSecondaryCrossAdapterDirectBitmap::Create(*((_QWORD *)this + 23), v58, v56, &v69, &v59, v57, -1, a4);
    v24 = v30;
    if ( v30 < 0 )
    {
      v52 = 1506;
LABEL_73:
      v28 = v30;
      goto LABEL_22;
    }
  }
LABEL_31:
  if ( v56 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v56->lpVtbl->Release)(v56);
  if ( v11 )
  {
    lpVtbl = v11->lpVtbl;
    goto LABEL_19;
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v24, 0);
}
