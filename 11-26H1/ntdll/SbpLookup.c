/*
 * XREFs of SbpLookup @ 0x1801594A8
 * Callers:
 *     SbpResolveBasedOnName @ 0x180084D68 (SbpResolveBasedOnName.c)
 * Callees:
 *     _strnicmp @ 0x1801286B0 (_strnicmp.c)
 */

__int64 __fastcall SbpLookup(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned int *v11; // r11
  unsigned int i; // eax
  unsigned __int16 *v13; // rdx
  int v14; // r10d
  int v15; // r9d

  v2 = *(unsigned int *)(a1 + 60);
  v3 = 0;
  v6 = *(unsigned __int16 *)(v2 + a1 + 6);
  v7 = *(unsigned __int16 *)(v2 + a1 + 20) + v2 + a1 + 24;
  while ( v3 < v6 )
  {
    if ( !strnicmp(".sb_data", (const char *)v7, 8uLL) )
    {
      v8 = *(_DWORD *)(v7 + 16);
      v9 = a1 + *(unsigned int *)(v7 + 12);
      if ( *(_DWORD *)(v7 + 8) <= v8 )
        v8 = *(_DWORD *)(v7 + 8);
      v10 = v9 + v8;
      while ( v9 < v10 )
      {
        if ( *(_DWORD *)v9 == 1165184107 )
        {
          v11 = *(unsigned int **)(v9 + 16);
          if ( v11 )
          {
            for ( i = 0; i < *v11; ++i )
            {
              v13 = a2;
              do
              {
                v14 = *(unsigned __int16 *)((char *)v13 + *(_QWORD *)&v11[4 * i + 2] - (_QWORD)a2);
                v15 = *v13 - v14;
                if ( v15 )
                  break;
                ++v13;
              }
              while ( v14 );
              if ( !v15 )
              {
                _mm_lfence();
                return *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL * i + 16);
              }
            }
          }
        }
        v9 += 40LL;
      }
      return 0LL;
    }
    ++v3;
    v7 += 40LL;
  }
  return 0LL;
}
