/*
 * XREFs of IopAddAddressRangeToRemovePagesArray @ 0x1405D7284
 * Callers:
 *     IopRemovePageDumpRange @ 0x1405CC57C (IopRemovePageDumpRange.c)
 * Callees:
 *     IopCompactRemovePagesArray @ 0x1405D7CCC (IopCompactRemovePagesArray.c)
 */

void __fastcall IopAddAddressRangeToRemovePagesArray(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // rbx
  _DWORD *v6; // rdx
  unsigned int v7; // r10d
  __int64 v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r11

  v3 = 0LL;
  if ( IopRemovePagesArray && a2 )
  {
    v5 = a1 + a2 - 1;
    if ( *(_DWORD *)IopRemovePagesArray == *(_DWORD *)(IopRemovePagesArray + 4) )
      IopCompactRemovePagesArray();
    v6 = (_DWORD *)IopRemovePagesArray;
    if ( *(_DWORD *)IopRemovePagesArray )
      v3 = *(_QWORD *)(IopRemovePagesArray + 16);
    v7 = 0;
    v8 = 0LL;
    while ( v7 < *(_DWORD *)IopRemovePagesArray )
    {
      v9 = *(_QWORD *)(IopRemovePagesArray + 16LL * v7 + 16);
      v10 = *(_QWORD *)(IopRemovePagesArray + 16LL * v7 + 8);
      if ( v9 < v3 )
        v8 = v7;
      v11 = v9 + v10;
      if ( v9 >= v3 )
        v9 = v3;
      v3 = v9;
      v12 = v11 - 1;
      if ( (v11 - 1 >= *(_QWORD *)(*(_QWORD *)(CrashdmpDumpBlock + 8) + 48LL) || a1 <= v11) && (!v10 || v5 >= v10 - 1) )
      {
        if ( a1 < v10 )
        {
          *(_QWORD *)(IopRemovePagesArray + 16LL * v7 + 8) = a1;
          if ( v5 > v12 )
            *(_QWORD *)&v6[4 * v7 + 4] = a2;
          else
            *(_QWORD *)&v6[4 * v7 + 4] = v11 - a1;
        }
        else if ( v5 > v12 )
        {
          *(_QWORD *)(IopRemovePagesArray + 16LL * v7 + 16) = v5 - v10 + 1;
        }
        return;
      }
      ++v7;
    }
    if ( v7 >= *(_DWORD *)(IopRemovePagesArray + 4) )
    {
      if ( v3 < a2 )
      {
        v14 = 2 * v8;
        *(_QWORD *)(IopRemovePagesArray + 8 * v14 + 8) = a1;
        *(_QWORD *)&v6[2 * v14 + 4] = a2;
      }
    }
    else
    {
      v13 = 2LL * v7;
      *(_QWORD *)(IopRemovePagesArray + 8 * v13 + 8) = a1;
      *(_QWORD *)&v6[2 * v13 + 4] = a2;
      ++*v6;
    }
  }
}
