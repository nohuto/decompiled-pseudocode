/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18002C654
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18002BBE0 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18002C810 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x1800A5514 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 */

__int64 *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int8 *v5; // rsi
  __int64 v6; // r15
  unsigned __int8 **v7; // r14
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // r12
  __int64 *v11; // rcx
  __int64 *v12; // rbx
  unsigned __int8 **v13; // rax
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 *v17; // rcx
  __int64 *v18; // rbx
  __int64 *v20; // [rsp+78h] [rbp+10h]
  __int64 *v21; // [rsp+78h] [rbp+10h]
  unsigned __int8 **v22; // [rsp+80h] [rbp+18h]
  __int64 *v23; // [rsp+88h] [rbp+20h]

  if ( a2 != a3 )
  {
    v5 = (unsigned __int8 *)a2;
    v6 = a1[3];
    v7 = (unsigned __int8 **)a2[1];
    v22 = (unsigned __int8 **)a1[1];
    v8 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()((unsigned __int8 *)a2 + 16);
    v10 = 2 * (*(_QWORD *)(v9 + 48) & v8);
    v20 = *(__int64 **)(v6 + 16 * (*(_QWORD *)(v9 + 48) & v8));
    v23 = *(__int64 **)(v6 + 16 * (*(_QWORD *)(v9 + 48) & v8) + 8);
    do
    {
      v11 = (__int64 *)(v5 + 24);
      v12 = (__int64 *)v5;
      v5 = *(unsigned __int8 **)v5;
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v11);
      std::_Deallocate<16>(v12, 48LL);
      --a1[2];
      if ( v12 == v23 )
      {
        if ( v20 == a2 )
        {
          *(_QWORD *)(v6 + 8 * v10) = v22;
          v13 = v22;
        }
        else
        {
          v13 = v7;
        }
        *(_QWORD *)(v6 + 8 * v10 + 8) = v13;
        while ( v5 != (unsigned __int8 *)a3 )
        {
          v15 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()(v5 + 16);
          v10 = 2 * (*(_QWORD *)(v16 + 48) & v15);
          v21 = *(__int64 **)(v6 + 16 * (*(_QWORD *)(v16 + 48) & v15) + 8);
          while ( 1 )
          {
            v17 = (__int64 *)(v5 + 24);
            v18 = (__int64 *)v5;
            v5 = *(unsigned __int8 **)v5;
            std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v17);
            std::_Deallocate<16>(v18, 48LL);
            --a1[2];
            if ( v18 == v21 )
              break;
            if ( v5 == (unsigned __int8 *)a3 )
              goto LABEL_13;
          }
          *(_QWORD *)(v6 + 8 * v10) = v22;
          *(_QWORD *)(v6 + 8 * v10 + 8) = v22;
        }
        goto LABEL_8;
      }
    }
    while ( v5 != (unsigned __int8 *)a3 );
    if ( v20 == a2 )
LABEL_13:
      *(_QWORD *)(v6 + 8 * v10) = v5;
LABEL_8:
    *v7 = v5;
    *((_QWORD *)v5 + 1) = v7;
  }
  return a3;
}
