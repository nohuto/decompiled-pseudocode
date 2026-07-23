/*
 * XREFs of HalpInterruptUpdateLinesPostSwap @ 0x140BF4928
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140BF47C0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptUpdateLinesPostSwap(__int64 a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // ebp
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // esi
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  int v22; // eax

  v5 = 0;
  if ( *(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 20) > 0 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      v12 = *(_QWORD *)(a1 + 40);
      v13 = *(_QWORD *)(a1 + 48);
      v14 = *(_DWORD *)(v11 + v12 + 24);
      if ( v14 == 4 )
      {
        if ( *(_DWORD *)(v11 + v12 + 32) == a2 )
          *(_DWORD *)(v11 + v12 + 32) = a3;
      }
      else if ( v14 == 5 && *a4 == 5 )
      {
        v15 = a4[2];
        v16 = *(_DWORD *)(v11 + v12 + 32);
        if ( (v15 & v16) != 0 )
        {
          v17 = v16 & ~v15;
          *(_DWORD *)(v11 + v12 + 32) = v17;
          if ( *a5 == 5 )
            *(_DWORD *)(v11 + v12 + 32) = a5[2] | v17;
        }
      }
      if ( *a4 == 6 && v14 == 6 )
      {
        v18 = a4[2];
        if ( *(_BYTE *)(v10 + v13 + 2) )
        {
          if ( *(_DWORD *)(v10 + v13 + 4) == v18 && (*(_DWORD *)(v10 + v13 + 8) & a4[3]) != 0 )
          {
            *(_DWORD *)(v11 + v12 + 36) |= a5[3];
            v22 = ~a4[3];
            v21 = (v22 & *(_DWORD *)(v10 + v13 + 8)) == 0;
            *(_DWORD *)(v10 + v13 + 8) &= v22;
            if ( v21 )
              *(_BYTE *)(v10 + v13 + 2) = 0;
          }
        }
        else if ( v18 == *(_DWORD *)(v11 + v12 + 32) )
        {
          if ( v18 == a5[2] )
          {
            v19 = *(_DWORD *)(v11 + v12 + 36) & ~a4[3];
            *(_DWORD *)(v11 + v12 + 36) = v19;
            v20 = a5[3] | v19;
          }
          else
          {
            *(_BYTE *)(v10 + v13 + 2) = 1;
            *(_DWORD *)(v10 + v13 + 4) = *(_DWORD *)(v11 + v12 + 32);
            v21 = (*(_DWORD *)(v11 + v12 + 36) & ~a4[3]) == 0;
            *(_DWORD *)(v10 + v13 + 8) = *(_DWORD *)(v11 + v12 + 36) & ~a4[3];
            if ( v21 )
              *(_BYTE *)(v10 + v13 + 2) = 0;
            *(_DWORD *)(v11 + v12 + 32) = a5[2];
            v20 = a5[3];
          }
          *(_DWORD *)(v11 + v12 + 36) = v20;
        }
      }
      ++v5;
      v11 += 56LL;
      v10 += 16LL;
    }
    while ( v5 < *(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 20) );
  }
  return 0LL;
}
