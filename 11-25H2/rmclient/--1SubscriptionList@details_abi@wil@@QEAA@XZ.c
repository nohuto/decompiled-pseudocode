/*
 * XREFs of ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180013710
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18000C9C8 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x180016234 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x18000CAD0 (-reset@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::~SubscriptionList(struct _RTL_CRITICAL_SECTION *this)
{
  wistd::unique_ptr<void,wil::process_heap_deleter>::reset(&this[1].LockSemaphore, 0LL);
  DeleteCriticalSection(this);
}
