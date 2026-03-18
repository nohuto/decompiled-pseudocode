/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z @ 0x18011FD30
 * Callers:
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18011FA90 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct D2D_POINT_2F *a2, struct HomogeneousPoint2D *a3)
{
  float x; // xmm5_4
  float y; // xmm6_4
  float v5; // xmm0_4
  char v6; // dl
  __int32 v7; // xmm2_4
  char v8; // dl

  x = a2->x;
  y = a2->y;
  v5 = a2->x;
  *(float *)a3 = (float)((float)(y * *((float *)this + 4)) + (float)(a2->x * *(float *)this)) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)((float)(y * *((float *)this + 5)) + (float)(v5 * *((float *)this + 1)))
                     + *((float *)this + 13);
  v6 = *((_BYTE *)this + 65);
  if ( (char)(4 * v6) >> 6 == 1 )
    goto LABEL_6;
  if ( (char)(4 * v6) >> 6 < 0 )
  {
    *((float *)a3 + 2) = FLOAT_1_0;
    return;
  }
  COERCE_FLOAT(v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v8 = v6 & 0xCF;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 3) & v7) * 61440.0)
                                    + (float)(COERCE_FLOAT(*((_DWORD *)this + 7) & v7) * 61440.0))
                            + COERCE_FLOAT(*((_DWORD *)this + 15) & v7))
                    - 1.0) & v7) >= 0.000081380211 )
  {
    *((_BYTE *)this + 65) = v8 ^ 0x10;
LABEL_6:
    *((float *)a3 + 2) = (float)((float)(x * *((float *)this + 3)) + (float)(y * *((float *)this + 7)))
                       + *((float *)this + 15);
    return;
  }
  *((_BYTE *)this + 65) = v8 ^ 0x30;
  *((float *)a3 + 2) = FLOAT_1_0;
}
