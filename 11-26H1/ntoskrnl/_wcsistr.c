/*
 * XREFs of _wcsistr @ 0x140AA9AC4
 * Callers:
 *     SubstringMatch @ 0x140AA9A5C (SubstringMatch.c)
 * Callees:
 *     <none>
 */

char *__fastcall wcsistr(char *a1, char *a2)
{
  signed __int64 v4; // r8
  __int16 *v5; // r9
  __int16 v6; // dx
  char *v7; // rbx
  unsigned __int16 v8; // r10

  if ( !*(_WORD *)a2 )
    return a1;
  v4 = a1 - a2;
LABEL_4:
  if ( *(_WORD *)a1 )
  {
    v5 = (__int16 *)a2;
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        return a1;
      v7 = (char *)v5 + v4;
      v8 = *(__int16 *)((char *)v5 + v4);
      if ( v8 >= 0x61u && v8 <= 0x7Au )
        v8 -= 32;
      if ( (unsigned __int16)(v6 - 97) <= 0x19u )
        v6 -= 32;
      if ( v8 == v6 )
      {
        ++v5;
        if ( *((_WORD *)v7 + 1) )
          continue;
      }
      if ( !*v5 )
        return a1;
      a1 += 2;
      v4 += 2LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
