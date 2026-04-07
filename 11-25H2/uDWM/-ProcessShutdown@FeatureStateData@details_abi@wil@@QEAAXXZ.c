/*
 * XREFs of ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18009E56C
 * Callers:
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x18009D26C (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18009E85C (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800582D8 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180058338 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x1800583F8 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x180058518 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::FeatureStateData::ProcessShutdown(wil::details_abi::FeatureStateData *this)
{
  wil::details_abi::FeatureStateData *v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8
  const struct wil::details_abi::RawUsageIndex *v4; // r9
  _BYTE v5[200]; // [rsp+20h] [rbp-C8h] BYREF

  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v5);
  wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(v1, (struct wil::details_abi::UsageIndexes *)v5);
  wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v5, v2, v3, v4);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v5);
}
