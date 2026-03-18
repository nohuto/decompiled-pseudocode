/*
 * XREFs of ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1802513A4
 * Callers:
 *     ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180102210 (-RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180101B88 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x180101D14 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18025116C (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1802512D4 (-FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResampleLayer::RenderLanczos(
        CResampleLayer *this,
        struct CSurfaceShaderComposer *a2,
        struct ID3D11RenderTargetView *a3,
        char a4,
        struct D3D11_VIEWPORT *a5)
{
  struct D3D11_VIEWPORT *v5; // r15
  signed int v9; // ebx
  int v10; // ecx
  bool v11; // al
  int v12; // r8d
  signed int v13; // edx
  int SurfacePixelShaderNoRef; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64, struct D3D11_VIEWPORT **); // rbx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  char v23; // al
  __int64 v25; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v26[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v28; // [rsp+B0h] [rbp+30h] BYREF
  __int16 v29; // [rsp+C8h] [rbp+48h] BYREF
  char v30; // [rsp+CAh] [rbp+4Ah]

  LOBYTE(v29) = a4;
  v5 = a5;
  v9 = (int)floorf_0(a5->Width + 0.5);
  v10 = (int)floorf_0(v5->Height + 0.5);
  v28 = 0LL;
  v11 = *((float *)this + 34) >= 1.0 && *((float *)this + 35) >= 1.0;
  v12 = *((_DWORD *)this + 7);
  v13 = *((_DWORD *)this + 6);
  if ( !v11 )
  {
    SurfacePixelShaderNoRef = ComputeLanczosKernel(a2, v13, v12, v9, v10);
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v15 = 323LL;
      goto LABEL_8;
    }
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef((__int64)a2, 0, &v28);
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v15 = 326LL;
      goto LABEL_8;
    }
    goto LABEL_15;
  }
  SurfacePixelShaderNoRef = FillLanczosUpBuffer(a2, v13, v12, v9, v10);
  if ( SurfacePixelShaderNoRef >= 0 )
  {
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef((__int64)a2, 1u, &v28);
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v15 = 314LL;
      goto LABEL_8;
    }
LABEL_15:
    v16 = *((_QWORD *)this + 1);
    v29 = 256;
    v30 = 1;
    a5 = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64, __int64, struct D3D11_VIEWPORT **))(*(_QWORD *)(v16 + 8) + 112LL);
    wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&a5);
    v18 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 1) + 88LL))(
            *((_QWORD *)this + 1),
            v26);
    v19 = v17(v16 + 8, v18, &a5);
    SurfacePixelShaderNoRef = v19;
    if ( v19 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(struct D3D11_VIEWPORT *))(*(_QWORD *)&a5->TopLeftX + 128LL))(a5);
      v22 = *((_QWORD *)this + 1);
      v25 = v21;
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 56LL))(v22);
      v26[1] = (unsigned __int64)&v29;
      v26[0] = 1LL;
      v19 = CSurfaceShaderComposer::RunShader(
              (__int64)a2,
              (__int64)&v25,
              1LL,
              &v5->TopLeftX,
              0,
              v26,
              v23,
              (__int64)a3,
              v28);
      SurfacePixelShaderNoRef = v19;
      if ( v19 >= 0 )
      {
        SurfacePixelShaderNoRef = 0;
        goto LABEL_21;
      }
      v20 = 348LL;
    }
    else
    {
      v20 = 337LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)v19);
LABEL_21:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&a5);
    return (unsigned int)SurfacePixelShaderNoRef;
  }
  v15 = 311LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
    (const char *)(unsigned int)SurfacePixelShaderNoRef);
  return (unsigned int)SurfacePixelShaderNoRef;
}
