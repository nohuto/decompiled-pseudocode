/*
 * XREFs of ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180123968
 * Callers:
 *     ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x180123640 (-ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ.c)
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180123760 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x1800643C8 (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800E6DE8 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F7904 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAX_NPEAPEAUID3D11Texture2D@@@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAUIDXGIResource@@@Z @ 0x180122C50 (--$_Emplace_reallocate@AEAPEAUIDXGIResource@@@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returnc.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180132A70 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x180133300 (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z @ 0x1801D01B8 (-CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801DC480 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@AEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801FCBB4 (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::EnsureResources(CCaptureRenderTarget *this, struct CD3DDevice *a2)
{
  int v2; // ebx
  struct ID3D11Fence **v3; // rsi
  __int64 i; // r14
  __int64 v7; // r15
  int v9; // eax
  enum DXGI_FORMAT v10; // edx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  const char **v15; // rdx
  char *v16; // rcx
  unsigned __int64 v17; // r8
  int Fence; // eax
  int updated; // eax
  __int64 v20; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v21; // r8
  bool v22; // zf
  unsigned int v23; // [rsp+30h] [rbp-49h] BYREF
  struct ID3D11Texture2D *v24; // [rsp+38h] [rbp-41h] BYREF
  __int64 v25; // [rsp+40h] [rbp-39h] BYREF
  const char *v26; // [rsp+48h] [rbp-31h] BYREF
  const char *v27; // [rsp+50h] [rbp-29h] BYREF
  int v28; // [rsp+58h] [rbp-21h]
  __int128 v29; // [rsp+60h] [rbp-19h] BYREF
  DXGI_FORMAT v30[4]; // [rsp+70h] [rbp-9h]
  __int64 v31; // [rsp+80h] [rbp+7h]
  int v32; // [rsp+88h] [rbp+Fh]

  v2 = 0;
  v3 = (struct ID3D11Fence **)((char *)this + 2664);
  v23 = 0;
  if ( !*((_QWORD *)this + 333) )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 333);
    v28 = 18;
    v27 = "CaptureRenderFence";
    Fence = CD3DDevice::CreateFence(a2, (const struct CResourceTag *)&v27, v17, v3);
    v23 = Fence;
    v2 = Fence;
    if ( Fence < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Fence, 0x216u, 0LL);
      goto LABEL_4;
    }
    *((_QWORD *)this + 334) = 0LL;
  }
  for ( i = (__int64)(*((_QWORD *)this + 340) - *((_QWORD *)this + 339)) >> 3; ; LODWORD(i) = i + 1 )
  {
    v7 = *((_QWORD *)this + 342);
    if ( (unsigned int)i >= (unsigned __int64)((*((_QWORD *)this + 343) - v7) >> 3) )
      goto LABEL_4;
    v24 = 0LL;
    v9 = CD3DDevice::OpenSharedTexture((__int64 **)a2, *(void **)(v7 + 8LL * (unsigned int)i), 1, &v24);
    v23 = v9;
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x227u, 0LL);
      goto LABEL_43;
    }
    v31 = 0LL;
    v32 = 0;
    v29 = 0LL;
    *(_OWORD *)v30 = 0LL;
    ((void (__fastcall *)(struct ID3D11Texture2D *, __int128 *))v24->lpVtbl->GetDesc)(v24, &v29);
    if ( !IsValidPixelFormat(v30[0]) )
    {
      CCaptureRenderTarget::ResetBuffers(this);
      goto LABEL_43;
    }
    if ( *((_QWORD *)this + 340) == *((_QWORD *)this + 339) )
    {
      updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v10);
      v23 = updated;
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x239u, 0LL);
        goto LABEL_43;
      }
      if ( !*((_BYTE *)this + 2590) )
      {
        *((_QWORD *)this + 15) = v29;
        COffScreenRenderTarget::CalcTreeBounds(this, v20, v21);
      }
      v22 = v30[0] == DXGI_FORMAT_NV12;
      *((_BYTE *)this + 2591) = HIDWORD(v29) > 1;
      *((_BYTE *)this + 2593) = v22;
    }
    v25 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v24->lpVtbl->QueryInterface)(
            v24,
            &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
            &v25);
    v23 = v11;
    v2 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x24Eu, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
LABEL_43:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
      goto LABEL_4;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 336) + 48LL))(
            *((_QWORD *)this + 336),
            0LL,
            0LL,
            *(_QWORD *)(v7 + 8LL * (unsigned int)i),
            *((_QWORD *)this + 300));
    v23 = v12;
    v2 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x254u, 0LL);
      goto LABEL_13;
    }
    if ( *((_QWORD *)this + 340) == *((_QWORD *)this + 341) )
    {
      std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<IDXGIResource * &>(
        (__int64 **)this + 339,
        *((__int64 **)this + 340),
        &v25);
    }
    else
    {
      wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
        *((_QWORD **)this + 340),
        v25);
      *((_QWORD *)this + 340) += 8LL;
    }
    v13 = *((_QWORD *)this + 336);
    v26 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, const char **))(*(_QWORD *)v13 + 64LL))(
            v13,
            *(_QWORD *)(v7 + 8LL * (unsigned int)i),
            &v26);
    v23 = v14;
    v2 = v14;
    if ( v14 < 0 )
      break;
    v15 = (const char **)*((_QWORD *)this + 346);
    v27 = v26;
    if ( v15 == *((const char ***)this + 347) )
    {
      std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
        (char *)this + 2760,
        v15,
        &v27);
      v16 = (char *)v27;
    }
    else
    {
      *v15 = v26;
      v16 = 0LL;
      *((_QWORD *)this + 346) += 8LL;
    }
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v16);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v24 )
      ((void (__fastcall *)(struct ID3D11Texture2D *))v24->lpVtbl->Release)(v24);
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x25Bu, 0LL);
LABEL_13:
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v24 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v24->lpVtbl->Release)(v24);
LABEL_4:
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v2, 0, &v23);
    CCaptureRenderTarget::ReleaseRenderingResources(this);
    return v23;
  }
  return (unsigned int)v2;
}
