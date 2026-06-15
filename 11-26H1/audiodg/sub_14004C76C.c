/*
 * XREFs of sub_14004C76C @ 0x14004C76C
 * Callers:
 *     sub_14004EFD0 @ 0x14004EFD0 (sub_14004EFD0.c)
 *     sub_14004F12C @ 0x14004F12C (sub_14004F12C.c)
 * Callees:
 *     sub_140038358 @ 0x140038358 (sub_140038358.c)
 *     sub_14004EE9C @ 0x14004EE9C (sub_14004EE9C.c)
 */

char *__fastcall sub_14004C76C(char *a1, char *a2, _WORD *a3, _QWORD *a4)
{
  size_t v6; // rax
  const void *v7; // r8
  __int64 v8; // r10
  size_t v9; // r10
  size_t v10; // rsi

  if ( a1 != a2 && a3 && *a3 && (v6 = sub_14004EE9C(a3), v9 = v8 - (_QWORD)a1, v10 = v6, v9 >= v6) )
  {
    sub_140038358(a1, v9, v7, v6);
    if ( a4 )
      *a4 = a1;
    return &a1[v10];
  }
  else
  {
    if ( a4 )
      *a4 = 0LL;
    return a1;
  }
}
