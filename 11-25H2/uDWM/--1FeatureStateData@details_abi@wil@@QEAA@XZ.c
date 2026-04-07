/*
 * XREFs of ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x18009D26C
 * Callers:
 *     ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18009D11C (--1-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180097794 (--1SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18009E56C (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details_abi::FeatureStateData::~FeatureStateData(struct _RTL_CRITICAL_SECTION *this)
{
  wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)this);
  wil::details_abi::SubscriptionList::~SubscriptionList(this + 5);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)&this->LockCount);
}
