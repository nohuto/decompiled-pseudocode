/*
 * XREFs of ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180244BA8
 * Callers:
 *     ?RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180244B70 (-RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Reallocate@$00@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXAEA_K@Z @ 0x18010169C (--$_Reallocate@$00@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@st.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x18019DEE0 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1802078A8 (-find@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x18022E1F4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V21@@Z @ 0x180243F74 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KV-$ComPtr@VBamoDataS.c)
 */

__int64 __fastcall DataProviderProxy::RemoveSourceEntry(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  unsigned __int64 v3; // rbx
  __int64 *v4; // r8
  _QWORD *v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *i; // r8
  _QWORD *j; // rax
  __int64 v10; // rax
  char *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 Unique; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+40h] [rbp+18h] BYREF

  Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)a2);
  v3 = Unique;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find(
    (_QWORD *)this + 10,
    &v14,
    (const unsigned __int8 *)&Unique);
  v4 = v14;
  if ( v14 == *((__int64 **)this + 11) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderproxy.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    *(_QWORD *)(v14[3] + 192) = 0LL;
    std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>>>,0>(
      (_QWORD *)this + 10,
      &Unique,
      (__int64)v4);
    v6 = (_QWORD *)*((_QWORD *)this + 19);
    v7 = (_QWORD *)((char *)this + 144);
    for ( i = (_QWORD *)*((_QWORD *)this + 18); i != v6 && v3 != *i; ++i )
      ;
    if ( i != v6 )
    {
      for ( j = i + 1; j != v6; ++j )
      {
        if ( v3 != *j )
          *i++ = *j;
      }
      if ( i != v6 )
        *((_QWORD *)this + 19) = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
                                   v6,
                                   *((_QWORD *)this + 19),
                                   i);
    }
    v10 = *((_QWORD *)this + 19);
    if ( v10 != *((_QWORD *)this + 20) )
    {
      v11 = (char *)this + 144;
      if ( *v7 == v10 )
      {
        std::vector<CDataSourceReader *>::_Tidy((__int64)v11);
      }
      else
      {
        Unique = (v10 - *v7) >> 3;
        std::vector<CDataSourceReader *>::_Reallocate<1>((__int64)v11, (unsigned __int64 *)&Unique);
      }
    }
    return 0LL;
  }
}
