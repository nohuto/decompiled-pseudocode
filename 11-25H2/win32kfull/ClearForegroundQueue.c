/*
 * XREFs of ClearForegroundQueue @ 0x14023CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@@Z @ 0x14023A398 (-SetNewForegroundQueue@@YAXPEAUtagQ@@@Z.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1402786A8 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline @ 0x14027A134 (Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline.c)
 */

void ClearForegroundQueue()
{
  __int64 v0; // rdx

  if ( (unsigned int)Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline() )
    ResetForegroundQueue(0LL);
  else
    SetNewForegroundQueue(0LL, v0);
}
