/*
 * XREFs of sub_180064854 @ 0x180064854
 * Callers:
 *     sub_18006624C @ 0x18006624C (sub_18006624C.c)
 *     sub_1800929B0 @ 0x1800929B0 (sub_1800929B0.c)
 * Callees:
 *     _o_powf @ 0x18000CE88 (_o_powf.c)
 */

_DWORD *__fastcall sub_180064854(int *a1, _DWORD *a2)
{
  int v3; // xmm0_4
  int v5; // xmm0_4
  int v6; // xmm0_4
  _DWORD *result; // rax

  v3 = *a1;
  o_powf();
  *a2 = v3;
  v5 = a1[1];
  o_powf();
  a2[1] = v5;
  v6 = a1[2];
  o_powf();
  a2[3] = a1[3];
  result = a2;
  a2[2] = v6;
  return result;
}
