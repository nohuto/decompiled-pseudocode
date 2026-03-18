/*
 * XREFs of ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140067640
 * Callers:
 *     SendAppClipChanged @ 0x140066730 (SendAppClipChanged.c)
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140066B40 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     SendPositionChanged @ 0x1400A6ED0 (SendPositionChanged.c)
 *     SendCrosshairEnabledStatusChanged @ 0x1400A6F40 (SendCrosshairEnabledStatusChanged.c)
 *     SendCrosshairPropertiesChanged @ 0x1400A6FA0 (SendCrosshairPropertiesChanged.c)
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1400B9E3C (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E42F4 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     SendVisibilityChanged @ 0x140134B90 (SendVisibilityChanged.c)
 *     SynchronizeContext @ 0x140146EF0 (SynchronizeContext.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x14014C410 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     SendOrientationChanged @ 0x140158B80 (SendOrientationChanged.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140160080 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 * Callees:
 *     ?SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z @ 0x1400676FC (-SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z.c)
 *     CoreMsgSend @ 0x140067768 (CoreMsgSend.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020EC30 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgSendMessage(__int64 a1, int a2)
{
  __int64 v2; // rsi
  void *v4; // rdi

  v2 = a2;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1 + 8, 0LL);
  if ( (unsigned __int8)InputExtensibilityCallout::_CanSendMessageToDestinationInternal(a1, (unsigned int)v2) )
  {
    InputTraceLogging::Win32k::SendCoreMessagingK((unsigned int)v2);
    v4 = *(void **)(a1 + 40 * v2 + 24);
  }
  ExReleasePushLockSharedEx(a1 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
    return CoreMsgSend(v4);
  else
    return 2147946717LL;
}
