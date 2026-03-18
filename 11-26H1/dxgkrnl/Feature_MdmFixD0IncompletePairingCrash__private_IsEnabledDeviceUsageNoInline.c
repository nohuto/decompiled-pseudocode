/*
 * XREFs of Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledDeviceUsageNoInline @ 0x1400915E0
 * Callers:
 *     ?UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z @ 0x1400900B8 (-UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z.c)
 * Callees:
 *     Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledFallback @ 0x14009161C (Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledFallback.c)
 */

__int64 Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MdmFixD0IncompletePairingCrash__private_featureState & 0x10) != 0 )
    return Feature_MdmFixD0IncompletePairingCrash__private_featureState & 1;
  else
    return Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledFallback(
             (unsigned int)Feature_MdmFixD0IncompletePairingCrash__private_featureState,
             3LL);
}
