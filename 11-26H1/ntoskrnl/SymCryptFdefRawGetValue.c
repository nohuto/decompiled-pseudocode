/*
 * XREFs of SymCryptFdefRawGetValue @ 0x14056FF94
 * Callers:
 *     SymCryptFdefDecideModulusType @ 0x14056E118 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefModElementGetValue @ 0x14056E6AC (SymCryptFdefModElementGetValue.c)
 *     SymCryptFdefIntGetValue @ 0x14056FD80 (SymCryptFdefIntGetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawGetValue(__int64 a1, int a2, _BYTE *a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // ecx
  __int64 v8; // r10
  unsigned int v9; // edx
  unsigned int v10; // edi
  unsigned int i; // eax
  int v12; // r11d

  v5 = 16 * a2;
  if ( a5 == 1 )
  {
    v8 = 1LL;
  }
  else
  {
    if ( a5 != 2 )
      return 32782;
    a3 = &a3[a4 - 1];
    v8 = -1LL;
  }
  v7 = 0;
  v9 = 0;
  if ( v5 )
  {
    while ( 2 )
    {
      v10 = *(_DWORD *)(a1 + 4LL * v9);
      for ( i = 0; i < 4; ++i )
      {
        v12 = (unsigned __int8)v10;
        v10 >>= 8;
        if ( a4 )
        {
          --a4;
          *a3 = v12;
          a3 += v8;
        }
        else if ( v12 )
        {
          return 32781;
        }
      }
      if ( ++v9 < v5 )
        continue;
      break;
    }
  }
  for ( ; a4; --a4 )
  {
    *a3 = 0;
    a3 += v8;
  }
  return v7;
}
