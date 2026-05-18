/*
 * XREFs of sub_18003268C @ 0x18003268C
 * Callers:
 *     sub_180036C34 @ 0x180036C34 (sub_180036C34.c)
 *     sub_180036EBC @ 0x180036EBC (sub_180036EBC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18003268C(__int64 a1, float a2)
{
  float v2; // xmm1_4

  if ( a2 > 0.0 )
  {
    *(float *)a1 = fmaxf(a2, *(float *)a1);
    *(float *)(a1 + 4) = fminf(a2, *(float *)(a1 + 4));
    v2 = a2 + *(float *)(a1 + 8);
    ++*(_QWORD *)(a1 + 16);
    *(float *)(a1 + 8) = v2;
  }
}
