/*
 * XREFs of Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline @ 0x1400736EC
 * Callers:
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x14025EE00 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x140431F74 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 * Callees:
 *     Feature_SetTimingsDdiEtw__private_IsEnabledFallback @ 0x140073728 (Feature_SetTimingsDdiEtw__private_IsEnabledFallback.c)
 */

__int64 Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SetTimingsDdiEtw__private_featureState & 0x10) != 0 )
    return Feature_SetTimingsDdiEtw__private_featureState & 1;
  else
    return Feature_SetTimingsDdiEtw__private_IsEnabledFallback(
             (unsigned int)Feature_SetTimingsDdiEtw__private_featureState,
             3LL);
}
