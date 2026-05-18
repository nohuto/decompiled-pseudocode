/*
 * XREFs of sub_1800616CC @ 0x1800616CC
 * Callers:
 *     sub_1800636CC @ 0x1800636CC (sub_1800636CC.c)
 * Callees:
 *     _o_powf @ 0x18000CE88 (_o_powf.c)
 */

float __fastcall sub_1800616CC(float a1)
{
  float v1; // xmm6_4
  float v2; // xmm0_4

  v1 = a1 / 100.0;
  v2 = fabs(a1 / 100.0);
  o_powf();
  if ( v1 < 0.0 )
    v2 = v2 * -1.0;
  return v2 * 100.0;
}
