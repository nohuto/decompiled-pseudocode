/*
 * XREFs of sub_1800763B8 @ 0x1800763B8
 * Callers:
 *     sub_180076C20 @ 0x180076C20 (sub_180076C20.c)
 *     sub_180079330 @ 0x180079330 (sub_180079330.c)
 * Callees:
 *     sub_180076280 @ 0x180076280 (sub_180076280.c)
 */

_QWORD *__fastcall sub_1800763B8(_QWORD *a1, void **a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r10
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = (void *)a3;
  v8 = a2[1];
  v3 = (__int64)v8;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = v3 - (_QWORD)*a2;
  v7 = *a2;
  sub_180076280(a1, v5 >> 3, &v7, (__int64 *)&v8);
  return a1;
}
