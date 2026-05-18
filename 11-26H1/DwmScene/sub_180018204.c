/*
 * XREFs of sub_180018204 @ 0x180018204
 * Callers:
 *     sub_1800182A8 @ 0x1800182A8 (sub_1800182A8.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 *     sub_1800184AC @ 0x1800184AC (sub_1800184AC.c)
 *     sub_18001BA04 @ 0x18001BA04 (sub_18001BA04.c)
 */

__int64 *__fastcall sub_180018204(__int64 *a1, __int64 a2)
{
  void *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2 )
  {
    sub_18001BA04();
    v4 = *(void **)a2;
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *a1;
    sub_180017A18(v4, v5, (void *)*a1);
    v8 = 0LL;
    a1[1] = v6 + 4 * ((v5 - (__int64)v4) >> 2);
    sub_1800184AC(&v8);
  }
  return a1;
}
