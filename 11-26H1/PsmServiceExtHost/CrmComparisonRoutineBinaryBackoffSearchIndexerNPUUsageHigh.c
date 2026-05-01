/*
 * XREFs of CrmComparisonRoutineBinaryBackoffSearchIndexerNPUUsageHigh @ 0x180075130
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CRMDrivenIndexerNPUBackoff__private_GetVariant @ 0x18007584C (Feature_CRMDrivenIndexerNPUBackoff__private_GetVariant.c)
 *     Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledDeviceUsageNoInline @ 0x180075888 (Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledDeviceUsageNoInline.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x180075C18 (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 */

__int64 __fastcall CrmComparisonRoutineBinaryBackoffSearchIndexerNPUUsageHigh(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax

  v3 = 90;
  if ( (unsigned int)Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledDeviceUsageNoInline()
    && (unsigned int)Feature_CRMDrivenIndexerNPUBackoff__private_GetVariant() == 1 )
  {
    v5 = Feature_CRMDrivenIndexerNPUBackoff__private_featureState;
    if ( (Feature_CRMDrivenIndexerNPUBackoff__private_featureState & 8) == 0 )
      v5 = wil_details_FeatureStateCache_ReevaluateCachedVariantState(
             v4,
             Feature_CRMDrivenIndexerNPUBackoff__private_featureState);
    v6 = HIDWORD(v5);
    if ( (unsigned int)(v6 - 1) <= 0x62 )
      v3 = v6;
  }
  return *a2 < v3 ? 2 : 0;
}
