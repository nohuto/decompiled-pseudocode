/*
 * XREFs of ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18011FA90
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18011F93C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18025BB50 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_18025BB50.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18025BCB4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_18025BCB4.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z @ 0x18011FD30 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

void __fastcall VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        CMILMatrix *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_POINT_2F *a3,
        unsigned int a4,
        CMILMatrix *a5,
        __int64 a6)
{
  __int64 v8; // r14
  CMILMatrix *v10; // rcx
  unsigned int v11; // r9d
  float v12; // xmm11_4
  __m128 v13; // xmm12
  float v14; // xmm14_4
  float v15; // xmm13_4
  float v16; // xmm9_4
  float v17; // xmm8_4
  unsigned int v18; // r9d
  float v19; // xmm0_4
  float v20; // xmm6_4
  FLOAT v21; // xmm0_4
  unsigned int v22; // r9d
  float v23; // xmm1_4
  signed __int64 v24; // rsi
  float v25; // xmm7_4
  __int64 v26; // rbx
  float *v27; // rax
  __int64 v28; // rcx
  float v29; // xmm1_4
  struct D2D_POINT_2F v30; // [rsp+28h] [rbp-99h] BYREF
  __int64 v31; // [rsp+30h] [rbp-91h]
  __int64 v32; // [rsp+38h] [rbp-89h] BYREF
  float v33; // [rsp+40h] [rbp-81h]
  __int64 v34; // [rsp+48h] [rbp-79h] BYREF
  float v35; // [rsp+50h] [rbp-71h]

  v8 = a4;
  v30 = 0LL;
  LODWORD(v31) = 0;
  v34 = 0LL;
  v35 = 0.0;
  CMILMatrix::Transform(a5, a2, (struct HomogeneousPoint2D *)&v30, a4);
  CMILMatrix::Transform(v10, a3, (struct HomogeneousPoint2D *)&v34, v11);
  v12 = v35;
  v13 = (__m128)HIDWORD(v34);
  v14 = *((float *)&v34 + 1) / v35;
  v15 = *(float *)&v34 / v35;
  v16 = (float)(v30.y / *(float *)&v31) - (float)(*((float *)&v34 + 1) / v35);
  v17 = (float)(v30.x / *(float *)&v31) - (float)(*(float *)&v34 / v35);
  v19 = sqrtf_0((float)(v16 * v16) + (float)(v17 * v17));
  v20 = FLOAT_1_0;
  if ( v19 > 0.0 )
    v20 = a3[1].x / v19;
  v32 = 0LL;
  v33 = 0.0;
  v30.x = (float)(v17 * v20) + v15;
  v30.y = (float)(v16 * v20) + v14;
  CMILMatrix::Transform(this, &v30, (struct HomogeneousPoint2D *)&v32, v18);
  v30.x = *(float *)&v32 / v33;
  v21 = *((float *)&v32 + 1) / v33;
  v32 = 0LL;
  v33 = 0.0;
  v30.y = v21;
  CMILMatrix::Transform(a5, &v30, (struct HomogeneousPoint2D *)&v32, v22);
  v23 = v33;
  if ( v33 <= 0.0 )
  {
    *(_QWORD *)a6 = _mm_unpacklo_ps((__m128)(unsigned int)v34, v13).m128_u64[0];
    *(float *)(a6 + 8) = v12;
  }
  else
  {
    *(_QWORD *)a6 = v32;
    *(float *)(a6 + 8) = v23;
  }
  if ( v20 > 1.0 && a3[1].y == 0.0 )
    v20 = FLOAT_1_0;
  if ( (_DWORD)v8 )
  {
    v24 = (char *)a2 - (char *)a3;
    v25 = 1.0 - v20;
    v26 = a6 - (_QWORD)a3;
    v27 = (float *)&a3[2];
    v28 = v8;
    do
    {
      v29 = (float)(v20 * *(float *)((char *)v27 + v24)) + (float)(v25 * *v27);
      *(float *)((char *)v27 + v26 + 36) = (float)(v20 * *(float *)((char *)v27 + v24 + 4)) + (float)(v25 * v27[1]);
      *(float *)((char *)v27 + v26 + 32) = v29;
      v27 += 2;
      --v28;
    }
    while ( v28 );
  }
}
