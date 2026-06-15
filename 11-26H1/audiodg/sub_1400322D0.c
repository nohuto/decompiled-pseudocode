/*
 * XREFs of sub_1400322D0 @ 0x1400322D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1400322D0(__int64 a1, int a2, char a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  unsigned int v7; // r8d
  unsigned __int8 v8; // r9
  __int64 v9; // rdx
  bool v10; // r11
  int v11; // edx
  int *v12; // r9
  int v13; // eax
  int v14; // eax

  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *(_BYTE *)(a7 + 40) = a3;
        v7 = 0;
        *(_QWORD *)(a7 + 24) = a5;
        *(_QWORD *)(a7 + 16) = a4;
        for ( *(_DWORD *)(a7 + 36) = 1; v7 < *(unsigned __int16 *)(a7 + 42); ++v7 )
        {
          v8 = *(_BYTE *)(a7 + 40);
          v9 = *(_QWORD *)(*(_QWORD *)(a7 + 56) + 8LL * v7);
          v10 = (*(_BYTE *)(v7 + *(_QWORD *)(a7 + 64)) <= v8 || !v8)
             && (!v9 || (v9 & *(_QWORD *)(a7 + 16)) != 0 && (v9 & *(_QWORD *)(a7 + 24)) == *(_QWORD *)(a7 + 24));
          v11 = 1 << v7;
          v12 = (int *)(*(_QWORD *)(a7 + 48) + 4 * ((unsigned __int64)v7 >> 5));
          v13 = *v12;
          if ( v10 )
            v14 = v11 | v13;
          else
            v14 = ~v11 & v13;
          *v12 = v14;
        }
      }
    }
    else
    {
      *(_DWORD *)(a7 + 36) = 0;
      *(_BYTE *)(a7 + 40) = 0;
      *(_QWORD *)(a7 + 16) = 0LL;
      *(_QWORD *)(a7 + 24) = 0LL;
      if ( *(_WORD *)(a7 + 42) )
        memset(*(void **)(a7 + 48), 0, 4LL * ((*(unsigned __int16 *)(a7 + 42) - 1) / 32 + 1));
    }
  }
}
