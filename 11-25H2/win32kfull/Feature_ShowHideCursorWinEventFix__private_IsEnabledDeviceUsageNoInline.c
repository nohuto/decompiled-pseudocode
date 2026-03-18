/*
 * XREFs of Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline @ 0x140273F20
 * Callers:
 *     zzzUpdateCursorImage @ 0x14004D350 (zzzUpdateCursorImage.c)
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x14005ECC0 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     Feature_ShowHideCursorWinEventFix__private_IsEnabledFallback @ 0x140273F58 (Feature_ShowHideCursorWinEventFix__private_IsEnabledFallback.c)
 */

__int64 Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShowHideCursorWinEventFix__private_featureState & 0x10) != 0 )
    return Feature_ShowHideCursorWinEventFix__private_featureState & 1;
  else
    return Feature_ShowHideCursorWinEventFix__private_IsEnabledFallback(
             (unsigned int)Feature_ShowHideCursorWinEventFix__private_featureState,
             3LL);
}
