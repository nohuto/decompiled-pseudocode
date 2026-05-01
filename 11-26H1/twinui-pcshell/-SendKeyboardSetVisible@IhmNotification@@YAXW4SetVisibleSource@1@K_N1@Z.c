/*
 * XREFs of ?SendKeyboardSetVisible@IhmNotification@@YAXW4SetVisibleSource@1@K_N1@Z @ 0x180684EE4
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1800B287C (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs@45678@@Z @ 0x1801CA090 (-OnEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJP.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeReason@2@_N1@Z @ 0x18047A59C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeRea.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x18047C400 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x18047C6CC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotification@@K_N2@Z @ 0x180684FC8 (-s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotificati.c)
 */

__int64 __fastcall IhmNotification::SendKeyboardSetVisible(unsigned int a1, unsigned int a2, char a3, __int64 a4)
{
  char v5; // [rsp+20h] [rbp-38h]
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a4;
  LOBYTE(a4) = a3;
  CNotificationData::s_PackKeyboardSetVisibleNotification(v6, a1, a2, a4, v5);
  return RtlPublishWnfStateData(WNF_TKBN_KEYBOARD_SET_VISIBLE_NOTIFICATION, 0LL, v6, 16LL);
}
