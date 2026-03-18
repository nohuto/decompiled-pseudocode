/*
 * XREFs of ?ConvertToAndFromWideCharSymCP@@YAHPEAGHPEADHH@Z @ 0x140295CFC
 * Callers:
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14018462C (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertToAndFromWideCharSymCP(unsigned __int16 *a1, int a2, char *a3, int a4, int a5)
{
  __int64 v7; // r9
  int v9; // eax
  unsigned __int16 v10; // cx
  __int64 v11; // rcx
  unsigned __int16 v12; // ax

  v7 = 0LL;
  if ( a2 && !a1 || a4 && !a3 )
    return 0LL;
  v9 = a2 / 2;
  if ( a5 )
  {
    if ( a4 < v9 )
      v9 = a4;
    if ( v9 > 0 )
    {
      do
      {
        v10 = (unsigned __int8)a3[v7];
        if ( (unsigned __int8)v10 >= 0x20u )
          v10 |= 0xF000u;
        else
          v10 = (char)v10;
        a1[v7++] = v10;
      }
      while ( v7 < v9 );
    }
    return (unsigned int)(2 * v9);
  }
  else
  {
    v11 = 0LL;
    if ( v9 < a4 )
      a4 = a2 / 2;
    while ( v11 < a4 )
    {
      v12 = a1[v11];
      if ( v12 >= 0x20u && (unsigned __int16)(v12 + 4064) > 0xDFu )
        return (unsigned int)v7;
      LODWORD(v7) = v7 + 1;
      a3[v11] = a1[v11];
      ++v11;
    }
    return (unsigned int)a4;
  }
}
