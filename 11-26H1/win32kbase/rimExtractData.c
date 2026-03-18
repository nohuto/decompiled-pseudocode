/*
 * XREFs of rimExtractData @ 0x1400F874C
 * Callers:
 *     rimExtractTouchInfo @ 0x1400F74A4 (rimExtractTouchInfo.c)
 *     rimExtractPenInfo @ 0x1400F8FD0 (rimExtractPenInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimExtractData(__int64 a1, __int16 a2, __int16 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  unsigned int i; // r11d
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // r11d
  unsigned int v13; // r9d
  __int64 v14; // rax
  unsigned int v15; // r8d
  int v17; // edx
  int v18; // eax

  v5 = 0;
  for ( i = 0; i < 6; ++i )
  {
    v10 = 2LL * i;
    if ( *(_WORD *)(a1 + 16LL * i + 28) == a2 && *(_WORD *)(a1 + 16LL * i + 30) == a3 )
    {
      v11 = *(unsigned int *)(a1 + 16 * (i + 2LL));
      if ( (_DWORD)v11 != -1 )
      {
        v12 = *(_DWORD *)(a1 + 16LL * i + 40);
        v13 = *(_DWORD *)(a1 + 8 * v10 + 36);
        v14 = 60 * v11;
        v5 = *(_DWORD *)(60 * v11 + a1 + 460);
        v15 = *(_DWORD *)(a1 + 8 * v10 + 40) - v13;
        if ( v15 )
        {
          v17 = *(_DWORD *)(v14 + a1 + 444);
          v18 = *(_DWORD *)(v14 + a1 + 440);
          if ( v17 != v18 )
          {
            if ( (int)v5 < v18 )
            {
              v5 = v13;
            }
            else if ( (int)v5 > v17 )
            {
              v5 = v12;
            }
            else
            {
              v5 = v13 + (int)(v15 * (v5 - v18)) / (v17 - v18);
            }
          }
        }
        if ( a5 )
          *a5 |= a4;
        return v5;
      }
    }
  }
  return v5;
}
