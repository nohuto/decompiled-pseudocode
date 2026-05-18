/*
 * XREFs of sub_18003D360 @ 0x18003D360
 * Callers:
 *     sub_18003BB24 @ 0x18003BB24 (sub_18003BB24.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_18008ECA0 @ 0x18008ECA0 (sub_18008ECA0.c)
 * Callees:
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_18003D278 @ 0x18003D278 (sub_18003D278.c)
 */

__int64 __fastcall sub_18003D360(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __m128 *v5; // rax
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v10[4]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v11[4]; // [rsp+60h] [rbp-48h] BYREF

  v5 = (__m128 *)sub_18003BCCC(a1, v11);
  v6 = v5[1];
  v10[0] = *v5;
  v7 = v5[2];
  v10[1] = v6;
  v8 = v5[3];
  v10[2] = v7;
  v10[3] = v8;
  sub_18003D278(a2, a3, v10);
  return a2;
}
