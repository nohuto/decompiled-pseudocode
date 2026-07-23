/*
 * XREFs of Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline @ 0x140613C6C
 * Callers:
 *     PopSessionWinlogonNotification @ 0x140B776DC (PopSessionWinlogonNotification.c)
 * Callees:
 *     Feature_RemUserPresentSessionUnlock__private_IsEnabledFallback @ 0x140613CA8 (Feature_RemUserPresentSessionUnlock__private_IsEnabledFallback.c)
 */

__int64 Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RemUserPresentSessionUnlock__private_featureState & 0x10) != 0 )
    return Feature_RemUserPresentSessionUnlock__private_featureState & 1;
  else
    return Feature_RemUserPresentSessionUnlock__private_IsEnabledFallback(
             (unsigned int)Feature_RemUserPresentSessionUnlock__private_featureState,
             3LL);
}
