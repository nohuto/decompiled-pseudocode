/*
 * XREFs of Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessNotifyWinEvent @ 0x14002F920 (xxxProcessNotifyWinEvent.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     _PostThreadMessageEx @ 0x1401AAC9C (_PostThreadMessageEx.c)
 *     _ChangeWindowMessageFilter @ 0x1401E35BC (_ChangeWindowMessageFilter.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x140237B0C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x14024116C (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     zzzSetDesktop @ 0x140244CA0 (zzzSetDesktop.c)
 *     NtUserMagSetContextInformation @ 0x14024AE10 (NtUserMagSetContextInformation.c)
 *     NtUserPostThreadMessage @ 0x14024B7E0 (NtUserPostThreadMessage.c)
 *     _ChangeWindowMessageFilterEx @ 0x140256184 (_ChangeWindowMessageFilterEx.c)
 *     _InitializeTouchInjectionWorker @ 0x14027B154 (_InitializeTouchInjectionWorker.c)
 *     ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x140292A58 (-GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z.c)
 *     NtUserGetSendMessageReceiver @ 0x140298800 (NtUserGetSendMessageReceiver.c)
 *     NtUserGetWindowProcessHandle @ 0x1402995F0 (NtUserGetWindowProcessHandle.c)
 *     NtUserRegisterPointerInputTarget @ 0x14029CCA0 (NtUserRegisterPointerInputTarget.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z @ 0x1402B0648 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402C0BBC (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x1402DE194 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     Feature_UIPIAlwaysOn__private_IsEnabledFallback @ 0x14027722C (Feature_UIPIAlwaysOn__private_IsEnabledFallback.c)
 */

__int64 Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UIPIAlwaysOn__private_featureState & 0x10) != 0 )
    return Feature_UIPIAlwaysOn__private_featureState & 1;
  else
    return Feature_UIPIAlwaysOn__private_IsEnabledFallback(
             (unsigned int)Feature_UIPIAlwaysOn__private_featureState,
             3LL);
}
