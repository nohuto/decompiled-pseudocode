/*
 * XREFs of Feature_ShortQosHysteresisIntel__private_IsEnabledDeviceUsageNoInline @ 0x140006B18
 * Callers:
 *     GetHwpPerfControlHandler @ 0x14002AA80 (GetHwpPerfControlHandler.c)
 * Callees:
 *     Feature_ShortQosHysteresisIntel__private_IsEnabledFallback @ 0x140006B54 (Feature_ShortQosHysteresisIntel__private_IsEnabledFallback.c)
 */

__int64 Feature_ShortQosHysteresisIntel__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShortQosHysteresisIntel__private_featureState & 0x10) != 0 )
    return Feature_ShortQosHysteresisIntel__private_featureState & 1;
  else
    return Feature_ShortQosHysteresisIntel__private_IsEnabledFallback(
             (unsigned int)Feature_ShortQosHysteresisIntel__private_featureState,
             3LL);
}
