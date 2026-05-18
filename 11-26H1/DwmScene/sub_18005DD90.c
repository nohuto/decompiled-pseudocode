/*
 * XREFs of sub_18005DD90 @ 0x18005DD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

_QWORD *__fastcall sub_18005DD90(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v2 = 0LL;
  result = sub_180011F5C((_QWORD *)(a1 + 56), v2);
  if ( v2[1] )
    return (_QWORD *)sub_180010EC8(v2[1]);
  return result;
}
