/*
 * XREFs of ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x1802A3E80
 * Callers:
 *     ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x1802A38F8 (-Initialize@CCompSwapChain@@IEAAJXZ.c)
 *     ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A3B10 (-NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1801D0E54 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompSwapChain::ResetBackBuffer(CCompSwapChain *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rbx
  int DeviceTextureTarget; // eax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3 + 80LL))(
      v3,
      ((unsigned __int64)this + 48) & -(__int64)(this != 0LL));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    v12 = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v4 + 72LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v12);
    v6 = v5(v4, 0LL, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AB040, 2u, v6, 0x181u, 0LL);
    }
    else
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 11);
      v8 = (**v12)(v12, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, (char *)this + 88);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AB040, 2u, v8, 0x183u, 0LL);
      }
      else
      {
        v9 = *((_QWORD *)this + 7);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
        DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                                v9,
                                (__int64)v12,
                                *((_DWORD *)this + 28),
                                *((_DWORD *)this + 29),
                                *((_DWORD *)this + 32),
                                *((_DWORD *)this + 34),
                                1,
                                (unsigned __int64 *)v1);
        v7 = DeviceTextureTarget;
        if ( DeviceTextureTarget < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AB040, 2u, DeviceTextureTarget, 0x18Bu, 0LL);
        else
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v1 + 72LL))(
            *v1,
            ((unsigned __int64)this + 48) & -(__int64)(this != 0LL));
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
  }
  else
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AB040, 2u, -2003304307, 0x191u, 0LL);
  }
  return v7;
}
