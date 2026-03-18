/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x1800F6C10
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ @ 0x1800F80F0 (-EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802AEA50 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800F51D4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x1800F7138 (-CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAA_NXZ @ 0x1800F72C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@detail.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(CDxHandleBitmapRealization *this)
{
  __int64 *v1; // r14
  int Device; // eax
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  __int64 v7; // r9
  CD3DDevice *v8; // rbx
  int D2DBitmap; // eax
  unsigned int v10; // ebp
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(char *); // rax
  char *v13; // rdx
  struct ID2DBitmapCacheSource *v14; // rdx
  CD3DDevice *v15; // [rsp+70h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 376);
  if ( *((_QWORD *)this + 47) )
    return 0LL;
  v15 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v15);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 264), &v15);
  v5 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x1A0u, 0LL);
    if ( v15 )
      CD3DDevice::Release(v15);
    return v5;
  }
  else
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
    v6 = *((_DWORD *)this + 26);
    v7 = 3LL;
    if ( v6 )
      v7 = v6;
    v8 = v15;
    D2DBitmap = CD3DDevice::CreateD2DBitmap(
                  v15,
                  *((_QWORD *)this + 32),
                  *((unsigned __int8 *)this + 392),
                  v7,
                  *((_DWORD *)this + 38),
                  *((_DWORD *)this + 74),
                  LODWORD(FLOAT_96_0),
                  LODWORD(FLOAT_96_0),
                  v1);
    v10 = D2DBitmap;
    if ( D2DBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DBitmap, 0x1A9u, 0LL);
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v15);
    }
    else
    {
      v11 = *v1;
      v12 = *(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 10) + 64LL);
      *((_BYTE *)this + 395) = (*(_DWORD *)(*v1 + 176) & 0x400000) == 0;
      *(_BYTE *)(v11 + 236) = v12((char *)this + 80);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::GetImpl'::`2'::impl)
        && (*((_BYTE *)this + 284) & 1) != 0 )
      {
        *(_BYTE *)(*v1 + 237) = 1;
      }
      v13 = (char *)this + 16;
      if ( !this )
        v13 = 0LL;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)*v1 + 72LL))(*v1, v13);
      v14 = (struct ID2DBitmapCacheSource *)(*v1 + 88);
      if ( !*v1 )
        v14 = 0LL;
      CD2DBitmapCache::InitializeCache(this, v14);
      if ( v8 )
        CD3DDevice::Release(v8);
    }
    return v10;
  }
}
