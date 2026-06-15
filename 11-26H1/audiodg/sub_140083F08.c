/*
 * XREFs of sub_140083F08 @ 0x140083F08
 * Callers:
 *     sub_140085790 @ 0x140085790 (sub_140085790.c)
 *     sub_140086650 @ 0x140086650 (sub_140086650.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140083F08(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  if ( a2 >= *(_QWORD *)(a1 + 16) )
    return 0LL;
  result = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  for ( ; a2; --a2 )
    result = (_QWORD *)*result;
  return result;
}
