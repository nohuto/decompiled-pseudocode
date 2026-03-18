/*
 * XREFs of _CCpuClipAntialiasBatchCommand::EmitGeometry_::_2_::_lambda_1_::operator() @ 0x18011CACC
 * Callers:
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x18011C0F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     ?EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@_K_NAEBVCMILMatrix@@54MAEBV?$StridedSpan@E@@4@Z @ 0x180065020 (-EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasBatchCommand::EmitGeometry_::_2_::_lambda_1_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        float a5,
        __m128 *a6,
        struct Windows::Foundation::Numerics::float4x4 *a7,
        char a8,
        __int64 *a9)
{
  int v9; // r15d
  unsigned int v10; // r14d
  __int64 v11; // r12
  int v12; // r13d
  unsigned __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // ecx
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  int v28; // ecx
  __int64 v29; // rbx
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  _DWORD *v35; // [rsp+80h] [rbp-88h] BYREF
  int v36; // [rsp+88h] [rbp-80h]
  int v37; // [rsp+8Ch] [rbp-7Ch]
  _DWORD *v38; // [rsp+90h] [rbp-78h] BYREF
  int v39; // [rsp+98h] [rbp-70h]
  int v40; // [rsp+9Ch] [rbp-6Ch]
  _DWORD v41[4]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v42[8]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v43[24]; // [rsp+D8h] [rbp-30h] BYREF

  v9 = a3 - a4;
  v10 = a4;
  v11 = a2;
  v12 = -a4;
  do
  {
    if ( (unsigned __int64)v10 >= *(_QWORD *)v11
      || (a3 = *(_QWORD *)(v11 + 8), v13 = v9 + v10, a2 = v13, v13 >= *(_QWORD *)v11) )
    {
      ((void (__fastcall *)(_QWORD, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v10, a2, a3);
      __debugbreak();
    }
    v14 = *(_QWORD *)(v11 + 32);
    v15 = v10 + v12;
    v16 = v15 << 6;
    v17 = (float)(1.0 - a5) * *(float *)(a3 + 8 * v13);
    v18 = (float)((float)(1.0 - a5) * *(float *)(a3 + 8 * v13 + 4)) + (float)(a5 * *(float *)(a3 + 8LL * v10 + 4));
    v19 = a5 * *(float *)(a3 + 8LL * v10);
    v20 = *(_QWORD *)(v11 + 16);
    v21 = *(_DWORD *)(v11 + 24);
    *(float *)&v41[2 * v15 + 1] = v18;
    *(float *)&v41[2 * v15] = v17 + v19;
    v22 = (int)v13 * v21;
    v23 = (int)(v10 * v21);
    v24 = *(_DWORD *)(v11 + 40);
    v25 = (float)(1.0 - a5) * *(float *)(v22 + v20);
    v26 = (float)((float)(1.0 - a5) * *(float *)(v22 + v20 + 4)) + (float)(a5 * *(float *)(v23 + v20 + 4));
    v27 = a5 * *(float *)(v23 + v20);
    LODWORD(v23) = v24;
    *(_DWORD *)((char *)&v42[2] + v16) = 1065353216;
    v28 = v10 * v24;
    *(float *)((char *)&v42[1] + v16) = v26;
    v29 = (int)v13 * (int)v23;
    *(float *)((char *)v42 + v16) = v25 + v27;
    v30 = *(float *)&v42[16 * (unsigned __int64)(v10 + v12)];
    v31 = (float)((float)(1.0 - a5) * *(float *)(v29 + v14)) + (float)(a5 * *(float *)(v28 + v14));
    v32 = (float)((float)(1.0 - a5) * *(float *)(v29 + v14 + 4)) + (float)(a5 * *(float *)(v28 + v14 + 4));
    *(float *)((char *)v43 + v16) = v31;
    v33 = *(float *)&v42[16 * (unsigned __int64)(v10 + v12) + 1];
    *(float *)((char *)&v43[1] + v16) = v32;
    ++v10;
    *(float *)((char *)&v43[2] + v16) = sqrtf_0(
                                          (float)((float)(v33 - v32) * (float)(v33 - v32))
                                        + (float)((float)(v30 - v31) * (float)(v30 - v31)));
    a2 = 2LL;
    *(_DWORD *)((char *)&v43[3] + v16) = *(_DWORD *)(v29 + v14 + 12);
  }
  while ( v10 + v12 < 2 );
  v36 = 64;
  v35 = v43;
  v37 = 2;
  v38 = v42;
  v39 = 64;
  v40 = 2;
  return CRenderingBatchCommand::EmitGeometry_TransferVertices(
           (__int64)v41,
           (__int64 *)&v38,
           (__int64 *)&v35,
           0,
           1,
           a6,
           a7,
           a8,
           1.0,
           a9,
           0);
}
