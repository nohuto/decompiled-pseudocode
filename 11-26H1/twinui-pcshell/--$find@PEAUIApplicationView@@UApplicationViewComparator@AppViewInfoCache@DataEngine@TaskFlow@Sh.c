/*
 * XREFs of ??$find@PEAUIApplicationView@@UApplicationViewComparator@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@$0A@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@1@AEBQEAUIApplicationView@@@Z @ 0x1803FB2BC
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1803FCC40 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>,0>>::find<IApplicationView *,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,0>(
        __int64 **a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // r10
  __int64 *v6; // rax

  v3 = *a1;
  v4 = v3;
  v5 = (__int64 *)v3[1];
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      v6 = v5 + 2;
      if ( (unsigned __int64)v5[4] >= *a3 )
      {
        v6 = v5;
        v4 = v5;
      }
      v5 = (__int64 *)*v6;
    }
    while ( !*(_BYTE *)(*v6 + 25) );
  }
  if ( *((_BYTE *)v4 + 25) || *a3 < (unsigned __int64)v4[4] )
    v4 = v3;
  *a2 = v4;
  return a2;
}
