/*
 * XREFs of sub_1800439F0 @ 0x1800439F0
 * Callers:
 *     sub_180043AC0 @ 0x180043AC0 (sub_180043AC0.c)
 *     sub_180043B50 @ 0x180043B50 (sub_180043B50.c)
 *     sub_180043CD0 @ 0x180043CD0 (sub_180043CD0.c)
 *     sub_18007C7AC @ 0x18007C7AC (sub_18007C7AC.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 *     sub_1800184AC @ 0x1800184AC (sub_1800184AC.c)
 *     sub_180045E94 @ 0x180045E94 (sub_180045E94.c)
 */

__int64 *__fastcall sub_1800439F0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  void *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(void **)a2;
  v6 = v3 - *(_QWORD *)a2;
  *a1 = 0LL;
  v7 = v6 >> 2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v7 )
  {
    sub_180045E94(a1, v7);
    v8 = *a1;
    sub_180017A18(v5, v3, (void *)*a1);
    v10 = 0LL;
    a1[1] = v8 + 4 * v7;
    sub_1800184AC(&v10);
  }
  return a1;
}
