/*
 * XREFs of ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1802864B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x1800643C8 (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18012452C (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x180206D80 (-ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualCapture::EnsureRenderTargets(CVisualCapture *this)
{
  __int64 v1; // rdi
  unsigned int v3; // esi
  int (__fastcall *v4)(__int64, __int64 *); // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  enum DXGI_COLOR_SPACE_TYPE *v7; // rax
  float v8; // xmm0_4
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *, __int64 *); // rsi
  int v11; // eax
  __int64 v12; // r14
  int v13; // esi
  unsigned int v14; // ebx
  __int64 *v15; // rax
  struct IRenderTargetBitmap *v16; // rdi
  __int64 v17; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v18; // r8
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // ebx
  unsigned int v22; // eax
  unsigned int v24; // [rsp+28h] [rbp-39h]
  __int64 v25; // [rsp+48h] [rbp-19h] BYREF
  struct IRenderTargetBitmap *v26; // [rsp+50h] [rbp-11h] BYREF
  __int64 v27; // [rsp+58h] [rbp-9h] BYREF
  __int64 v28; // [rsp+60h] [rbp-1h] BYREF
  int v29; // [rsp+68h] [rbp+7h]
  int v30; // [rsp+6Ch] [rbp+Bh]
  int v31; // [rsp+70h] [rbp+Fh]
  char v32; // [rsp+74h] [rbp+13h]
  __int16 v33; // [rsp+75h] [rbp+14h]
  char v34; // [rsp+77h] [rbp+16h]
  _QWORD v35[2]; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v36[16]; // [rsp+88h] [rbp+27h] BYREF

  v1 = *((_QWORD *)this + 300);
  v3 = -2003292412;
  if ( v1 )
  {
    v25 = 0LL;
    v4 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v1 + 72) + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v25);
    if ( v4(v1 + 72, &v25) < 0 )
    {
LABEL_19:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
      return v3;
    }
    v28 = 0LL;
    v5 = *((_QWORD *)this + 300);
    v27 = 0LL;
    v26 = 0LL;
    v6 = *(_QWORD *)(v5 + 96);
    if ( v6 )
      v28 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 80LL))(v6, v35);
    v30 = 0;
    v29 = -3;
    v7 = (enum DXGI_COLOR_SPACE_TYPE *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 24LL))(v25, v35);
    v8 = ValidateSDRBoost(*((float *)this + 604), v7);
    v9 = v25;
    v31 = LODWORD(v8);
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v25 + 112LL);
    wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v27);
    v11 = v10(v9, &v28, &v27);
    v3 = v11;
    if ( v11 < 0 )
    {
      v24 = 67;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v26);
      v13 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 24LL))(v25, v35) + 8);
      v14 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 24LL))(v25, v36) + 4);
      v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 120LL))(v27, 0LL);
      v11 = CD3DDevice::CreateRenderTargetBitmap(v12, v15, v14, v13, -3, v31, &v26);
      v3 = v11;
      if ( v11 >= 0 )
      {
        v16 = v26;
        *((_QWORD *)this + 15) = *(_QWORD *)(*(__int64 (__fastcall **)(char *, _QWORD *))(*((_QWORD *)v26 + 1) + 32LL))(
                                              (char *)v26 + 8,
                                              v35);
        COffScreenRenderTarget::CalcTreeBounds(this, v17, v18);
        v26 = 0LL;
        v19 = *((_DWORD *)this + 578);
        v35[0] = v16;
        v20 = v19 + 1;
        if ( v19 + 1 < v19 )
        {
          v3 = -2147024362;
          v22 = 183;
          v21 = -2147024362;
        }
        else
        {
          v21 = 0;
          if ( v20 <= *((_DWORD *)this + 577) )
          {
            *(_QWORD *)(*((_QWORD *)this + 286) + 8LL * v19) = v16;
            *((_DWORD *)this + 578) = v20;
LABEL_11:
            v3 = v21;
LABEL_18:
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
            goto LABEL_19;
          }
          v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2288, 8, 1, v35);
          v3 = v21;
          if ( v21 >= 0 )
            goto LABEL_11;
          v22 = 194;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, v22, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1528, 3u, v21, 0x51u, 0LL);
        goto LABEL_18;
      }
      v24 = 75;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1528, 3u, v11, v24, 0LL);
    goto LABEL_18;
  }
  return v3;
}
