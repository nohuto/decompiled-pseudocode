/*
 * XREFs of ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18033DFF8
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18033EAE8 (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayE.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1803532F4 (-find@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayE.c)
 *     ??$_Emplace@AEBIAEBUhstring@winrt@@@?$_Tree@V?$_Tmap_traits@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@std@@_N@1@AEBIAEBUhstring@winrt@@@Z @ 0x18061ED04 (--$_Emplace@AEBIAEBUhstring@winrt@@@-$_Tree@V-$_Tmap_traits@IUhstring@winrt@@U-$less@I@std@@V-$a.c)
 *     ??$_Find@I@?$_Tree@V?$_Tmap_traits@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@AEBI@Z @ 0x18061F27C (--$_Find@I@-$_Tree@V-$_Tmap_traits@IUhstring@winrt@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUhs.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>>,0>>::_Find_lower_bound<unsigned int>(
        __int64 *a1,
        _QWORD *a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx

  *a2 = *(_QWORD *)(*a1 + 8);
  a2[1] = 0LL;
  v3 = *a1;
  v4 = (__int64 *)*a2;
  a2[2] = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    *a2 = v4;
    if ( *((_DWORD *)v4 + 8) >= *a3 )
    {
      *((_DWORD *)a2 + 2) = 1;
      a2[2] = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      *((_DWORD *)a2 + 2) = 0;
      v4 = (__int64 *)v4[2];
    }
  }
  return a2;
}
