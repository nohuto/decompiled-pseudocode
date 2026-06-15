/*
 * XREFs of sub_14005FB5C @ 0x14005FB5C
 * Callers:
 *     sub_14005F8C8 @ 0x14005F8C8 (sub_14005F8C8.c)
 * Callees:
 *     sub_14005F83C @ 0x14005F83C (sub_14005F83C.c)
 */

__int64 *__fastcall sub_14005FB5C(char *a1, char *a2, __int64 *a3)
{
  __int64 *v3; // rbx
  _QWORD *v4; // r8
  signed __int64 v5; // r9
  _QWORD *v6; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a3 + 1;
    v5 = a1 - (char *)v3;
    do
    {
      v6 = (_QWORD *)((char *)v4 + v5);
      *v3 = *(_QWORD *)((char *)v4 + v5 - 8);
      *v4 = 0LL;
      if ( v4 != (_QWORD *)((char *)v4 + v5) )
      {
        *v4 = *v6;
        *v6 = 0LL;
      }
      v4 += 2;
      v3 += 2;
    }
    while ( (char *)v4 + v5 - 8 != a2 );
  }
  sub_14005F83C(v3, v3);
  return v3;
}
