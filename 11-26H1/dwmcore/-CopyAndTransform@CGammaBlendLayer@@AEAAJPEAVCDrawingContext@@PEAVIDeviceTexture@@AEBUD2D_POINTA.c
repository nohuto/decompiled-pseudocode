/*
 * XREFs of ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTANDSIZE_L@@2W4SurfaceShaderType@@@Z @ 0x180250B7C
 * Callers:
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802509A0 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180251070 (-RenderLayer@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18010115C (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180101B88 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180101DAC (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180102580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x180251040 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGammaBlendLayer::CopyAndTransform(
        __int64 a1,
        CDrawingContext *a2,
        __int64 *a3,
        int *a4,
        __int64 a5,
        unsigned int a6)
{
  CSurfaceShaderComposer *v9; // r15
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rax
  __m128i v13; // xmm4
  float v14; // xmm2_4
  int v15; // eax
  float v16; // xmm1_4
  int SurfacePixelShaderNoRef; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  char v22; // al
  __int64 v23; // r8
  unsigned int v25; // [rsp+20h] [rbp-E0h]
  __int16 v26; // [rsp+70h] [rbp-90h] BYREF
  char v27; // [rsp+72h] [rbp-8Eh]
  int v28; // [rsp+78h] [rbp-88h] BYREF
  int v29; // [rsp+7Ch] [rbp-84h]
  __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  __int128 v31; // [rsp+90h] [rbp-70h] BYREF
  float v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A4h] [rbp-5Ch]
  int v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+ACh] [rbp-54h]
  float v36; // [rsp+B0h] [rbp-50h]
  float v37; // [rsp+B4h] [rbp-4Ch]
  float v38; // [rsp+B8h] [rbp-48h]
  float v39; // [rsp+BCh] [rbp-44h]
  int v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C4h] [rbp-3Ch]
  float v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  float v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D4h] [rbp-2Ch]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  float v48; // [rsp+E0h] [rbp-20h]
  float v49; // [rsp+E4h] [rbp-1Ch]
  float v50; // [rsp+E8h] [rbp-18h]
  float v51; // [rsp+ECh] [rbp-14h]
  int v52; // [rsp+F0h] [rbp-10h]
  int v53; // [rsp+F4h] [rbp-Ch]
  float v54; // [rsp+F8h] [rbp-8h]
  float v55; // [rsp+FCh] [rbp-4h]
  float v56; // [rsp+100h] [rbp+0h]
  float v57; // [rsp+104h] [rbp+4h]
  int v58; // [rsp+108h] [rbp+8h]
  int v59; // [rsp+10Ch] [rbp+Ch]
  float v60; // [rsp+110h] [rbp+10h]
  int v61; // [rsp+114h] [rbp+14h]
  float v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+11Ch] [rbp+1Ch]
  __int64 v64; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v65[2]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v66; // [rsp+138h] [rbp+38h] BYREF
  __int64 v67; // [rsp+148h] [rbp+48h]

  v9 = *(CSurfaceShaderComposer **)((*(__int64 (__fastcall **)(__int64 *))(*a3 + 40))(a3) + 1528);
  v10 = 0LL;
  v67 = 0LL;
  v26 = 256;
  v27 = 1;
  v66 = 0LL;
  if ( !v9 )
  {
    v11 = -2005270524;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2005270524, 0x8Cu, 0LL);
    return v11;
  }
  do
  {
    *((float *)&v66 + v10) = (float)*(int *)(a5 + 4 * v10);
    ++v10;
  }
  while ( v10 < 4 );
  v12 = *a3;
  HIDWORD(v67) = 1065353216;
  (*(void (__fastcall **)(__int64 *, int *))(v12 + 88))(a3, &v28);
  v13 = _mm_cvtsi32_si128(a4[1]);
  v14 = (float)*a4;
  *(_QWORD *)&v31 = 0x3F800000BF800000LL;
  v34 = -1082130432;
  v35 = -1082130432;
  v40 = 1065353216;
  v41 = 1065353216;
  v46 = -1082130432;
  v15 = *a4 + a4[2];
  v47 = -1082130432;
  v52 = 1065353216;
  v53 = -1082130432;
  v58 = 1065353216;
  v59 = 1065353216;
  v16 = (float)(a4[1] + a4[3]);
  *((float *)&v31 + 2) = v14 / (float)v28;
  *((float *)&v31 + 3) = _mm_cvtepi32_ps(v13).m128_f32[0] / (float)v29;
  v37 = v16 / (float)v29;
  v39 = v37;
  v49 = v37;
  v51 = v37;
  v55 = v37;
  v57 = v37;
  v32 = *((float *)&v31 + 2);
  v33 = HIDWORD(v31);
  v36 = *((float *)&v31 + 2);
  v38 = *((float *)&v31 + 2);
  v42 = (float)v15 / (float)v28;
  v43 = HIDWORD(v31);
  v44 = v42;
  v45 = HIDWORD(v31);
  v48 = *((float *)&v31 + 2);
  v50 = *((float *)&v31 + 2);
  v54 = v42;
  v56 = v42;
  v60 = v42;
  v61 = HIDWORD(v31);
  v62 = v42;
  v63 = HIDWORD(v31);
  SurfacePixelShaderNoRef = CDrawingContext::FlushD2D(a2);
  v11 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v25 = 176;
    goto LABEL_14;
  }
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(__int64 *, unsigned __int64))(*a3 + 112))(
      a3,
      ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL));
  v30 = 0LL;
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef((__int64)v9, a6, &v30);
  v11 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v25 = 185;
    goto LABEL_14;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)a2 + 2) + 16LL))((_QWORD *)a2 + 2);
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v9, *(float *)(v18 + 16));
  v11 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v25 = 187;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SurfacePixelShaderNoRef, v25, 0LL);
    return v11;
  }
  v19 = (*(__int64 (__fastcall **)(__int64 *))(*a3 + 128))(a3);
  v20 = *((_QWORD *)a2 + 3);
  v64 = v19;
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 176LL))(v20);
  v22 = (*(__int64 (__fastcall **)(__int64 *))(*a3 + 56))(a3);
  v65[1] = (unsigned __int64)&v26;
  v65[0] = 1LL;
  CSurfaceShaderComposer::RunShader(
    (__int64)v9,
    &v31,
    v23,
    (__int64)&v64,
    1u,
    (float *)&v66,
    0,
    v65,
    v22,
    v21,
    v30,
    0LL,
    0);
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  return v11;
}
