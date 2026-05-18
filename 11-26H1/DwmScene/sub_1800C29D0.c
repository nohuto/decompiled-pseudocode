/*
 * XREFs of sub_1800C29D0 @ 0x1800C29D0
 * Callers:
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     sub_180054448 @ 0x180054448 (sub_180054448.c)
 */

__int64 *__fastcall sub_1800C29D0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  void *v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(void **)a2;
  v6 = v3 - *(_QWORD *)a2;
  *a1 = 0LL;
  v7 = v6 >> 5;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v7 )
  {
    sub_180054448(a1, v7);
    v8 = *a1;
    sub_180017A18(v5, v3, (void *)*a1);
    v10 = 0LL;
    a1[1] = v8 + 32 * v7;
    sub_1800531B0(&v10);
  }
  return a1;
}
