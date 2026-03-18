/*
 * XREFs of ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18012FFC8
 * Callers:
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18012F9DC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800F97A4 (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18010115C (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180101DAC (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x180106A08 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180107384 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMil3DRect.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDevice::HDRConvertWithFakeOverlay(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int *a5,
        __int64 *a6,
        unsigned int *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        int *a11,
        unsigned int a12,
        float a13,
        char a14,
        __int128 *a15)
{
  int v15; // eax
  __int64 v17; // xmm0_8
  unsigned int i; // esi
  int v19; // ebx
  int v20; // edx
  __int64 v21; // rcx
  int CompositingPixelShaderNoRef; // eax
  unsigned int v23; // ebx
  int v24; // eax
  CSurfaceShaderComposer *v25; // rcx
  float v26; // xmm0_4
  int v27; // eax
  int updated; // eax
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // eax
  __int16 v33; // [rsp+70h] [rbp-90h] BYREF
  char v34; // [rsp+72h] [rbp-8Eh]
  __int128 v35; // [rsp+80h] [rbp-80h] BYREF
  struct D2D_POINT_2F v36; // [rsp+90h] [rbp-70h] BYREF
  struct ID3D11PixelShader *v37; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v38[2]; // [rsp+A0h] [rbp-60h] BYREF
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
  __int64 v59; // [rsp+1A8h] [rbp+A8h] BYREF
  int v60; // [rsp+1B0h] [rbp+B0h]
  __int64 v61; // [rsp+1B4h] [rbp+B4h]
  int v62; // [rsp+1BCh] [rbp+BCh]

  v15 = *((_DWORD *)a3 + 2);
  v40 = 0LL;
  v60 = v15;
  si128 = _mm_load_si128((const __m128i *)&_xmm_bf800000bf800000000000003f800000);
  v49 = _mm_load_si128((const __m128i *)&_xmm);
  v51 = _mm_load_si128((const __m128i *)&_xmm);
  v59 = *a3;
  v17 = *a6;
  v62 = *((_DWORD *)a6 + 2);
  v38[0] = a2;
  v38[1] = a4;
  v37 = 0LL;
  v54 = 0LL;
  v57 = 0;
  v53 = 0;
  v33 = 257;
  v34 = 1;
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
  v61 = v17;
  CD3DDevice::CalcHDRConvertUVTransform(a11, a5, a7, a8, a9, (CMILMatrix *)v52);
  for ( i = 0; i < 6; ++i )
  {
    v19 = 6 * i;
    LODWORD(v35) = v39[6 * i + 2];
    DWORD1(v35) = v39[6 * i + 3];
    v36 = 0LL;
    CMILMatrix::Transform((CMILMatrix *)v52, (const struct D2D_POINT_2F *)&v35, &v36, 1);
    v39[v19 + 4] = LODWORD(v36.x);
    v39[v19 + 5] = LODWORD(v36.y);
  }
  v20 = *(_DWORD *)(a1 + 624);
  v21 = *(_QWORD *)(a1 + 1528);
  *((_QWORD *)&v35 + 1) = &v59;
  *(_QWORD *)&v35 = 2LL;
  CompositingPixelShaderNoRef = CSurfaceShaderComposer::GetCompositingPixelShaderNoRef(v21, v20, &v35, a12, &v37);
  v23 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CompositingPixelShaderNoRef, 0x9E0u, 0LL);
  }
  else
  {
    v24 = *a11;
    v25 = *(CSurfaceShaderComposer **)(a1 + 1528);
    v58 = 1065353216;
    v26 = (float)v24;
    v27 = a11[1];
    v55 = v26;
    v56 = (float)v27;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v25, a13);
    v23 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x9E6u, 0LL);
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 1528);
      *((_QWORD *)&v35 + 1) = &v33;
      *(_QWORD *)&v35 = 1LL;
      v31 = CSurfaceShaderComposer::RunShader(
              v30,
              v39,
              v29,
              (__int64)v38,
              2u,
              (float *)&v54,
              5u,
              (unsigned __int64 *)&v35,
              a14,
              a10,
              (__int64)v37,
              a15,
              1);
      v23 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x9F3u, 0LL);
    }
  }
  return v23;
}
