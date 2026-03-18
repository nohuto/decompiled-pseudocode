/*
 * XREFs of Feature_MultiFingerTapImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14022550C
 * Callers:
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140193DFC (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1401940E0 (-ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140194508 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     Feature_MultiFingerTapImprovements__private_IsEnabledFallback @ 0x140225544 (Feature_MultiFingerTapImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_MultiFingerTapImprovements__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MultiFingerTapImprovements__private_featureState & 0x10) != 0 )
    return Feature_MultiFingerTapImprovements__private_featureState & 1;
  else
    return Feature_MultiFingerTapImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_MultiFingerTapImprovements__private_featureState,
             3LL);
}
