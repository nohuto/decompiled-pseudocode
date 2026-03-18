/*
 * XREFs of Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledDeviceUsageNoInline @ 0x14030E674
 * Callers:
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140260F84 (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledFallback @ 0x14030E6AC (Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_EudcLiveDumpRemoval__private_featureState & 0x10) != 0 )
    return Feature_Servicing_EudcLiveDumpRemoval__private_featureState & 1;
  else
    return Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_EudcLiveDumpRemoval__private_featureState,
             3LL);
}
