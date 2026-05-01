/*
 * XREFs of ??0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z @ 0x180131818
 * Callers:
 *     ?get_PrevChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x1803012B0 (-get_PrevChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEA.c)
 *     _lambda_00f17e8f9cdc6e60e0c1a7e4e1826712_::operator() @ 0x180307D44 (_lambda_00f17e8f9cdc6e60e0c1a7e4e1826712_--operator().c)
 *     ?ProcessEntepriseIdChanged@CApplicationViewManager@@UEAAJK@Z @ 0x1803089B0 (-ProcessEntepriseIdChanged@CApplicationViewManager@@UEAAJK@Z.c)
 *     ?TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180308FF0 (-TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180309F40 (-GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationV.c)
 * Callees:
 *     <none>
 */

CAutoSRWSharedLock *__fastcall CAutoSRWSharedLock::CAutoSRWSharedLock(CAutoSRWSharedLock *this, RTL_SRWLOCK *a2)
{
  *(_QWORD *)this = a2;
  AcquireSRWLockShared(a2);
  return this;
}
