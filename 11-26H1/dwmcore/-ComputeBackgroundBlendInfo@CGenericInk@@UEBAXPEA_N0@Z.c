/*
 * XREFs of ?ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z @ 0x1801233F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180123428 (-GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 */

void __fastcall CGenericInk::ComputeBackgroundBlendInfo(CGenericInk *this, bool *a2, bool *a3)
{
  enum D2D1_PRIMITIVE_BLEND v4; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0;
  v4 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
  CGenericInk::GetPrimitiveBlend(this, &v4);
  *a3 = v4 != D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
}
