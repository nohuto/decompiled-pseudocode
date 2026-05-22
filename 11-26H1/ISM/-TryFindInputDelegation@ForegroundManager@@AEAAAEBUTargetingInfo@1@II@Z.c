/*
 * XREFs of ?TryFindInputDelegation@ForegroundManager@@AEAAAEBUTargetingInfo@1@II@Z @ 0x18004A558
 * Callers:
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18004A3C4 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18004A79C (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_com.c)
 *     ?AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800ABA9C (-AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II.c)
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800ABB40 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800AE980 (-count@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$h.c)
 */

const struct ForegroundManager::TargetingInfo *__fastcall ForegroundManager::TryFindInputDelegation(
        ForegroundManager *this,
        unsigned int a2,
        unsigned int a3)
{
  char *v4; // rbx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rbp
  ForegroundManager *v6; // rcx
  __int64 **v7; // rdi
  __int64 *i; // rbx
  __int64 **v9; // rdi
  unsigned int *v11; // r8
  char *v12; // rcx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a2;
  v4 = (char *)this + 152;
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
         v4,
         &v14) )
  {
    v11 = &v14;
    v12 = (char *)this + 152;
    return (const struct ForegroundManager::TargetingInfo *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                                                                          v12,
                                                                          v13,
                                                                          v11)
                                                           + 24LL);
  }
  if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
         (char *)this + 88,
         &v15) )
  {
    v11 = &v15;
    v12 = (char *)this + 88;
    return (const struct ForegroundManager::TargetingInfo *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                                                                          v12,
                                                                          v13,
                                                                          v11)
                                                           + 24LL);
  }
  v7 = (__int64 **)*((_QWORD *)this + 20);
  for ( i = *v7; i != (__int64 *)v7; i = (__int64 *)*i )
  {
    if ( (i[5] & 0x20) != 0
      && ForegroundManager::AreViewIdsInSameCompositeApp(v6, ViewHierarchy, v14, *((_DWORD *)i + 4)) )
    {
      return (const struct ForegroundManager::TargetingInfo *)(i + 3);
    }
  }
  v9 = (__int64 **)*((_QWORD *)this + 12);
  for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
  {
    if ( (i[5] & 0x20) != 0
      && ForegroundManager::AreProcessIdsInSameCompositeApp(this, ViewHierarchy, v15, *((_DWORD *)i + 4)) )
    {
      return (const struct ForegroundManager::TargetingInfo *)(i + 3);
    }
  }
  return (const struct ForegroundManager::TargetingInfo *)&ForegroundManager::TargetingInfo::EmptyTarget;
}
