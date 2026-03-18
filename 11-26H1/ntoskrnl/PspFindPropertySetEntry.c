/*
 * XREFs of PspFindPropertySetEntry @ 0x1404611B0
 * Callers:
 *     PspInsertProperty @ 0x14046100C (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x1404610F0 (PspRemoveProperty.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PspFindPropertySetEntry(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; result != a1; result = (_QWORD *)*result )
  {
    if ( result[2] == a2 )
      return result;
  }
  return 0LL;
}
