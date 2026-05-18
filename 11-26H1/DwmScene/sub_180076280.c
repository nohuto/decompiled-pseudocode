/*
 * XREFs of sub_180076280 @ 0x180076280
 * Callers:
 *     sub_1800763B8 @ 0x1800763B8 (sub_1800763B8.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 *     sub_18006F8FC @ 0x18006F8FC (sub_18006F8FC.c)
 *     sub_180076500 @ 0x180076500 (sub_180076500.c)
 */

void __fastcall sub_180076280(_QWORD *a1, unsigned __int64 a2, void **a3, __int64 *a4)
{
  char *v8; // rax
  char *v9; // rsi
  void *v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v12 = a2;
    v8 = (char *)sub_18006F8FC((__int64)a1, &v12);
    *a1 = v8;
    a1[1] = v8;
    v9 = v8;
    a1[2] = &v8[8 * a2];
    v10 = *a3;
    v11 = *a4;
    sub_180017A18(*a3, v11, v8);
    v12 = 0LL;
    a1[1] = &v9[8 * ((v11 - (__int64)v10) >> 3)];
    sub_180076500(&v12);
  }
}
