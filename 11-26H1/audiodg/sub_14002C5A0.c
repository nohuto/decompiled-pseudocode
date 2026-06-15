/*
 * XREFs of sub_14002C5A0 @ 0x14002C5A0
 * Callers:
 *     sub_14002C564 @ 0x14002C564 (sub_14002C564.c)
 * Callees:
 *     _o_powf @ 0x14004A664 (_o_powf.c)
 */

__int64 __fastcall sub_14002C5A0(_DWORD *a1)
{
  unsigned int i; // edi
  float v3; // xmm0_4
  __int64 v4; // rax
  __int64 result; // rax

  *a1 = 1065353216;
  for ( i = 1; i < a1[36] + 1; *(float *)&a1[v4 + 17] = *(float *)&a1[v4] - v3 )
  {
    v3 = o_powf();
    *(float *)&a1[i] = v3;
    v4 = i++ - 1;
  }
  result = i - 1;
  a1[result + 17] = 0;
  return result;
}
