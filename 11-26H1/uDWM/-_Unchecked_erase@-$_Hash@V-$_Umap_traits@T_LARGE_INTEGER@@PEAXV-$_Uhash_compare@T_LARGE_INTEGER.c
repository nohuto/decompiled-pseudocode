/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800E4DAC
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800E4FB0 (-clear@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LARGE_INTEGER@@U-$hash@T.c)
 * Callees:
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x18007868C (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800E4BCC (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LAR.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // rax
  __int64 i; // r10
  __int64 v10; // r11
  __int64 v11; // r15
  __int64 v12; // rax
  bool v13; // bl
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r13
  bool v17; // bl
  _QWORD *v18; // rax
  _QWORD *v20; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-18h]
  __int64 v22; // [rsp+30h] [rbp-10h]
  __int64 v24; // [rsp+88h] [rbp+48h]
  __int64 v25; // [rsp+90h] [rbp+50h]

  if ( a2 != a3 )
  {
    v5 = a1[3];
    v6 = *(_QWORD **)(a2 + 8);
    v7 = (_QWORD *)a1[1];
    v20 = a1 + 1;
    v21 = v6;
    v22 = a2;
    v8 = std::_Hash_representation<HWND__ *>(a2 + 16);
    v11 = 2 * (*(_QWORD *)(v10 + 48) & v8);
    v24 = *(_QWORD *)(v5 + 16 * (*(_QWORD *)(v10 + 48) & v8));
    v12 = *(_QWORD *)(v5 + 16 * (*(_QWORD *)(v10 + 48) & v8) + 8);
    v25 = v12;
    while ( 1 )
    {
      v13 = i == v12;
      std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Range_eraser::_Bump_erased(&v20);
      if ( v13 )
        break;
      i = v22;
      v12 = v25;
      if ( v22 == a3 )
      {
        if ( v24 == a2 )
          *(_QWORD *)(v5 + 8 * v11) = v22;
        goto LABEL_14;
      }
    }
    if ( v24 == a2 )
    {
      *(_QWORD *)(v5 + 8 * v11) = v7;
      v6 = v7;
    }
    *(_QWORD *)(v5 + 8 * v11 + 8) = v6;
    for ( i = v22; i != a3; *(_QWORD *)(v5 + 8 * v15 + 8) = v7 )
    {
      v14 = std::_Hash_representation<HWND__ *>(i + 16);
      v15 = 2 * (a1[6] & v14);
      v16 = *(_QWORD *)(v5 + 16 * (a1[6] & v14) + 8);
      while ( 1 )
      {
        v17 = i == v16;
        std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Range_eraser::_Bump_erased(&v20);
        i = v22;
        if ( v17 )
          break;
        if ( v22 == a3 )
        {
          *(_QWORD *)(v5 + 8 * v15) = v22;
          goto LABEL_14;
        }
      }
      *(_QWORD *)(v5 + 8 * v15) = v7;
    }
LABEL_14:
    v18 = v21;
    *v21 = i;
    *(_QWORD *)(i + 8) = v18;
  }
  return a3;
}
