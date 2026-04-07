/*
 * XREFs of ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800220C4
 * Callers:
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180016880 (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180021EB0 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 * Callees:
 *     ??_0D2DVector2@@QEAAAEAU0@M@Z @ 0x1800E5B04 (--_0D2DVector2@@QEAAAEAU0@M@Z.c)
 */

struct D2DVector2 *__fastcall D3DXVec2TransformCoord(
        struct D2DVector2 *a1,
        const struct D2DVector2 *a2,
        const struct D2DMatrix *a3)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm1
  float v5; // xmm4_4

  v3 = (__m128)*((unsigned int *)a2 + 1);
  v4 = v3;
  v3.m128_f32[0] = (float)((float)(v3.m128_f32[0] * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                 + *((float *)a3 + 12);
  v4.m128_f32[0] = (float)((float)(v4.m128_f32[0] * *((float *)a3 + 5)) + (float)(*(float *)a2 * *((float *)a3 + 1)))
                 + *((float *)a3 + 13);
  v5 = (float)((float)(*((float *)a2 + 1) * *((float *)a3 + 7)) + (float)(*(float *)a2 * *((float *)a3 + 3)))
     + *((float *)a3 + 15);
  *(_QWORD *)a1 = _mm_unpacklo_ps(v3, v4).m128_u64[0];
  if ( (float)(v5 - 1.0) < -0.00000011920929 || (float)(v5 - 1.0) > 0.00000011920929 )
    D2DVector2::operator/=();
  return a1;
}
