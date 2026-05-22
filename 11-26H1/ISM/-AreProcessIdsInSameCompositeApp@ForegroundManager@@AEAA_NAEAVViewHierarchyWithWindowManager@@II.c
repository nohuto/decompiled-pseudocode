/*
 * XREFs of ?AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800ABA9C
 * Callers:
 *     ?TryFindInputDelegation@ForegroundManager@@AEAAAEBUTargetingInfo@1@II@Z @ 0x18004A558 (-TryFindInputDelegation@ForegroundManager@@AEAAAEBUTargetingInfo@1@II@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180026E04 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18004A690 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800AC860 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 *     ?count@?$_Hash@V?$_Umap_traits@IV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x1800AE9C0 (-count@-$_Hash@V-$_Umap_traits@IV-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator.c)
 */

char __fastcall ForegroundManager::AreProcessIdsInSameCompositeApp(
        ForegroundManager *this,
        struct ViewHierarchyWithWindowManager *a2,
        int a3,
        unsigned int a4)
{
  _QWORD *v7; // r14
  _QWORD *i; // rbx
  unsigned int ViewIdFromWindowId; // eax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  if ( a3 == a4 )
    return 1;
  if ( std::_Hash<std::_Umap_traits<unsigned int,std::unordered_set<unsigned __int64>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>,0>>::count(
         (char *)this + 24,
         &v12) )
  {
    v7 = *(_QWORD **)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,std::unordered_set<unsigned __int64>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>,0>>::_Try_emplace<unsigned int const &,>(
                                   (__int64)this + 24,
                                   (__int64)v11,
                                   (unsigned __int8 *)&v12)
                    + 32LL);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    {
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(a2, i[2]);
      if ( ViewIdFromWindowId
        && ForegroundManager::IsProcessIDInSameCompositeAppAsView(this, a2, ViewIdFromWindowId, a4) )
      {
        return 1;
      }
    }
  }
  return 0;
}
