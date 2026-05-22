/*
 * XREFs of ?WithinAngle@EdgyRecognizer@@AEAA_NUtagPOINT@@0UVector2@Numerics@Foundation@Windows@@M@Z @ 0x18015947C
 * Callers:
 *     ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x180159260 (-OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     cosf @ 0x18009AB3C (cosf.c)
 *     _o_sqrtf_0 @ 0x18009AB9C (_o_sqrtf_0.c)
 */

bool __fastcall EdgyRecognizer::WithinAngle(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float a5)
{
  float v5; // xmm9_4
  float v6; // xmm8_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  double v10; // xmm7_8
  double v11; // xmm6_8
  double v12; // xmm1_8

  v5 = *(float *)&a4;
  v6 = *((float *)&a4 + 1);
  v7 = (float)(HIDWORD(a2) - HIDWORD(a3));
  v8 = (float)(a2 - a3);
  if ( *(float *)&a4 == 0.0 && *((float *)&a4 + 1) == 0.0 )
    return 0;
  if ( v8 == 0.0 && v7 == 0.0 )
    return 1;
  v10 = (float)((float)(v7 * *((float *)&a4 + 1)) + (float)(v8 * *(float *)&a4));
  v11 = o_sqrtf_0((float)(v7 * v7) + (float)(v8 * v8));
  v12 = o_sqrtf_0((float)(v6 * v6) + (float)(v5 * v5));
  return v10 / (v11 * v12) >= cosf(a5 * 0.017453292);
}
