/*
 * XREFs of sub_18005C470 @ 0x18005C470
 * Callers:
 *     sub_18005CDA4 @ 0x18005CDA4 (sub_18005CDA4.c)
 *     sub_18005CF24 @ 0x18005CF24 (sub_18005CF24.c)
 *     sub_18005DEB0 @ 0x18005DEB0 (sub_18005DEB0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180032460 @ 0x180032460 (sub_180032460.c)
 */

_QWORD *__fastcall sub_18005C470(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_180032460((__int64)(v3 + 2));
      result = (_QWORD *)sub_18000E26C(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
