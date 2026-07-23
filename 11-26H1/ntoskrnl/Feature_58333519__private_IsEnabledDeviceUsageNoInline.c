/*
 * XREFs of Feature_58333519__private_IsEnabledDeviceUsageNoInline @ 0x1407184B0
 * Callers:
 *     sub_140886DDC @ 0x140886DDC (sub_140886DDC.c)
 *     sub_1409EB2D4 @ 0x1409EB2D4 (sub_1409EB2D4.c)
 * Callees:
 *     Feature_58333519__private_IsEnabledFallback @ 0x1407184EC (Feature_58333519__private_IsEnabledFallback.c)
 */

__int64 Feature_58333519__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_58333519__private_featureState & 0x10) != 0 )
    return Feature_58333519__private_featureState & 1;
  else
    return Feature_58333519__private_IsEnabledFallback((unsigned int)Feature_58333519__private_featureState, 3LL);
}
