/*
 * XREFs of ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18008A9E0
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18005C7F0 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x180090970 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18004DFC8 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::~SubscriptionList(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rcx

  LockSemaphore = this[1].LockSemaphore;
  this[1].LockSemaphore = 0LL;
  if ( LockSemaphore )
    MemoryFree(LockSemaphore);
  DeleteCriticalSection(this);
}
