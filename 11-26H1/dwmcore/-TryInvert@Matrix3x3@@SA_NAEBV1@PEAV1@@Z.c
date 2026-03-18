/*
 * XREFs of ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x180171C40
 * Callers:
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x180171B90 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Matrix3x3::TryInvert(const struct Matrix3x3 *a1, struct Matrix3x3 *a2)
{
  float v2; // xmm5_4
  float v3; // xmm4_4
  float v4; // xmm6_4
  float v5; // xmm10_4
  float v6; // xmm11_4
  float v7; // xmm12_4
  float v8; // xmm13_4
  float v9; // xmm14_4
  float v10; // xmm15_4
  float v11; // xmm9_4
  float v12; // xmm2_4
  bool result; // al

  v2 = *((float *)a1 + 3);
  v3 = *((float *)a1 + 8);
  v4 = *((float *)a1 + 5);
  v5 = *((float *)a1 + 7);
  v6 = *((float *)a1 + 2);
  v7 = *(float *)a1;
  v8 = *((float *)a1 + 6);
  v9 = *((float *)a1 + 1);
  v10 = *((float *)a1 + 4);
  v11 = *(float *)a1 * v10;
  v12 = (float)((float)((float)((float)((float)((float)(v5 * v2) * v6) + (float)(v11 * v3))
                              + (float)((float)(v8 * v9) * v4))
                      - (float)((float)(*(float *)a1 * v8) * v4))
              - (float)((float)(v8 * v10) * v6))
      - (float)((float)(v2 * v9) * v3);
  if ( COERCE_FLOAT(LODWORD(v12) & _xmm) < 0.0000011920929 )
    return 0;
  result = 1;
  *(float *)a2 = (float)((float)(v3 * v10) - (float)(v4 * v5)) * (float)(1.0 / v12);
  *((float *)a2 + 1) = (float)((float)(v6 * v5) - (float)(v3 * v9)) * (float)(1.0 / v12);
  *((float *)a2 + 6) = (float)((float)(v5 * v2) - (float)(v8 * v10)) * (float)(1.0 / v12);
  *((float *)a2 + 2) = (float)((float)(v4 * v9) - (float)(v6 * v10)) * (float)(1.0 / v12);
  *((float *)a2 + 3) = (float)((float)(v4 * v8) - (float)(v3 * v2)) * (float)(1.0 / v12);
  *((float *)a2 + 7) = (float)((float)(v8 * v9) - (float)(v5 * v7)) * (float)(1.0 / v12);
  *((float *)a2 + 5) = (float)((float)(v2 * v6) - (float)(v4 * v7)) * (float)(1.0 / v12);
  *((float *)a2 + 8) = (float)(v11 - (float)(v2 * v9)) * (float)(1.0 / v12);
  *((float *)a2 + 4) = (float)((float)(v3 * v7) - (float)(v6 * v8)) * (float)(1.0 / v12);
  return result;
}
