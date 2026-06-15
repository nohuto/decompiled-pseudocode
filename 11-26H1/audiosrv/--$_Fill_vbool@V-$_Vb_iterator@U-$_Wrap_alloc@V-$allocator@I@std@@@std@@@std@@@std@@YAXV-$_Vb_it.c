/*
 * XREFs of ??$_Fill_vbool@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@@std@@YAXV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@_N@Z @ 0x180133770
 * Callers:
 *     ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_KAEB_N@Z @ 0x18013F4B4 (-_Insert_n@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocat.c)
 * Callees:
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

int *__fastcall std::_Fill_vbool<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
        int **a1,
        __int64 a2,
        char a3)
{
  char *v3; // rsi
  int *v5; // r9
  int *result; // rax
  int v7; // r14d
  __int64 v8; // rbp
  int v9; // r8d
  int v10; // r10d
  int v11; // ebx

  v3 = *(char **)a2;
  v5 = *a1;
  if ( *a1 != *(int **)a2 || (result = *(int **)(a2 + 8), a1[1] != result) )
  {
    v7 = *v5;
    v8 = *(_QWORD *)(a2 + 8);
    v9 = -1 << (char)a1[1];
    v10 = ~v9;
    v11 = -(a3 != 0);
    if ( v5 == (int *)v3 )
    {
      result = (int *)(v9 & (0xFFFFFFFF >> (32 - v8)) & v11 | v7 & (v10 | ~(0xFFFFFFFF >> (32 - v8))));
      *v5 = (int)result;
    }
    else
    {
      *v5 = v10 & v7 | v9 & v11;
      result = (int *)memset_0(v5 + 1, (unsigned __int8)-(a3 != 0), v3 - (char *)(v5 + 1));
      if ( v8 )
      {
        result = (int *)((0xFFFFFFFF >> (32 - v8)) & v11 | *(_DWORD *)v3 & ~(0xFFFFFFFF >> (32 - v8)));
        *(_DWORD *)v3 = (_DWORD)result;
      }
    }
  }
  return result;
}
