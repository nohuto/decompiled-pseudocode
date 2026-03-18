/*
 * XREFs of Feature_FixMouseCoalescing__private_IsEnabledDeviceUsageNoInline @ 0x140222C98
 * Callers:
 *     ?ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DATA@@PEBUMouseInputProcessingState@@@Z @ 0x14019275C (-ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DAT.c)
 * Callees:
 *     Feature_FixMouseCoalescing__private_IsEnabledFallback @ 0x140222CD0 (Feature_FixMouseCoalescing__private_IsEnabledFallback.c)
 */

__int64 Feature_FixMouseCoalescing__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixMouseCoalescing__private_featureState & 0x10) != 0 )
    return Feature_FixMouseCoalescing__private_featureState & 1;
  else
    return Feature_FixMouseCoalescing__private_IsEnabledFallback(
             (unsigned int)Feature_FixMouseCoalescing__private_featureState,
             3LL);
}
