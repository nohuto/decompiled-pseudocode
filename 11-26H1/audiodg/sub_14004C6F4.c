/*
 * XREFs of sub_14004C6F4 @ 0x14004C6F4
 * Callers:
 *     sub_14004EFD0 @ 0x14004EFD0 (sub_14004EFD0.c)
 *     sub_14004F12C @ 0x14004F12C (sub_14004F12C.c)
 * Callees:
 *     sub_140038358 @ 0x140038358 (sub_140038358.c)
 *     sub_14004EE78 @ 0x14004EE78 (sub_14004EE78.c)
 */

char *__fastcall sub_14004C6F4(char *a1, char *a2, _BYTE *a3, _QWORD *a4)
{
  size_t v6; // rax
  const void *v7; // r8
  __int64 v8; // rdx
  size_t v9; // rdx
  size_t v10; // rsi

  if ( a1 != a2 && a3 && *a3 && (v6 = sub_14004EE78(a3), v9 = v8 - (_QWORD)a1, v10 = v6, v9 >= v6) )
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
