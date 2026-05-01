/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1803532F4
 * Callers:
 *     _lambda_ed46931ed32aeb8f30cf29d278006b78_::operator() @ 0x18034232C (_lambda_ed46931ed32aeb8f30cf29d278006b78_--operator().c)
 *     ?Acknowledge@GamingOverlayExperienceManager@@UEAAJI@Z @ 0x180342AE0 (-Acknowledge@GamingOverlayExperienceManager@@UEAAJI@Z.c)
 *     ?ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18034DD40 (-ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@W.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18033DFF8 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@ULaunchForResultsQueuedOperationDa.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>>,0>>::find(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  _DWORD *v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>>,0>>::_Find_lower_bound<unsigned int>(
    a1,
    &v8,
    a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *v4 < *(_DWORD *)(v9 + 32) )
    v6 = *a1;
  *v5 = v6;
  return v5;
}
