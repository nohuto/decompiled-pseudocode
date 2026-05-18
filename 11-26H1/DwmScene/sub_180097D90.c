/*
 * XREFs of sub_180097D90 @ 0x180097D90
 * Callers:
 *     sub_180035030 @ 0x180035030 (sub_180035030.c)
 *     sub_1800351DC @ 0x1800351DC (sub_1800351DC.c)
 *     sub_180035A5C @ 0x180035A5C (sub_180035A5C.c)
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 * Callees:
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180024D18 @ 0x180024D18 (sub_180024D18.c)
 *     sub_180097B2C @ 0x180097B2C (sub_180097B2C.c)
 */

char *__fastcall sub_180097D90(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  char *result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = sub_180012B20(&v8);
  v5 = sub_180024D18(*v4 - *(_QWORD *)(a2 + 16));
  v6 = *(int *)(a2 + 8);
  *(float *)&v8 = v5;
  sub_180097B2C(a1 + 8 * (v6 + 2 * v6 + 7), (int *)&v8);
  if ( *(_QWORD *)(a1 + 24LL * *(int *)(a2 + 8) + 64) - *(_QWORD *)(a1 + 24LL * *(int *)(a2 + 8) + 56) != *(_QWORD *)(a1 + 280) - *(_QWORD *)(a1 + 272) )
    return sub_180097B2C(a1 + 272, (int *)&v8);
  result = *(char **)(a1 + 280);
  *((float *)result - 1) = *(float *)&v8 + *((float *)result - 1);
  return result;
}
