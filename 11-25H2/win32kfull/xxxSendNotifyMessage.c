/*
 * XREFs of xxxSendNotifyMessage @ 0x14012B560
 * Callers:
 *     xxxSendMenuSelect @ 0x14003F1D4 (xxxSendMenuSelect.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401117B8 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140129E38 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x14012B440 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x14012F610 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     xxxSetDeskWallpaper @ 0x14012F684 (xxxSetDeskWallpaper.c)
 *     xxxMetricsRecalc @ 0x140147B70 (xxxMetricsRecalc.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     xxxDWP_UpdateUIState @ 0x1401CE994 (xxxDWP_UpdateUIState.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1401D4008 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14022E770 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetModernAppWindow @ 0x140254280 (xxxSetModernAppWindow.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140278CB0 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _NotifyOverlayWindow @ 0x1402920A4 (_NotifyOverlayWindow.c)
 *     NtUserNavigateFocus @ 0x14029B410 (NtUserNavigateFocus.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1402B4598 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxBroadcastPaletteChanged @ 0x1402BE754 (xxxBroadcastPaletteChanged.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140128970 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140128C2C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z @ 0x1402B2EEC (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxSendNotifyMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        int a5)
{
  ULONG_PTR *v5; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+78h] [rbp-8h]

  v5 = (ULONG_PTR *)a4;
  if ( a1 != (struct tagWND *)-1LL )
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  v13 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v15 = -1LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  if ( a2 != 26 && a2 != 27 )
  {
    if ( a2 != 42 )
      return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
    goto LABEL_8;
  }
  if ( !a4 )
  {
LABEL_8:
    xxxSystemBroadcastMessage(a2, a3, (__int64)v5, 1u, 0LL, a5, 0);
    if ( v15 != -1 )
      PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v11);
    return 1LL;
  }
  if ( (unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)BugCheckParameter3, a4) )
  {
    PtiCurrent(v10, v9);
    Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
      BugCheckParameter2,
      BugCheckParameter3[1],
      (__int64)Win32FreePool);
    v5 = BugCheckParameter3;
    goto LABEL_8;
  }
  if ( v15 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v9);
  return 0LL;
}
