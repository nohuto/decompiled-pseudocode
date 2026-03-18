/*
 * XREFs of Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14016B2F8
 * Callers:
 *     RIMDoOnPnpNotification @ 0x140091548 (RIMDoOnPnpNotification.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x14013E518 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?UpdateLastInputData@tagTHREADINFO@@QEAAXPEBUtagQMSG@@@Z @ 0x14016B230 (-UpdateLastInputData@tagTHREADINFO@@QEAAXPEBUtagQMSG@@@Z.c)
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1401AFB50 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     WritePointerDeviceSettings @ 0x1401DF9A0 (WritePointerDeviceSettings.c)
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetailFlags@@@Z @ 0x14021783C (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetail.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x140217920 (-BoundPoint@CCursorClip@@QEAA-AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mouse.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x140217B84 (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     Feature_TouchpadHaptics__private_IsEnabledFallback @ 0x1401C60EC (Feature_TouchpadHaptics__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadHaptics__private_featureState & 0x10) != 0 )
    return Feature_TouchpadHaptics__private_featureState & 1;
  else
    return Feature_TouchpadHaptics__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadHaptics__private_featureState,
             3LL);
}
