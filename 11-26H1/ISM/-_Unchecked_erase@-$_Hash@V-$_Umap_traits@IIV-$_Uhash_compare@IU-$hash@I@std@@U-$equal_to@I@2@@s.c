/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBII@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180080CB8
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180052E90 (-clear@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$allo.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18008A594 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_comp.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rbp
  __int64 **v6; // r15
  __int64 **v7; // r13
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // r12
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // r14
  __int64 *v16; // r15
  bool v17; // bl
  __int64 **v18; // rax
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 **v21; // [rsp+28h] [rbp-50h]
  __int64 *v22; // [rsp+30h] [rbp-48h]
  __int64 *v24; // [rsp+88h] [rbp+10h]
  __int64 *v25; // [rsp+90h] [rbp+18h]

  if ( a2 != a3 )
  {
    v5 = a1[3];
    v6 = (__int64 **)a2[1];
    v7 = (__int64 **)a1[1];
    v8 = a2;
    v20 = a1 + 1;
    v21 = v6;
    v9 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)a2 + 16);
    v11 = 2 * (*(_QWORD *)(v10 + 48) & v9);
    v24 = *(__int64 **)(v5 + 16 * (*(_QWORD *)(v10 + 48) & v9));
    v25 = *(__int64 **)(v5 + 16 * (*(_QWORD *)(v10 + 48) & v9) + 8);
    while ( 1 )
    {
      v12 = v8;
      v8 = (__int64 *)*v8;
      v22 = v8;
      std::_Deallocate<16>(v12, 24LL);
      --a1[2];
      if ( v12 == v25 )
        break;
      if ( v8 == a3 )
      {
        if ( v24 == a2 )
          *(_QWORD *)(v5 + 8 * v11) = v8;
        *v6 = v8;
        v8[1] = (__int64)v6;
        return a3;
      }
    }
    if ( v24 == a2 )
    {
      *(_QWORD *)(v5 + 8 * v11) = v7;
      v6 = v7;
    }
    *(_QWORD *)(v5 + 8 * v11 + 8) = v6;
    while ( v8 != a3 )
    {
      v13 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)v8 + 16);
      v15 = 2 * (*(_QWORD *)(v14 + 48) & v13);
      v16 = *(__int64 **)(v5 + 16 * (*(_QWORD *)(v14 + 48) & v13) + 8);
      while ( 1 )
      {
        v17 = v8 == v16;
        std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Range_eraser::_Bump_erased(&v20);
        v8 = v22;
        if ( v17 )
          break;
        if ( v22 == a3 )
        {
          *(_QWORD *)(v5 + 8 * v15) = v22;
          goto LABEL_16;
        }
      }
      *(_QWORD *)(v5 + 8 * v15) = v7;
      *(_QWORD *)(v5 + 8 * v15 + 8) = v7;
    }
LABEL_16:
    v18 = v21;
    *v21 = v8;
    v8[1] = (__int64)v18;
  }
  return a3;
}
