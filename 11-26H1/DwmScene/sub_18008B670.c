/*
 * XREFs of sub_18008B670 @ 0x18008B670
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

_QWORD *__fastcall sub_18008B670(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 1768);
  if ( *v1 )
  {
    *(_BYTE *)(*v1 + 168LL) = 1;
    *(_OWORD *)v3 = 0LL;
    result = sub_180011F5C(v1, v3);
    if ( v3[1] )
      return (_QWORD *)sub_180010EC8(v3[1]);
  }
  return result;
}
