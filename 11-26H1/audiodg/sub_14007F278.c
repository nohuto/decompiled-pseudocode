/*
 * XREFs of sub_14007F278 @ 0x14007F278
 * Callers:
 *     sub_14007CD34 @ 0x14007CD34 (sub_14007CD34.c)
 * Callees:
 *     sub_140038A9C @ 0x140038A9C (sub_140038A9C.c)
 */

char __fastcall sub_14007F278(__int64 a1, void **a2, unsigned __int64 a3)
{
  char *v4; // rbx
  char *v7; // r14
  __int16 *v8; // r8
  size_t v9; // r9
  size_t v10; // rdx
  unsigned __int16 *v11; // r14
  size_t v12; // r9
  char result; // al
  __int16 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)*a2;
  if ( *(_BYTE *)(a1 + 2) == 1 )
  {
    v7 = v4 + 2;
    if ( (unsigned __int64)(v4 + 2) > a3 )
      return 0;
    v8 = &v14;
    v9 = 2LL;
    v14 = *(_WORD *)(a1 + 4);
    v10 = 2LL;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 2) != 2 )
      goto LABEL_8;
    v7 = v4 + 4;
    if ( (unsigned __int64)(v4 + 4) > a3 )
      return 0;
    v10 = 4LL;
    v8 = (__int16 *)(a1 + 4);
    v9 = 4LL;
  }
  sub_140038A9C(v4, v10, v8, v9);
  v4 = v7;
LABEL_8:
  if ( !*(_WORD *)a1 )
  {
    if ( (unsigned __int64)(v4 + 2) <= a3 )
    {
      v11 = (unsigned __int16 *)(a1 + 8);
      sub_140038A9C(v4, a3 - (_QWORD)v4, (const void *)(a1 + 8), 2uLL);
      v4 += 2;
      goto LABEL_12;
    }
    return 0;
  }
  v11 = (unsigned __int16 *)(a1 + 8);
LABEL_12:
  v12 = *v11;
  if ( (unsigned __int64)&v4[v12] > a3 )
    return 0;
  sub_140038A9C(v4, a3 - (_QWORD)v4, *(const void **)(a1 + 24), v12);
  result = 1;
  *a2 = &v4[*v11];
  return result;
}
