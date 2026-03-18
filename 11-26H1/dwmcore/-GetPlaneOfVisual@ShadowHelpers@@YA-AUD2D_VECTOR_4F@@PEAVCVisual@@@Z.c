/*
 * XREFs of ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x1800CF100
 * Callers:
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x180212C0C (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCLight@@PEAVCVisual@@PEAVC.c)
 * Callees:
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1800D03C0 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 */

struct D2D_VECTOR_4F *__fastcall ShadowHelpers::GetPlaneOfVisual(
        ShadowHelpers *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        struct CVisual *a3)
{
  float w; // xmm2_4
  float x; // xmm1_4
  __m128i si128; // xmm0
  D2D_VECTOR_4F v8; // [rsp+20h] [rbp-30h] BYREF
  struct D2D_VECTOR_4F v9; // [rsp+30h] [rbp-20h] BYREF
  struct D2D_VECTOR_4F v10; // [rsp+40h] [rbp-10h] BYREF

  w = retstr[8].w;
  x = retstr[9].x;
  if ( w == 0.0 )
    w = FLOAT_1_0;
  if ( x == 0.0 )
    x = FLOAT_1_0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v9.y = x;
  v10.x = w;
  *(_QWORD *)&v8.z = si128.m128i_i64[1];
  v9.x = 0.0;
  v10.y = x;
  v9.z = 0.0;
  v9.w = 1.0;
  v10.z = 0.0;
  v10.w = 1.0;
  D2DVectorHelper::CalculatePlane(this, &v8, &v9, &v10, (const struct D2D_VECTOR_4F *)si128.m128i_i64[0]);
  return (struct D2D_VECTOR_4F *)this;
}
