/*
 * XREFs of ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802A75A8
 * Callers:
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x1802A7830 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 *     ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x1802A7BF0 (-SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::EnsureTargetBitmap(CConversionSwapChain *this)
{
  __int64 *v1; // r14
  unsigned int v3; // ebx
  __int64 v4; // rbx
  const struct D2D_SIZE_U *v5; // rax
  int v6; // eax
  struct IRenderTargetBitmap *v7; // rbx
  __int64 (__fastcall *v8)(char *, __int64, _QWORD); // rdi
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  const char *v14; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+48h] [rbp-18h]
  struct IRenderTargetBitmap *v16; // [rsp+90h] [rbp+30h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+38h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  char v19; // [rsp+A8h] [rbp+48h] BYREF

  v1 = (__int64 *)((char *)this + 520);
  if ( *((_QWORD *)this + 65) )
  {
    return 0;
  }
  else
  {
    v4 = *((_QWORD *)this + 8);
    v16 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v16);
    v5 = (const struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 37) + 88LL))(
                                      *((_QWORD *)this + 37),
                                      &v19);
    v15 = 37;
    v14 = "Conversion intermediate target bitmap";
    v6 = CD3DDevice::CreateRenderTargetBitmap(
           v4,
           (const struct CResourceTag *)&v14,
           v5,
           (CConversionSwapChain *)((char *)this + 528),
           (CConversionSwapChain *)((char *)this + 104),
           0,
           &v16);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1C8u, 0LL);
    }
    else
    {
      v7 = v16;
      v17 = 0LL;
      v8 = *(__int64 (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)v16 + 1) + 112LL);
      wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v17);
      v9 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, const char **))(*(_QWORD *)v7 + 88LL))(v7, &v14);
      v10 = v8((char *)v7 + 8, v9, &v17);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1CCu, 0LL);
      }
      else
      {
        v18 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v18);
        v11 = (**v17)(v17, &GUID_77778ec0_8ef7_4222_bede_336213c916e3, &v18);
        v3 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1CFu, 0LL);
        }
        else
        {
          LOBYTE(v12) = 1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 224LL))(v18, v12);
          wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=(v1, (__int64 *)&v16);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  }
  return v3;
}
