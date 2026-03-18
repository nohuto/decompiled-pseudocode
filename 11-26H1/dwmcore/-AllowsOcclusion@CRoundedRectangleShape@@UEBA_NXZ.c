/*
 * XREFs of ?AllowsOcclusion@CRoundedRectangleShape@@UEBA_NXZ @ 0x180187A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CRoundedRectangleShape::AllowsOcclusion(CRoundedRectangleShape *this)
{
  __int64 v1; // rax
  char v2; // cl
  float v3; // xmm3_4
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v3 = *(float *)(v1 + 20);
  v4 = *(float *)(v1 + 16);
  if ( *(_BYTE *)(v1 + 68) )
  {
    v5 = v4 + *(float *)(v1 + 24);
    v6 = v3 + *(float *)(v1 + 28);
  }
  else
  {
    v5 = *(float *)(v1 + 24);
    v6 = *(float *)(v1 + 28);
  }
  v7 = v5 - v4;
  if ( *(_BYTE *)(v1 + 68) )
  {
    if ( (float)(*(float *)(v1 + 32) + *(float *)(v1 + 32)) > v7 )
      return v2;
    v8 = v6 - v3;
    v9 = *(float *)(v1 + 36) + *(float *)(v1 + 36);
  }
  else
  {
    if ( (float)(*(float *)(v1 + 40) + *(float *)(v1 + 32)) > v7 )
      return v2;
    if ( (float)(*(float *)(v1 + 56) + *(float *)(v1 + 48)) > v7 )
      return v2;
    v8 = v6 - v3;
    if ( (float)(*(float *)(v1 + 60) + *(float *)(v1 + 36)) > v8 )
      return v2;
    v9 = *(float *)(v1 + 52) + *(float *)(v1 + 44);
  }
  if ( v9 <= v8 )
    return 1;
  return v2;
}
