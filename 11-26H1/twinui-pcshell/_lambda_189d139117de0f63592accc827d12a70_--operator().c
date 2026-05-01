/*
 * XREFs of _lambda_189d139117de0f63592accc827d12a70_::operator() @ 0x1803436BC
 * Callers:
 *     wil::details::lambda_call__lambda_189d139117de0f63592accc827d12a70___::_lambda_call__lambda_189d139117de0f63592accc827d12a70___ @ 0x1803421F0 (wil--details--lambda_call__lambda_189d139117de0f63592accc827d12a70___--_lambda_call__lambda_189d.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x18034C420 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1803591D8 (-erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlay.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18035948C (-find@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayE.c)
 */

void __fastcall lambda_189d139117de0f63592accc827d12a70_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rdx
  PVOID *v3; // rax
  RTL_SRWLOCK *v4; // rcx
  RTL_SRWLOCK *v5; // [rsp+20h] [rbp-18h] BYREF
  char v6[16]; // [rsp+28h] [rbp-10h] BYREF

  v2 = *a1 + 83;
  v5 = 0LL;
  wil::AcquireSRWLockExclusive(&v5, v2);
  v3 = (PVOID *)std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>>,0>>::find(
                  &(*a1)[85],
                  v6,
                  a1[1]);
  v4 = *a1 + 85;
  if ( *v3 != v4->Ptr )
    std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>>,0>>::erase(
      v4,
      a1[1]);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
