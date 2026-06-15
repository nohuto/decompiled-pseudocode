/*
 * XREFs of sub_140026664 @ 0x140026664
 * Callers:
 *     sub_14000AFD0 @ 0x14000AFD0 (sub_14000AFD0.c)
 *     sub_14000B7C0 @ 0x14000B7C0 (sub_14000B7C0.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140026664(__int64 a1, _QWORD **a2, __int64 a3, _QWORD *a4)
{
  _QWORD *result; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx

  result = *a2;
  *a4 = *a2;
  while ( 1 )
  {
    if ( !result )
    {
      *a4 = 0LL;
      return result;
    }
    v5 = (_QWORD *)*result;
    *a4 = *result;
    v6 = (_QWORD *)result[2];
    if ( *v6 == a3 )
      break;
    result = v5;
  }
  *a4 = result;
  return v6;
}
