/*
 * XREFs of sub_14003943C @ 0x14003943C
 * Callers:
 *     sub_140097700 @ 0x140097700 (sub_140097700.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003943C(__int64 a1, int a2, int a3)
{
  int v3; // xmm2_4
  int v4; // xmm3_4
  float v5; // xmm5_4
  float v6; // xmm4_4
  __int64 result; // rax

  v3 = 1065353216;
  v4 = -1082130432;
  if ( a3 )
    v5 = 1.0;
  else
    v5 = -1.0;
  v6 = (float)*(int *)(a1 + 144);
  result = (unsigned int)a2;
  *(float *)(a1 + 140) = (float)(v6 / (float)a2) * v5;
  if ( a3 )
    v6 = 0.0;
  *(float *)(a1 + 136) = v6;
  if ( a3 )
  {
    v4 = 1065353216;
    v3 = 0;
  }
  *(_DWORD *)(a1 + 148) = v3;
  *(_DWORD *)(a1 + 152) = v4;
  return result;
}
