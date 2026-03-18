/*
 * XREFs of ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18025DD7C
 * Callers:
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x18011C0F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z @ 0x180121334 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z.c)
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z @ 0x180121E2C (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180146DA8 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?GetAntialiasTemplateGeometry@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUTemplateGeometryDesc@1@@Z @ 0x180178A10 (-GetAntialiasTemplateGeometry@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUTempla.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x1801A2BEC (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CCpuClipAntialiasDrawListEntry::FillLightingData(
        __int64 a1,
        __int64 a2,
        char a3,
        CMILMatrix *a4,
        __int64 *a5)
{
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rbx
  float v8; // xmm0_4
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  float v11; // xmm0_4
  float v12; // xmm6_4
  unsigned int v13; // r13d
  float *v14; // rbx
  float *v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  float v18; // xmm2_4
  __int64 v19; // rcx
  float v20; // xmm0_4
  __int64 v21; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v22; // r8
  float v23; // xmm0_4
  unsigned __int64 v24; // rax
  unsigned int v25; // r13d
  unsigned __int64 v26; // rcx
  float v27; // xmm6_4
  float *v28; // rbx
  float *v29; // rax
  int v30; // ecx
  __int64 v31; // rcx
  float v32; // xmm2_4
  __m128 v33; // xmm6
  __int64 v34; // rax
  __m128 v35; // xmm1
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int i; // edx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  float *v42; // r13
  __m128 v43; // xmm0
  __m128 v44; // xmm1
  __m128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // xmm6_4
  int v51; // xmm7_4
  int v52; // xmm8_4
  int v53; // xmm9_4
  __int64 v54; // r14
  int v55; // eax
  __int64 v56; // rbx
  const struct D2D_POINT_2F *v57; // r15
  float v58; // xmm1_4
  float v59; // xmm3_4
  float v60; // xmm4_4
  float v61; // xmm0_4
  float Y; // [rsp+3Ch] [rbp-CCh] BYREF
  __m128 v64[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v65; // [rsp+78h] [rbp-90h]
  int v66; // [rsp+88h] [rbp-80h]
  __int64 v67; // [rsp+98h] [rbp-70h]
  _QWORD v68[3]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v69[3]; // [rsp+B8h] [rbp-50h] BYREF
  CMILMatrix *v70[2]; // [rsp+D0h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a1 + 88);
  v6 = 0;
  v7 = a2;
  v70[0] = a4;
  v67 = a2;
  memset(v64, 0, sizeof(v64));
  v65 = 0LL;
  CCpuClipAntialiasSink::GetAntialiasTemplateGeometry(v5, 0, a2, (__int64)v64);
  v8 = *(float *)(v7 + 4);
  v9 = *((_DWORD *)a5 + 3);
  v10 = 0;
  Y = 0.0;
  v11 = modff(v8, &Y);
  if ( v11 > 0.000081380211 )
  {
    v10 = 2;
    v12 = 1.0 - v11;
    v13 = 0;
    do
    {
      v14 = (float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((unsigned __int64 *)v64, v13 + 2);
      v15 = (float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((unsigned __int64 *)v64, v13);
      v16 = v13++;
      v17 = (int)(*((_DWORD *)a5 + 2) * v16);
      v18 = (float)(v12 * v15[1]) + (float)(v11 * v14[1]);
      v19 = *a5;
      *(float *)(v17 + v19 + 16) = (float)(v12 * *v15) + (float)(v11 * *v14);
      *(float *)(v17 + v19 + 20) = v18;
      *(_DWORD *)(v17 + v19 + 24) = 0;
    }
    while ( v13 < 2 );
    v7 = v67;
  }
  v20 = *(float *)(v7 + 8);
  Y = 0.0;
  v23 = modff(v20, &Y);
  if ( v23 > 0.000081380211 )
  {
    v24 = *((unsigned int *)a5 + 3);
    v25 = v24 - 2;
    v26 = (unsigned int)(v24 - 2);
    if ( v26 < v24 )
    {
      v27 = 1.0 - v23;
      do
      {
        v28 = (float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((unsigned __int64 *)v64, v26);
        v29 = (float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((unsigned __int64 *)v64, v25 - 2);
        v30 = *((_DWORD *)a5 + 2) * v25++;
        v21 = v30;
        v31 = *a5;
        v32 = (float)(v27 * v29[1]) + (float)(v23 * v28[1]);
        *(float *)(v21 + v31 + 16) = (float)(v27 * *v29) + (float)(v23 * *v28);
        *(float *)(v21 + v31 + 20) = v32;
        *(_DWORD *)(v21 + v31 + 24) = 0;
        v26 = v25;
      }
      while ( v25 < (unsigned __int64)*((unsigned int *)a5 + 3) );
    }
    v9 -= 2;
  }
  while ( v10 < v9 )
  {
    v33 = (__m128)*(unsigned int *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                     (unsigned __int64 *)v64,
                                     v10);
    v34 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((unsigned __int64 *)v64, v10);
    v21 = 0LL;
    v35 = (__m128)*(unsigned int *)(v34 + 4);
    LODWORD(v34) = *((_DWORD *)a5 + 2) * v10++;
    v36 = (int)v34;
    v37 = *a5;
    *(_QWORD *)(v36 + v37 + 16) = _mm_unpacklo_ps(v33, v35).m128_u64[0];
    *(_DWORD *)(v36 + v37 + 24) = 0;
  }
  if ( a3 )
  {
    for ( i = 0; i < *((_DWORD *)a5 + 3); *(_DWORD *)(v40 + v41 + 44) = 1065353216 )
    {
      v39 = i++;
      v40 = *((_DWORD *)a5 + 2) * v39;
      v41 = *a5;
      *(_QWORD *)(v40 + v41 + 32) = 0LL;
      *(_DWORD *)(v40 + v41 + 40) = 0;
    }
  }
  else
  {
    v42 = (float *)v70[0];
    v43 = *(__m128 *)v70[0];
    v44 = *((__m128 *)v70[0] + 1);
    v66 = *((_DWORD *)v70[0] + 16);
    v64[0] = v43;
    v45 = *((__m128 *)v70[0] + 2);
    v64[1] = v44;
    v46 = *((_OWORD *)v70[0] + 3);
    v64[2] = v45;
    v65 = v46;
    CMILMatrix::Invert((CMILMatrix *)v64, v21, v22);
    CMILMatrix::Transpose(v64);
    v47 = *a5;
    v48 = *((int *)a5 + 2);
    v69[0] = v47 + 16;
    v69[1] = v48 + v47 + 16;
    v49 = 2 * (int)v48;
    v69[2] = v49 + v47 + 16;
    v68[0] = v47 + 48;
    v68[1] = v48 + v47 + 48;
    v68[2] = v49 + v47 + 48;
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)v70, (int)v69, (int)v68, v42, v64[0].m128_f32);
    if ( *((_DWORD *)a5 + 3) )
    {
      v50 = HIDWORD(v70[1]);
      v51 = (int)v70[1];
      v52 = HIDWORD(v70[0]);
      v53 = (int)v70[0];
      do
      {
        v54 = *a5;
        v55 = *((_DWORD *)a5 + 2) * v6;
        *(_OWORD *)v70 = 0LL;
        v56 = v55;
        v57 = (const struct D2D_POINT_2F *)(v55 + v54);
        CMILMatrix::TransformIgnoreZW((CMILMatrix *)v42, v57 + 2, (struct D2D_POINT_4F *)v70);
        v58 = *(float *)v70;
        v59 = *((float *)v70 + 1);
        v60 = *(float *)&v70[1];
        v57[2].x = *(FLOAT *)v70;
        *(float *)(v56 + v54 + 20) = v59;
        *(float *)(v56 + v54 + 24) = v60;
        v61 = *((float *)&v70[1] + 1);
        if ( *((float *)&v70[1] + 1) != 1.0 && *((float *)&v70[1] + 1) != 0.0 )
        {
          v57[2].x = (float)(1.0 / *((float *)&v70[1] + 1)) * v58;
          *(float *)(v56 + v54 + 20) = (float)(1.0 / v61) * v59;
          *(float *)(v56 + v54 + 24) = (float)(1.0 / v61) * v60;
        }
        ++v6;
        *(_DWORD *)(v56 + v54 + 32) = v53;
        *(_DWORD *)(v56 + v54 + 36) = v52;
        *(_DWORD *)(v56 + v54 + 40) = v51;
        *(_DWORD *)(v56 + v54 + 44) = v50;
      }
      while ( v6 < *((_DWORD *)a5 + 3) );
    }
  }
}
