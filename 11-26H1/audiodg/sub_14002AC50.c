/*
 * XREFs of sub_14002AC50 @ 0x14002AC50
 * Callers:
 *     sub_14000E3CC @ 0x14000E3CC (sub_14000E3CC.c)
 *     sub_14008289C @ 0x14008289C (sub_14008289C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14002AC50(_QWORD *a1, __int64 a2)
{
  _QWORD *i; // r9

  for ( i = (_QWORD *)*a1; i; i = (_QWORD *)*i )
  {
    if ( *(_QWORD *)(i[2] + 16LL) == *(_QWORD *)(*(_QWORD *)a2 + 16LL) )
      return i;
  }
  return 0LL;
}
