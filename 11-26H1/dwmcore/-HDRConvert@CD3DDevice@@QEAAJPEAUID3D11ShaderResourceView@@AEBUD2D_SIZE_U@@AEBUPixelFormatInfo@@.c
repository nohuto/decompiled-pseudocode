/*
 * XREFs of ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180105FD8
 * Callers:
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x180104FC0 (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800F97A4 (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18010115C (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180101DAC (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x180106A08 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180107384 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMil3DRect.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::HDRConvert(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        unsigned int a10,
        float a11,
        char a12,
        __int128 *a13)
{
  unsigned int v15; // r14d
  __int64 v16; // rdi
  __int64 v17; // rbx
  FLOAT y; // xmm1_4
  int v19; // edx
  __int64 v20; // rcx
  int CompositingPixelShaderNoRef; // eax
  unsigned int v22; // ebx
  int v23; // eax
  CSurfaceShaderComposer *v24; // rcx
  float v25; // xmm0_4
  int v26; // eax
  int updated; // eax
  __int64 v28; // r8
  __int64 v29; // rcx
  int v30; // eax
  __int16 v32; // [rsp+70h] [rbp-90h] BYREF
  char v33; // [rsp+72h] [rbp-8Eh]
  __int128 v34; // [rsp+80h] [rbp-80h] BYREF
  struct D2D_POINT_2F v35; // [rsp+90h] [rbp-70h] BYREF
  struct ID3D11PixelShader *v36; // [rsp+98h] [rbp-68h] BYREF
  __int128 *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v39[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-48h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  int v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D4h] [rbp-2Ch]
  __m128i v45; // [rsp+DCh] [rbp-24h]
  int v46; // [rsp+ECh] [rbp-14h]
  __m128i si128; // [rsp+F0h] [rbp-10h]
  __m128i v48; // [rsp+100h] [rbp+0h]
  __m128i v49; // [rsp+110h] [rbp+10h]
  __m128i v50; // [rsp+120h] [rbp+20h]
  __m128i v51; // [rsp+130h] [rbp+30h]
  _BYTE v52[64]; // [rsp+140h] [rbp+40h] BYREF
  int v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+190h] [rbp+90h] BYREF
  float v55; // [rsp+198h] [rbp+98h]
  float v56; // [rsp+19Ch] [rbp+9Ch]
  int v57; // [rsp+1A0h] [rbp+A0h]
  int v58; // [rsp+1A4h] [rbp+A4h]

  v40 = 0LL;
  v37 = a13;
  si128 = _mm_load_si128((const __m128i *)&_xmm_bf800000bf800000000000003f800000);
  v49 = _mm_load_si128((const __m128i *)&_xmm);
  v38 = a2;
  v51 = _mm_load_si128((const __m128i *)&_xmm);
  v36 = 0LL;
  v54 = 0LL;
  v57 = 0;
  v53 = 0;
  v32 = 257;
  v33 = 1;
  v39[0] = -1082130432;
  v39[1] = 1065353216;
  v41 = -1082130432;
  v42 = -1082130432;
  v43 = 0;
  v44 = 1065353216LL;
  v45 = _mm_load_si128((const __m128i *)&_xmm);
  v46 = 0;
  v48 = _mm_load_si128((const __m128i *)&_xmm);
  v50 = v45;
  CD3DDevice::CalcHDRConvertUVTransform((int)a9, a3, a5, a6, a7, (CMILMatrix *)v52);
  v15 = 0;
  do
  {
    v16 = 6 * v15 + 2;
    LODWORD(v34) = v39[v16];
    v17 = 6 * v15 + 3;
    DWORD1(v34) = v39[v17];
    v35 = 0LL;
    CMILMatrix::Transform((CMILMatrix *)v52, (const struct D2D_POINT_2F *)&v34, &v35, 1u);
    ++v15;
    y = v35.y;
    v39[v16] = LODWORD(v35.x);
    *(FLOAT *)&v39[v17] = y;
  }
  while ( v15 < 6 );
  if ( !a4 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v19 = *(_DWORD *)(a1 + 624);
  v20 = *(_QWORD *)(a1 + 1528);
  *(_QWORD *)&v34 = 1LL;
  *((_QWORD *)&v34 + 1) = a4;
  CompositingPixelShaderNoRef = CSurfaceShaderComposer::GetCompositingPixelShaderNoRef(v20, v19, &v34, a10, &v36);
  v22 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CompositingPixelShaderNoRef, 0x97Au, 0LL);
  }
  else
  {
    v23 = *a9;
    v24 = *(CSurfaceShaderComposer **)(a1 + 1528);
    v58 = 1065353216;
    v25 = (float)v23;
    v26 = a9[1];
    v55 = v25;
    v56 = (float)v26;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v24, a11);
    v22 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x980u, 0LL);
    }
    else
    {
      v29 = *(_QWORD *)(a1 + 1528);
      *((_QWORD *)&v34 + 1) = &v32;
      *(_QWORD *)&v34 = 1LL;
      v30 = CSurfaceShaderComposer::RunShader(
              v29,
              v39,
              v28,
              (__int64)&v38,
              1u,
              (float *)&v54,
              5u,
              (unsigned __int64 *)&v34,
              a12,
              a8,
              (__int64)v36,
              v37,
              1);
      v22 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x98Du, 0LL);
    }
  }
  return v22;
}
