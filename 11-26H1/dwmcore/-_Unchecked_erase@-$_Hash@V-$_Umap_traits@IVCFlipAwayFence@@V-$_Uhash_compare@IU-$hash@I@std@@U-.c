/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1802A637C
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1802A64B0 (-clear@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@I$00@std@@SA_KAEBI@Z @ 0x180266F00 (--R-$_Conditionally_enabled_hash@I$00@std@@SA_KAEBI@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1802A61BC (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // r12
  __int64 v7; // rsi
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  bool v17; // bl
  _QWORD *v18; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  bool v25; // bl
  _QWORD *v26; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = a1[3];
    v8 = (_QWORD *)a1[1];
    v26 = a1 + 1;
    v27 = v6;
    v28 = a2;
    v9 = std::_Conditionally_enabled_hash<unsigned int,1>::operator()((unsigned __int8 *)(a2 + 16));
    v14 = 2 * (a1[6] & v9);
    v15 = *(_QWORD *)(v7 + 16 * (a1[6] & v9) + 8);
    v16 = *(_QWORD *)(v7 + 8 * v14);
    v30 = *(_QWORD *)(v7 + 8 * v14 + 8);
    while ( 1 )
    {
      v17 = v13 == v15;
      std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Range_eraser::_Bump_erased(
        &v26,
        v10,
        v11,
        v12);
      if ( v17 )
        break;
      v13 = v28;
      v15 = v30;
      if ( v28 == a3 )
      {
        if ( v16 == a2 )
LABEL_6:
          *(_QWORD *)(v7 + 8 * v14) = v13;
        goto LABEL_7;
      }
    }
    if ( v16 == a2 )
    {
      *(_QWORD *)(v7 + 8 * v14) = v8;
      v6 = v8;
    }
    for ( *(_QWORD *)(v7 + 8 * v14 + 8) = v6; ; *(_QWORD *)(v7 + 8 * v14 + 8) = v8 )
    {
      v13 = v28;
      if ( v28 == a3 )
        break;
      v20 = std::_Conditionally_enabled_hash<unsigned int,1>::operator()((unsigned __int8 *)(v28 + 16));
      v14 = 2 * (a1[6] & v20);
      v24 = *(_QWORD *)(v7 + 16 * (a1[6] & v20) + 8);
      while ( 1 )
      {
        v25 = v13 == v24;
        std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Range_eraser::_Bump_erased(
          &v26,
          v21,
          v22,
          v23);
        if ( v25 )
          break;
        v13 = v28;
        if ( v28 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v7 + 8 * v14) = v8;
    }
LABEL_7:
    v18 = v27;
    *v27 = v13;
    *(_QWORD *)(v13 + 8) = v18;
  }
  return a3;
}
