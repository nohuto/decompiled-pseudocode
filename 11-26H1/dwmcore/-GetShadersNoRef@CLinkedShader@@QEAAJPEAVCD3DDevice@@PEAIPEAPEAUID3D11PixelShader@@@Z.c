/*
 * XREFs of ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800F9B80
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800F97A4 (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800F9FB0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800F82B4 (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$emplace@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$basic_iterator@$$CBV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180144EC4 (--$emplace@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@V-$.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180215DF4 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinkedShader::GetShadersNoRef(
        CLinkedShader *this,
        struct CD3DDevice *a2,
        unsigned int *a3,
        struct ID3D11PixelShader **a4)
{
  unsigned int v4; // r15d
  __int64 i; // rbx
  __int64 v10; // rcx
  struct CD3DPixelShader *v11; // rbx
  int v13; // eax
  CDeviceManager *v14; // rcx
  int DefaultDevice; // eax
  int v16; // eax
  struct CD3DPixelShader *v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-38h] BYREF
  struct CD3DDevice *v20; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v10 = *((_QWORD *)this + 6);
    if ( (unsigned int)i >= (unsigned __int64)((*((_QWORD *)this + 7) - v10) >> 3) )
      goto LABEL_8;
    if ( !a2
      || a2 == (struct CD3DDevice *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 8 * i) + 40LL))(*(_QWORD *)(v10 + 8 * i)) )
    {
      break;
    }
  }
  v11 = *(struct CD3DPixelShader **)(8 * i + *((_QWORD *)this + 6));
  if ( v11 )
  {
LABEL_6:
    *a3 = *((_DWORD *)this + 6);
    *a4 = (struct ID3D11PixelShader *)*((_QWORD *)v11 + 15);
    return v4;
  }
LABEL_8:
  v17 = 0LL;
  if ( a2 )
  {
    v13 = CLinkedShader::CreateResource(*((CLinkedShader **)this + 5), a2, &v17);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x52u, 0LL);
      if ( v17 )
        (*(void (__fastcall **)(struct CD3DPixelShader *))(*(_QWORD *)v17 + 16LL))(v17);
      goto LABEL_12;
    }
LABEL_17:
    v11 = v17;
    (*(void (__fastcall **)(struct CD3DPixelShader *, char *))(*(_QWORD *)v17 + 72LL))(v17, (char *)this + 32);
    v17 = (struct CD3DPixelShader *)*((_QWORD *)this + 7);
    v18 = 0LL;
    v20 = v11;
    detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::emplace<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>(
      (char *)this + 48,
      v19,
      &v17,
      &v20);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
    goto LABEL_6;
  }
  v20 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v20);
  DefaultDevice = CDeviceManager::GetDefaultDevice(v14, &v20);
  v4 = DefaultDevice;
  if ( DefaultDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
  }
  else
  {
    v16 = CLinkedShader::CreateResource(*((CLinkedShader **)this + 5), v20, &v17);
    v4 = v16;
    if ( v16 >= 0 )
    {
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v20);
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x4Eu, 0LL);
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
LABEL_12:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x11u, 0LL);
  return v4;
}
