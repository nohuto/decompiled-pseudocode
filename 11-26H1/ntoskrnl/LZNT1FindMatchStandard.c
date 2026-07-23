/*
 * XREFs of LZNT1FindMatchStandard @ 0x140C088B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchStandard(char *a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // r15
  unsigned int v5; // r8d
  unsigned int v6; // r12d
  unsigned int v7; // r10d
  int v8; // ebp
  int v9; // r14d
  char v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdi
  _BYTE *v13; // rdx
  unsigned __int64 v14; // r9
  _BYTE *v15; // r14
  _BYTE *v17; // rbp

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  v6 = *(_DWORD *)(a2 + 16);
  v7 = 0;
  v8 = (unsigned __int8)a1[1];
  v9 = (unsigned __int8)a1[2];
  v10 = *a1;
  v11 = ((-24993 * (v9 ^ (16 * (v8 ^ (16 * (unsigned __int8)*a1))))) >> 4) & 0xFFF;
  v12 = a2 + 16LL * (unsigned int)v11;
  v13 = *(_BYTE **)(v12 + 40);
  v14 = *(_QWORD *)(a2 + 16 * (v11 + 2));
  if ( v14 >= v2 && v14 < (unsigned __int64)a1 && *(_BYTE *)v14 == v10 && *(_WORD *)(v14 + 1) == __PAIR16__(v9, v8) )
  {
    v5 = 3;
    if ( v6 > 3 )
    {
      v15 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[v5] >= v4 )
          break;
        if ( *v15 != v15[v14 - (_QWORD)a1] )
          break;
        ++v5;
        ++v15;
      }
      while ( v5 < v6 );
      LOBYTE(v9) = a1[2];
    }
  }
  if ( (unsigned __int64)v13 >= v2 && v13 < a1 && *v13 == v10 && v13[1] == (_BYTE)v8 && v13[2] == (_BYTE)v9 )
  {
    v7 = 3;
    if ( v6 > 3 )
    {
      v17 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[v7] >= v4 )
          break;
        if ( *v17 != v17[v13 - a1] )
          break;
        ++v7;
        ++v17;
      }
      while ( v7 < v6 );
    }
  }
  *(_QWORD *)(v12 + 40) = v14;
  *(_QWORD *)(a2 + 16 * (v11 + 2)) = a1;
  if ( v5 < v7 )
  {
    *(_QWORD *)(a2 + 24) = v13;
    return v7;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = v14;
    return v5;
  }
}
