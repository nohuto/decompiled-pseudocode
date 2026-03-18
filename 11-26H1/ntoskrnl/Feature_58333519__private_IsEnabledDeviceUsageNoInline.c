/*
 * XREFs of Feature_58333519__private_IsEnabledDeviceUsageNoInline @ 0x1407137C0
 * Callers:
 *     sub_1408809DC @ 0x1408809DC (sub_1408809DC.c)
 *     sub_1409EEB04 @ 0x1409EEB04 (sub_1409EEB04.c)
 * Callees:
 *     Feature_58333519__private_IsEnabledFallback @ 0x1407137FC (Feature_58333519__private_IsEnabledFallback.c)
 */

__int64 Feature_58333519__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_58333519__private_featureState & 0x10) != 0 )
    return Feature_58333519__private_featureState & 1;
  else
    return Feature_58333519__private_IsEnabledFallback((unsigned int)Feature_58333519__private_featureState, 3LL);
}
