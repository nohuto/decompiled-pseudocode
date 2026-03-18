/*
 * XREFs of ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x180101734
 * Callers:
 *     ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180102210 (-RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18010115C (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180101B88 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z @ 0x180101C78 (-FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z.c)
 *     ?FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x180102004 (-FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResampleLayer::RenderXBR(
        CResampleLayer *this,
        struct CSurfaceShaderComposer *a2,
        struct ID3D11RenderTargetView *a3,
        char a4,
        const struct D3D11_VIEWPORT *a5)
{
  _QWORD *v6; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(_QWORD *, __int64, __int64 *); // rbx
  __int64 v13; // rax
  int SurfacePixelShaderNoRef; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r8
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  int v22; // eax
  _QWORD *v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 (__fastcall *v26)(_QWORD *, __int64, __int64 *); // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  float v29; // xmm0_4
  unsigned int v30; // ebx
  float v31; // xmm0_4
  __int64 v32; // r8
  int v33; // eax
  __int64 v35; // rdx
  void (*v36)(void); // rax
  __int64 v37; // rdx
  __int16 v38; // [rsp+70h] [rbp-61h] BYREF
  char v39; // [rsp+72h] [rbp-5Fh]
  __int64 v40; // [rsp+78h] [rbp-59h] BYREF
  __int64 v41; // [rsp+80h] [rbp-51h] BYREF
  __int16 v42; // [rsp+88h] [rbp-49h] BYREF
  char v43; // [rsp+8Ah] [rbp-47h]
  __int16 v44; // [rsp+8Bh] [rbp-46h]
  char v45; // [rsp+8Dh] [rbp-44h]
  __int64 v46; // [rsp+90h] [rbp-41h] BYREF
  __int64 v47; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int64 v48; // [rsp+A0h] [rbp-31h] BYREF
  __int16 *v49; // [rsp+A8h] [rbp-29h]
  _QWORD v50[2]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-9h] BYREF
  unsigned __int32 v52; // [rsp+D0h] [rbp-1h]
  unsigned __int32 v53; // [rsp+D4h] [rbp+3h]
  int v54; // [rsp+D8h] [rbp+7h]
  int v55; // [rsp+DCh] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v6 = (_QWORD *)*((_QWORD *)this + 1);
  v38 = 256;
  v39 = 1;
  v10 = v6 + 1;
  v11 = v6[1];
  v40 = 0LL;
  v12 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(v11 + 104);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64 *))(*v6 + 88LL))(v6, &v48);
  SurfacePixelShaderNoRef = v12(v10, v13, &v40);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v35 = 383LL;
    goto LABEL_15;
  }
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 128LL))(v40);
  v16 = *((_QWORD *)this + 16);
  v47 = v15;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 144LL))(v16);
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v17 + 16) + 176LL))(v17 + 16);
  SurfacePixelShaderNoRef = FillXBRPass1Buffer(a2, *((_DWORD *)this + 6), *((_DWORD *)this + 7));
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v35 = 392LL;
    goto LABEL_15;
  }
  v46 = 0LL;
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 4LL, &v46);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v35 = 396LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)SurfacePixelShaderNoRef);
    if ( !v40 )
      return (unsigned int)SurfacePixelShaderNoRef;
    v36 = *(void (**)(void))(*(_QWORD *)v40 + 16LL);
LABEL_17:
    v36();
    return (unsigned int)SurfacePixelShaderNoRef;
  }
  v20 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v21 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v49 = &v38;
  v54 = 0;
  v51 = 0LL;
  v48 = 1LL;
  v55 = 1065353216;
  v52 = _mm_cvtepi32_ps(v20).m128_u32[0];
  v53 = _mm_cvtepi32_ps(v21).m128_u32[0];
  v22 = CSurfaceShaderComposer::RunShader(
          (__int64)a2,
          xmmword_1802F4440,
          v19,
          (__int64)&v47,
          1u,
          (float *)&v51,
          5u,
          &v48,
          a4,
          v18,
          v46,
          0LL,
          0);
  SurfacePixelShaderNoRef = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x189,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\surfaceshadercomposer.cpp",
      (const char *)(unsigned int)v22);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)SurfacePixelShaderNoRef);
LABEL_30:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v40);
    return (unsigned int)SurfacePixelShaderNoRef;
  }
  v23 = (_QWORD *)*((_QWORD *)this + 16);
  v24 = v23 + 1;
  v25 = v23[1];
  v41 = 0LL;
  v26 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(v25 + 104);
  v27 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64 *))(*v23 + 88LL))(v23, &v48);
  SurfacePixelShaderNoRef = v26(v24, v27, &v41);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v37 = 418LL;
    goto LABEL_21;
  }
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 128LL))(v41);
  v29 = (float)*((int *)this + 7);
  v50[0] = v28;
  v50[1] = v47;
  v30 = (int)floorf_0((float)(v29 * *((float *)this + 35)) + 0.5);
  v31 = floorf_0((float)((float)*((int *)this + 6) * *((float *)this + 34)) + 0.5);
  SurfacePixelShaderNoRef = FillXBRPass2Buffer(a2, *((_DWORD *)this + 6), *((_DWORD *)this + 7), (int)v31, v30);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v37 = 432LL;
    goto LABEL_21;
  }
  v46 = 0LL;
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 5LL, &v46);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v37 = 436LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)SurfacePixelShaderNoRef);
    if ( v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    if ( !v40 )
      return (unsigned int)SurfacePixelShaderNoRef;
    v36 = *(void (**)(void))(*(_QWORD *)v40 + 16LL);
    goto LABEL_17;
  }
  v43 = v39;
  v45 = v39;
  v49 = &v42;
  v42 = v38;
  v44 = v38;
  v48 = 2LL;
  v33 = CSurfaceShaderComposer::RunShader(
          (__int64)a2,
          xmmword_1802F4440,
          v32,
          (__int64)v50,
          2u,
          &a5->TopLeftX,
          0,
          &v48,
          a4,
          (__int64)a3,
          v46,
          0LL,
          0);
  SurfacePixelShaderNoRef = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x189,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\surfaceshadercomposer.cpp",
      (const char *)(unsigned int)v33);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)SurfacePixelShaderNoRef);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v41);
    goto LABEL_30;
  }
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  return 0LL;
}
