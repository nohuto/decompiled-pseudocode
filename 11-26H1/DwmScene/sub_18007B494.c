/*
 * XREFs of sub_18007B494 @ 0x18007B494
 * Callers:
 *     sub_18007CDA4 @ 0x18007CDA4 (sub_18007CDA4.c)
 *     sub_180090358 @ 0x180090358 (sub_180090358.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 *     sub_1800184AC @ 0x1800184AC (sub_1800184AC.c)
 *     sub_180045E94 @ 0x180045E94 (sub_180045E94.c)
 */

__int64 *__fastcall sub_18007B494(__int64 *a1, void **a2)
{
  unsigned __int64 v4; // rdx
  void *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2;
  if ( v4 )
  {
    sub_180045E94(a1, v4);
    v5 = *a2;
    v6 = (__int64)a2[1];
    v7 = *a1;
    sub_180017A18(v5, v6, (void *)*a1);
    v9 = 0LL;
    a1[1] = v7 + 4 * ((v6 - (__int64)v5) >> 2);
    sub_1800184AC(&v9);
  }
  return a1;
}
