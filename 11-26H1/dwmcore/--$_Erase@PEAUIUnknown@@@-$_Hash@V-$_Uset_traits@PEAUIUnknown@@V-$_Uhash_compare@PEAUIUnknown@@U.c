/*
 * XREFs of ??$_Erase@PEAUIUnknown@@@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@AEAA_KAEBQEAUIUnknown@@@Z @ 0x180269C28
 * Callers:
 *     ?OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180269EC0 (-OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180017230 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_U.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Erase<IUnknown *>(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 *v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v12; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()(a2);
  v5 = std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Find_last<unsigned __int64>(
         a1,
         &v12,
         v4,
         v3)[1];
  if ( !v5 )
    return 0LL;
  v7 = a1[3];
  v8 = 2 * (v6 & a1[6]);
  if ( *(__int64 **)(v7 + 16 * (v6 & a1[6]) + 8) == v5 )
  {
    if ( *(__int64 **)(v7 + 16 * (v6 & a1[6])) == v5 )
    {
      v9 = a1[1];
      *(_QWORD *)(v7 + 16 * (v6 & a1[6])) = v9;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(__int64 **)(v7 + 16 * (v6 & a1[6])) == v5 )
  {
    *(_QWORD *)(v7 + 16 * (v6 & a1[6])) = *v5;
  }
  v10 = *v5;
  --a1[2];
  *(_QWORD *)v5[1] = v10;
  *(_QWORD *)(v10 + 8) = v5[1];
  std::_Deallocate<16>(v5, 0x18uLL);
  return 1LL;
}
