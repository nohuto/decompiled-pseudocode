/*
 * XREFs of sub_1800945E0 @ 0x1800945E0
 * Callers:
 *     <none>
 * Callees:
 *     _o_cosf @ 0x18000CE28 (_o_cosf.c)
 */

float __fastcall sub_1800945E0(float a1)
{
  o_cosf();
  return (float)((float)(a1 * 3.1415927) * 0.5) + 0.5;
}
