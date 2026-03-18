/*
 * XREFs of Feature_Servicing_GreDrawStreamAPIDCOBJ__private_IsEnabledDeviceUsageNoInline @ 0x1403318C8
 * Callers:
 *     NtGdiDrawStream @ 0x14018A0B0 (NtGdiDrawStream.c)
 * Callees:
 *     Feature_Servicing_GreDrawStreamAPIDCOBJ__private_IsEnabledFallback @ 0x140331900 (Feature_Servicing_GreDrawStreamAPIDCOBJ__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GreDrawStreamAPIDCOBJ__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GreDrawStreamAPIDCOBJ__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GreDrawStreamAPIDCOBJ__private_featureState & 1;
  else
    return Feature_Servicing_GreDrawStreamAPIDCOBJ__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GreDrawStreamAPIDCOBJ__private_featureState,
             3LL);
}
