/*
 * XREFs of sub_18004AB5C @ 0x18004AB5C
 * Callers:
 *     sub_18004A638 @ 0x18004A638 (sub_18004A638.c)
 * Callees:
 *     _o__fdclass @ 0x18000CD8A (_o__fdclass.c)
 */

bool __fastcall sub_18004AB5C(float *a1)
{
  float v1; // xmm0_4
  __int64 v2; // rax
  float *v3; // rcx

  v1 = *a1;
  v2 = 15LL;
  v3 = a1 + 1;
  do
  {
    v1 = v1 + *v3++;
    --v2;
  }
  while ( v2 );
  return (__int16)o__fdclass() <= 0;
}
