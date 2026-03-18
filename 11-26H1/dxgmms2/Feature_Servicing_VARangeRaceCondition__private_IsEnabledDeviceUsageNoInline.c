/*
 * XREFs of Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsageNoInline @ 0x14004DD14
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 * Callees:
 *     Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback @ 0x14004DD50 (Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_VARangeRaceCondition__private_featureState & 0x10) != 0 )
    return Feature_Servicing_VARangeRaceCondition__private_featureState & 1;
  else
    return Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_VARangeRaceCondition__private_featureState,
             3LL);
}
