/*
 * XREFs of Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline @ 0x14021733C
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x140213994 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140215150 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 * Callees:
 *     Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledFallback @ 0x140217378 (Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledFallback.c)
 */

__int64 Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixGenerateDeparturesForActivePointersKASANBug__private_featureState & 0x10) != 0 )
    return Feature_FixGenerateDeparturesForActivePointersKASANBug__private_featureState & 1;
  else
    return Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledFallback(
             (unsigned int)Feature_FixGenerateDeparturesForActivePointersKASANBug__private_featureState,
             3LL);
}
