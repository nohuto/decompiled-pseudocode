/*
 * XREFs of ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x1802233B4
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18021BF70 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180078E04 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::GetShared(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1[1] )
  {
    v2 = *a1;
    v4 = 0LL;
    if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(v2, &v4) >= 0
      && !a1[1] )
    {
      a1[1] = v4;
    }
  }
  return (a1[1] + 32) & -(__int64)(a1[1] != 0);
}
