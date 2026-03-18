/*
 * XREFs of ?EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AB794
 * Callers:
 *     ?GetDeviceTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEBV?$shared_ptr@VCRegion@@@std@@PEAPEAVIDeviceTarget@@@Z @ 0x1802ABB30 (-GetDeviceTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEBV-$shared_ptr@VCRegion@@@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1801D0E54 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRenderTarget(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  char *v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  int *v6; // rax
  int v7; // edi
  int v8; // ebx
  __int64 v9; // rax
  int DeviceTextureTarget; // eax
  char v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = (char *)this + 328;
  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 41) + 24LL))((char *)this + 328);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0xCFu, 0LL);
  }
  else if ( !*((_QWORD *)this + 51) )
  {
    v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 40LL))(v1);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 51);
    v6 = (int *)(*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 10) + 56LL))((char *)this + 80, &v12);
    v7 = *((_DWORD *)this + 38);
    v8 = *v6;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 47) + 72LL) + 120LL))(
           *((_QWORD *)this + 47) + 72LL,
           0LL);
    DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(v5, v9, 3u, v7, v8, 0, 0, (unsigned __int64 *)this + 51);
    v4 = DeviceTextureTarget;
    if ( DeviceTextureTarget < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DeviceTextureTarget, 0xDBu, 0LL);
  }
  return v4;
}
