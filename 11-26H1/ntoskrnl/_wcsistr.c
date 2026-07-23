/*
 * XREFs of _wcsistr @ 0x140AA4ED0
 * Callers:
 *     SubstringMatch @ 0x140AA4E68 (SubstringMatch.c)
 * Callees:
 *     <none>
 */

char *__fastcall wcsistr(char *a1, __int16 *a2)
{
  __int16 v4; // dx
  __int16 *v5; // r9
  __int16 v6; // r8

  if ( !*a2 )
    return a1;
LABEL_3:
  v4 = *(_WORD *)a1;
  if ( *(_WORD *)a1 )
  {
    v5 = a2;
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        return a1;
      if ( (unsigned __int16)(v4 - 97) <= 0x19u )
        v4 -= 32;
      if ( (unsigned __int16)(v6 - 97) <= 0x19u )
        v6 -= 32;
      if ( v4 == v6 )
      {
        v4 = *(__int16 *)((char *)++v5 + a1 - (char *)a2);
        if ( v4 )
          continue;
      }
      if ( !*v5 )
        return a1;
      a1 += 2;
      goto LABEL_3;
    }
  }
  return 0LL;
}
