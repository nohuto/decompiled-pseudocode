/*
 * XREFs of Feature_LetOOBEHotKeyBE__private_IsEnabledDeviceUsageNoInline @ 0x14028B9C8
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     Feature_LetOOBEHotKeyBE__private_IsEnabledFallback @ 0x14028BA00 (Feature_LetOOBEHotKeyBE__private_IsEnabledFallback.c)
 */

__int64 Feature_LetOOBEHotKeyBE__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_LetOOBEHotKeyBE__private_featureState & 0x10) != 0 )
    return Feature_LetOOBEHotKeyBE__private_featureState & 1;
  else
    return Feature_LetOOBEHotKeyBE__private_IsEnabledFallback(
             (unsigned int)Feature_LetOOBEHotKeyBE__private_featureState,
             3LL);
}
