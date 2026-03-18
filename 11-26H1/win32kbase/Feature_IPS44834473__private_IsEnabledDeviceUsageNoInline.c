/*
 * XREFs of Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline @ 0x1400E85E0
 * Callers:
 *     xxxToUnicodeEx @ 0x1400E74C0 (xxxToUnicodeEx.c)
 *     xxxInternalToUnicode @ 0x1400E7610 (xxxInternalToUnicode.c)
 *     NtUserGetKeyboardState @ 0x1400E83A0 (NtUserGetKeyboardState.c)
 * Callees:
 *     Feature_IPS44834473__private_IsEnabledFallback @ 0x1401C603C (Feature_IPS44834473__private_IsEnabledFallback.c)
 */

__int64 Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IPS44834473__private_featureState & 0x10) != 0 )
    return Feature_IPS44834473__private_featureState & 1;
  else
    return Feature_IPS44834473__private_IsEnabledFallback((unsigned int)Feature_IPS44834473__private_featureState, 3LL);
}
