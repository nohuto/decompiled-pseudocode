/*
 * XREFs of Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline @ 0x1401F0DE0
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1401908B0 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DATA@@PEBUMouseInputProcessingState@@@Z @ 0x14019275C (-ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DAT.c)
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x140192D0C (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 *     rimValidateFrameTransition @ 0x1401F14FC (rimValidateFrameTransition.c)
 *     ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x140223544 (-HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ.c)
 * Callees:
 *     Feature_AssertionFixes__private_IsEnabledFallback @ 0x1401F0E18 (Feature_AssertionFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AssertionFixes__private_featureState & 0x10) != 0 )
    return Feature_AssertionFixes__private_featureState & 1;
  else
    return Feature_AssertionFixes__private_IsEnabledFallback(
             (unsigned int)Feature_AssertionFixes__private_featureState,
             3LL);
}
