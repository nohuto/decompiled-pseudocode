/*
 * XREFs of ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x18022E658
 * Callers:
 *     ?Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x180242190 (-Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoData.c)
 *     ?OnDisconnected@DataProviderProxy@@MEAAJXZ @ 0x180244490 (-OnDisconnected@DataProviderProxy@@MEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1802078A8 (-find@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18022E27C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataProviderManager::RemoveDataProvider(DataProviderManager *this, struct DataProviderProxy *a2)
{
  char *v2; // rdi
  int v4; // ebx
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v8; // rax
  __int64 *v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+34h] [rbp+Ch]
  unsigned __int8 *v16; // [rsp+38h] [rbp+10h] BYREF

  v2 = (char *)a2 + 8;
  v4 = *(_DWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 72LL))((char *)a2 + 8);
  v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 72LL))(v2);
  v14 = v4;
  v15 = *(_DWORD *)(v5 + 4);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find(
    (_QWORD *)this + 5,
    (__int64 **)&v16,
    (const unsigned __int8 *)&v14);
  v6 = (__int64 *)*((_QWORD *)this + 6);
  if ( v16 == (unsigned __int8 *)v6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    v8 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()(v16 + 16);
    v10 = *((_QWORD *)this + 8);
    v11 = 2 * (*((_QWORD *)this + 11) & v8);
    if ( *(__int64 **)(v10 + 16 * (*((_QWORD *)this + 11) & v8) + 8) == v9 )
    {
      if ( *(__int64 **)(v10 + 16 * (*((_QWORD *)this + 11) & v8)) == v9 )
        *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 11) & v8)) = v6;
      else
        v6 = (__int64 *)v9[1];
      *(_QWORD *)(v10 + 8 * v11 + 8) = v6;
    }
    else if ( *(__int64 **)(v10 + 16 * (*((_QWORD *)this + 11) & v8)) == v9 )
    {
      *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 11) & v8)) = *v9;
    }
    v12 = *v9;
    --*((_QWORD *)this + 7);
    *(_QWORD *)v9[1] = v12;
    *(_QWORD *)(v12 + 8) = v9[1];
    std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>>>(
      v12,
      v9);
    return 0LL;
  }
}
