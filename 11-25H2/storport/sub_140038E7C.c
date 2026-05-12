/*
 * XREFs of sub_140038E7C @ 0x140038E7C
 * Callers:
 *     sub_140068B90 @ 0x140068B90 (sub_140068B90.c)
 * Callees:
 *     sub_140038EFC @ 0x140038EFC (sub_140038EFC.c)
 */

char __fastcall sub_140038E7C(_BYTE *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  char result; // al
  int v6; // r8d
  int v7; // edx
  _BYTE *i; // rcx
  __int64 v9; // r9
  char v10; // dl
  __int64 v11; // rcx

  v3 = a3;
  *a1 = 0;
  result = sub_140038EFC();
  if ( v6 )
  {
    if ( (v3 & 1) == 0 )
    {
      v9 = 0LL;
      if ( (_DWORD)v3 != 1 )
      {
        do
        {
          v10 = a1[v9];
          v11 = (unsigned int)(v9 + 1);
          result = a1[v11];
          a1[v9] = result;
          v9 = (unsigned int)(v9 + 2);
          a1[v11] = v10;
        }
        while ( (unsigned int)v9 < (int)v3 - 1 );
      }
    }
  }
  if ( (_DWORD)v3 != -1 )
  {
    v7 = v3 - 1;
    a1[v3] = 0;
    if ( (int)v3 - 1 >= 0 )
    {
      for ( i = &a1[v7]; i - a1 >= 0; --i )
      {
        if ( *i == 32 )
        {
          *i = 0;
        }
        else if ( *i )
        {
          break;
        }
        --v7;
      }
    }
    result = v7;
    a1[v7 + 1] = 0;
  }
  return result;
}
