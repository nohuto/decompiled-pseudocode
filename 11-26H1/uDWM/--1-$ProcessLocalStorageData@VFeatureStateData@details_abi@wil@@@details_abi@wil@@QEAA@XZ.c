/*
 * XREFs of ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18009083C
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18009217C (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800778A0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x180090970 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x1800909D8 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::~ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        _QWORD *a1)
{
  void *v2; // rdx
  wil::details *v3; // rcx

  wil::details_abi::FeatureStateData::~FeatureStateData((wil::details_abi::FeatureStateData *)(a1 + 4));
  wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)(a1 + 2));
  v3 = (wil::details *)a1[1];
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
}
