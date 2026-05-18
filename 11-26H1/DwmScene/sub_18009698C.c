/*
 * XREFs of sub_18009698C @ 0x18009698C
 * Callers:
 *     sub_180096A20 @ 0x180096A20 (sub_180096A20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

_QWORD *__fastcall sub_18009698C(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  _QWORD *result; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 136);
  v3 = 8LL;
  do
  {
    *(_OWORD *)v5 = 0LL;
    sub_180011F5C(v2, v5);
    if ( v5[1] )
      sub_180010EC8(v5[1]);
    v2 += 2;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)v5 = 0LL;
  result = sub_180011F5C((_QWORD *)(a1 + 408), v5);
  if ( v5[1] )
    return (_QWORD *)sub_180010EC8(v5[1]);
  return result;
}
