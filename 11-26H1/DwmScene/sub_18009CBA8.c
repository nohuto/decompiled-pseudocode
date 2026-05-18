/*
 * XREFs of sub_18009CBA8 @ 0x18009CBA8
 * Callers:
 *     sub_18009CCB8 @ 0x18009CCB8 (sub_18009CCB8.c)
 *     sub_18009CD14 @ 0x18009CD14 (sub_18009CD14.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

_QWORD *__fastcall sub_18009CBA8(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_18000E26C(v3, 0x38uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
