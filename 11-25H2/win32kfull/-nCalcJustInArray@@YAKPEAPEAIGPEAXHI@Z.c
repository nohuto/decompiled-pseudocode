/*
 * XREFs of ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x140311C98
 * Callers:
 *     ?GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x14031172C (-GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 */

__int64 __fastcall nCalcJustInArray(unsigned int **a1, unsigned __int16 a2, char *a3, int a4, unsigned int a5)
{
  char *v5; // rbp
  char *v6; // rsi
  int v7; // r12d
  int v8; // r15d
  unsigned int v9; // edi
  _DWORD *v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int *v16; // rax
  unsigned int *v17; // r8
  char *i; // rcx
  char *j; // rdx

  v5 = 0LL;
  v6 = 0LL;
  v7 = a2;
  v8 = 0;
  v9 = 0;
  v13 = a3;
  if ( a4 )
  {
    v6 = &a3[4 * a5];
    v8 = v7;
    if ( a3 < v6 )
    {
      do
      {
        v14 = v9 + 1;
        if ( *v13 != v7 )
          v14 = v9;
        ++v13;
        v9 = v14;
      }
      while ( v13 < (_DWORD *)v6 );
      goto LABEL_11;
    }
LABEL_24:
    *a1 = 0LL;
    return 0LL;
  }
  v5 = &a3[2 * a5];
  if ( a3 >= v5 )
    goto LABEL_24;
  do
  {
    v15 = v9 + 1;
    if ( *(_WORD *)v13 != (_WORD)v7 )
      v15 = v9;
    v13 = (_DWORD *)((char *)v13 + 2);
    v9 = v15;
  }
  while ( v13 < (_DWORD *)v5 );
LABEL_11:
  if ( !v9 )
    goto LABEL_24;
  v16 = (unsigned int *)PALLOCMEM(4 * v9, 2037147463LL);
  if ( !v16 )
    goto LABEL_24;
  v17 = v16;
  if ( a4 )
  {
    for ( i = a3; i < v6; i += 4 )
    {
      if ( *(_DWORD *)i == v8 )
        *v17++ = (i - a3) >> 2;
    }
  }
  else
  {
    for ( j = a3; j < v5; j += 2 )
    {
      if ( *(_WORD *)j == (_WORD)v7 )
        *v17++ = (j - a3) >> 1;
    }
  }
  *a1 = v16;
  return v9;
}
