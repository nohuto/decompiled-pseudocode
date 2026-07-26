/*
 * XREFs of Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline @ 0x1400A1F90
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007F700 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x140084DD0 (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 * Callees:
 *     Feature_NDPSfiSpring2026__private_IsEnabledFallback @ 0x1400A1FCC (Feature_NDPSfiSpring2026__private_IsEnabledFallback.c)
 */

__int64 Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NDPSfiSpring2026__private_featureState & 0x10) != 0 )
    return Feature_NDPSfiSpring2026__private_featureState & 1;
  else
    return Feature_NDPSfiSpring2026__private_IsEnabledFallback(
             (unsigned int)Feature_NDPSfiSpring2026__private_featureState,
             3LL);
}
