/*
 * XREFs of Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x140281BE4
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140059094 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     PostPointerEventMessage @ 0x14011BED0 (PostPointerEventMessage.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x140245110 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x1402475D0 (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     NtUserGetCurrentInputMessageSource @ 0x140249640 (NtUserGetCurrentInputMessageSource.c)
 *     NtUserInjectTouchpadAction @ 0x14029A600 (NtUserInjectTouchpadAction.c)
 *     NtUserRegisterTouchpadCapableWindow @ 0x14029D080 (NtUserRegisterTouchpadCapableWindow.c)
 *     EditionQueryInertiaWorker @ 0x1402B0180 (EditionQueryInertiaWorker.c)
 * Callees:
 *     Feature_TouchpadPublicApis__private_IsEnabledFallback @ 0x140281C1C (Feature_TouchpadPublicApis__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadPublicApis__private_featureState & 0x10) != 0 )
    return Feature_TouchpadPublicApis__private_featureState & 1;
  else
    return Feature_TouchpadPublicApis__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadPublicApis__private_featureState,
             3LL);
}
