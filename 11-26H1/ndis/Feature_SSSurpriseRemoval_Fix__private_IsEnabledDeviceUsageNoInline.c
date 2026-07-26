/*
 * XREFs of Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140091624
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048990 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400824B0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400834E0 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x14015C4B0 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 *     ?ndisMStopPowerSavingsForBindings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016E070 (-ndisMStopPowerSavingsForBindings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledFallback @ 0x140091660 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SSSurpriseRemoval_Fix__private_featureState & 0x10) != 0 )
    return Feature_SSSurpriseRemoval_Fix__private_featureState & 1;
  else
    return Feature_SSSurpriseRemoval_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_SSSurpriseRemoval_Fix__private_featureState,
             3LL);
}
