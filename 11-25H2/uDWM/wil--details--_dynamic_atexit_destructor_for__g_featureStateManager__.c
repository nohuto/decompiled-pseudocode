/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800EDCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180056B24 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18008C0B8 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x1800966EC (--1-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_featureStateManager = 0;
    wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::~ProcessLocalStorage<wil::details_abi::FeatureStateData>((__int64)&off_1801181C8);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
