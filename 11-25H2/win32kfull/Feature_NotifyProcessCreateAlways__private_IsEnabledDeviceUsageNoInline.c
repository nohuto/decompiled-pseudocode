/*
 * XREFs of Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x14028A2D4
 * Callers:
 *     NtUserNotifyProcessCreate @ 0x14024B6E0 (NtUserNotifyProcessCreate.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140289B08 (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 * Callees:
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledFallback @ 0x14028A30C (Feature_NotifyProcessCreateAlways__private_IsEnabledFallback.c)
 */

__int64 Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NotifyProcessCreateAlways__private_featureState & 0x10) != 0 )
    return Feature_NotifyProcessCreateAlways__private_featureState & 1;
  else
    return Feature_NotifyProcessCreateAlways__private_IsEnabledFallback(
             (unsigned int)Feature_NotifyProcessCreateAlways__private_featureState,
             3LL);
}
