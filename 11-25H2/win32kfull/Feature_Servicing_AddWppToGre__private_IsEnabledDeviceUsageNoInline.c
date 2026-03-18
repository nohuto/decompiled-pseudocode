/*
 * XREFs of Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline @ 0x14030FC14
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z @ 0x1400BE658 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z.c)
 * Callees:
 *     Feature_Servicing_AddWppToGre__private_IsEnabledFallback @ 0x14030FC4C (Feature_Servicing_AddWppToGre__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_AddWppToGre__private_featureState & 0x10) != 0 )
    return Feature_Servicing_AddWppToGre__private_featureState & 1;
  else
    return Feature_Servicing_AddWppToGre__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AddWppToGre__private_featureState,
             3LL);
}
