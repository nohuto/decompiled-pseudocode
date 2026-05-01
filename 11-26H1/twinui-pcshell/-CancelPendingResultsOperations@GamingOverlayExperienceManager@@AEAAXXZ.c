/*
 * XREFs of ?CancelPendingResultsOperations@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180345C54
 * Callers:
 *     ?OnGameBarWindowStateChanged@GamingOverlayExperienceManager@@AEAAXAEBUGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@AEBW4GameBarWindowState@3456@@Z @ 0x18034E7BC (-OnGameBarWindowStateChanged@GamingOverlayExperienceManager@@AEAAXAEBUGameBarWindowControl@Gamin.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1802B0D30 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180359194 (-clear@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlay.c)
 */

void __fastcall GamingOverlayExperienceManager::CancelPendingResultsOperations(RTL_SRWLOCK *this)
{
  __int64 v2; // rdx
  void *v3; // rdx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v5; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v6[2]; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  wil::AcquireSRWLockExclusive(&v5, this + 83);
  v2 = *(_QWORD *)this[85].Ptr;
  v4 = v2;
  while ( !*(_BYTE *)(v2 + 25) )
  {
    *(_OWORD *)v6 = 0LL;
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v6, (_QWORD *)(v2 + 40));
    if ( v6[0] )
      wil::details::SetEvent(*((wil::details **)v6[0] + 2), v3);
    if ( v6[1] )
      std::_Ref_count_base::_Decref(v6[1]);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(&v4);
    v2 = v4;
  }
  std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>>,0>>::clear(&this[85]);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
