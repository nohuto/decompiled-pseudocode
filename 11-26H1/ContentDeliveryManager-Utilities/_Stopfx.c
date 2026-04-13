/*
 * XREFs of _Stopfx @ 0x18000BC64
 * Callers:
 *     _Stofx @ 0x180004E48 (_Stofx.c)
 *     _Stodx @ 0x1800059B0 (_Stodx.c)
 *     _Stoldx @ 0x180006020 (_Stoldx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Stopfx(unsigned __int8 **a1, _QWORD *a2)
{
  unsigned __int8 *v2; // rbx
  int v5; // edi
  char v6; // al
  unsigned int v7; // edi
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  _BYTE *v11; // rsi
  __int64 result; // rax

  v2 = *a1;
  v5 = 0;
  while ( isspace(*v2) )
    ++v2;
  v6 = *v2;
  if ( *v2 == 45 )
  {
    v5 = 8;
LABEL_7:
    v6 = *++v2;
    goto LABEL_8;
  }
  if ( v6 == 43 )
    goto LABEL_7;
LABEL_8:
  if ( v6 == 110 || *v2 == 78 )
  {
    if ( (v2[1] == 97 || v2[1] == 65) && (v2[2] == 110 || v2[2] == 78) )
    {
      v2 += 3;
      v7 = 4;
      v11 = v2;
      if ( *v2 == 40 )
      {
        do
        {
          do
            ++v11;
          while ( isalnum((unsigned __int8)*v11) );
        }
        while ( *v11 == 95 );
        if ( *v11 == 41 )
          v2 = v11 + 1;
      }
      goto LABEL_37;
    }
  }
  else
  {
    if ( ((*v2 - 73) & 0xDF) != 0 )
    {
      v7 = v5 | 1;
      goto LABEL_39;
    }
    if ( (v2[1] == 110 || v2[1] == 78) && (v2[2] == 102 || v2[2] == 70) )
    {
      v2 += 3;
      v7 = v5 | 3;
      if ( *v2 == 105 || *v2 == 73 )
      {
        v8 = v2[1];
        if ( v8 == 110 || v8 == 78 )
        {
          v9 = v2[2];
          if ( v9 == 105 || v9 == 73 )
          {
            v10 = v2[3];
            if ( (v10 == 116 || v10 == 84) && (v2[4] == 121 || v2[4] == 89) )
              v2 += 5;
          }
        }
      }
      goto LABEL_37;
    }
  }
  v2 = *a1;
  v7 = 0;
LABEL_37:
  if ( a2 )
    *a2 = v2;
LABEL_39:
  result = v7;
  *a1 = v2;
  return result;
}
