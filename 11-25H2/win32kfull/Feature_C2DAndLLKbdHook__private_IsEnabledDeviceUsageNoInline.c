/*
 * XREFs of Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline @ 0x14028B920
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     EditionKeyEventLLHook @ 0x14024FFF0 (EditionKeyEventLLHook.c)
 *     ?HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z @ 0x14028A838 (-HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z.c)
 * Callees:
 *     Feature_C2DAndLLKbdHook__private_IsEnabledFallback @ 0x14028B958 (Feature_C2DAndLLKbdHook__private_IsEnabledFallback.c)
 */

__int64 Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_C2DAndLLKbdHook__private_featureState & 0x10) != 0 )
    return Feature_C2DAndLLKbdHook__private_featureState & 1;
  else
    return Feature_C2DAndLLKbdHook__private_IsEnabledFallback(
             (unsigned int)Feature_C2DAndLLKbdHook__private_featureState,
             3LL);
}
