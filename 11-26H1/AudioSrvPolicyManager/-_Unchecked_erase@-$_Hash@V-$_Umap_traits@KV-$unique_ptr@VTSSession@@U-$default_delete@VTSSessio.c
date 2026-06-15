/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180045220
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180045354 (-clear@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@s.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@K$00@std@@SA_KAEBK@Z @ 0x18002D920 (--R-$_Conditionally_enabled_hash@K$00@std@@SA_KAEBK@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180044CF4 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Unchecked_erase(
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
  __int64 v12; // r11
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  bool v16; // bl
  _QWORD *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r12
  bool v23; // bl
  _QWORD *v24; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = a1[3];
    v8 = (_QWORD *)a1[1];
    v24 = a1 + 1;
    v25 = v6;
    v26 = a2;
    v9 = std::_Conditionally_enabled_hash<unsigned long,1>::operator()((unsigned __int8 *)(a2 + 16));
    v13 = 2 * (a1[6] & v9);
    v14 = *(_QWORD *)(v7 + 16 * (a1[6] & v9) + 8);
    v15 = *(_QWORD *)(v7 + 8 * v13);
    v28 = *(_QWORD *)(v7 + 8 * v13 + 8);
    while ( 1 )
    {
      v16 = v12 == v14;
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Range_eraser::_Bump_erased(
        &v24,
        v10,
        v11);
      if ( v16 )
        break;
      v12 = v26;
      v14 = v28;
      if ( v26 == a3 )
      {
        if ( v15 == a2 )
LABEL_6:
          *(_QWORD *)(v7 + 8 * v13) = v12;
        goto LABEL_7;
      }
    }
    if ( v15 == a2 )
    {
      *(_QWORD *)(v7 + 8 * v13) = v8;
      v6 = v8;
    }
    for ( *(_QWORD *)(v7 + 8 * v13 + 8) = v6; ; *(_QWORD *)(v7 + 8 * v13 + 8) = v8 )
    {
      v12 = v26;
      if ( v26 == a3 )
        break;
      v19 = std::_Conditionally_enabled_hash<unsigned long,1>::operator()((unsigned __int8 *)(v26 + 16));
      v13 = 2 * (a1[6] & v19);
      v22 = *(_QWORD *)(v7 + 16 * (a1[6] & v19) + 8);
      while ( 1 )
      {
        v23 = v12 == v22;
        std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Range_eraser::_Bump_erased(
          &v24,
          v20,
          v21);
        if ( v23 )
          break;
        v12 = v26;
        if ( v26 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v7 + 8 * v13) = v8;
    }
LABEL_7:
    v17 = v25;
    *v25 = v12;
    *(_QWORD *)(v12 + 8) = v17;
  }
  return a3;
}
