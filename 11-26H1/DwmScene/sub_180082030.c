/*
 * XREFs of sub_180082030 @ 0x180082030
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180029420 @ 0x180029420 (sub_180029420.c)
 *     sub_180052864 @ 0x180052864 (sub_180052864.c)
 */

_QWORD *__fastcall sub_180082030(__int64 *a1, unsigned int a2)
{
  _QWORD *result; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = a2;
    sub_180052864(a1 + 15, &v6);
    v6 = a2;
    return (_QWORD *)sub_180029420(a1 + 10, &v6);
  }
  else
  {
    *(_OWORD *)v5 = 0LL;
    result = sub_180011F5C(a1 + 17, v5);
    if ( v5[1] )
      return (_QWORD *)sub_180010EC8(v5[1]);
  }
  return result;
}
