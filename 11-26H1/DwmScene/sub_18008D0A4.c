/*
 * XREFs of sub_18008D0A4 @ 0x18008D0A4
 * Callers:
 *     sub_18008C7C4 @ 0x18008C7C4 (sub_18008C7C4.c)
 *     sub_18008D334 @ 0x18008D334 (sub_18008D334.c)
 *     sub_18008D758 @ 0x18008D758 (sub_18008D758.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 */

char *__fastcall sub_18008D0A4(char *Src, char *a2)
{
  char *v4; // rbp
  float *v5; // rbx
  __int128 v6; // xmm6
  float *v7; // rcx
  float *i; // rax

  if ( Src != a2 )
  {
    v4 = Src + 16;
    v5 = (float *)(Src + 16);
    if ( Src + 16 != a2 )
    {
      do
      {
        v6 = *(_OWORD *)v5;
        v7 = v5;
        if ( COERCE_FLOAT(*(_OWORD *)v5) <= *(float *)Src )
        {
          for ( i = v5; ; v7 = i )
          {
            i -= 4;
            if ( *(float *)&v6 <= *i )
              break;
            *(_OWORD *)v7 = *(_OWORD *)i;
          }
          *(_OWORD *)v7 = v6;
        }
        else
        {
          memmove(v4, Src, (char *)v5 - Src);
          *(_OWORD *)Src = v6;
        }
        v5 += 4;
      }
      while ( v5 != (float *)a2 );
    }
  }
  return a2;
}
