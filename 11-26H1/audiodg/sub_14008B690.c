/*
 * XREFs of sub_14008B690 @ 0x14008B690
 * Callers:
 *     sub_14008B568 @ 0x14008B568 (sub_14008B568.c)
 *     sub_140092F58 @ 0x140092F58 (sub_140092F58.c)
 * Callees:
 *     sub_14008B52C @ 0x14008B52C (sub_14008B52C.c)
 */

char *__fastcall sub_14008B690(_QWORD *a1, _QWORD *a2, char *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    v4 = a1 + 1;
    v5 = (char *)(a3 - (char *)a1);
    do
    {
      *(_DWORD *)a3 = *((_DWORD *)v4 - 2);
      a3 += 16;
      v6 = *v4;
      *v4 = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = v6;
      v4 += 2;
    }
    while ( v4 - 1 != a2 );
  }
  sub_14008B52C((__int64)a3, (__int64)a3);
  return a3;
}
