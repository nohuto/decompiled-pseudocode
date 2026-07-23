/*
 * XREFs of ExpWnfFindStateName @ 0x1409CB990
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x1409CB5E8 (ExpWnfCreateNameInstance.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpWnfFindStateName(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax

  v2 = *(_QWORD **)(a1 + 56);
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    if ( a2 < v2[3] )
    {
      v2 = (_QWORD *)*v2;
      goto LABEL_5;
    }
    if ( a2 <= v2[3] )
      return v2 - 2;
    v2 = (_QWORD *)v2[1];
LABEL_5:
    if ( !v2 )
      return 0LL;
  }
}
