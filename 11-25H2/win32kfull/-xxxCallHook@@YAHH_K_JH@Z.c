/*
 * XREFs of ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x14001E1E0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxGetInputEvent @ 0x14001E960 (xxxGetInputEvent.c)
 *     xxxCallMsgFilter @ 0x14001FA20 (xxxCallMsgFilter.c)
 *     xxxDesktopThreadWaiter @ 0x140020F14 (xxxDesktopThreadWaiter.c)
 *     xxxRedrawTitle @ 0x140021BF8 (xxxRedrawTitle.c)
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x140023234 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSendMinRectMessages @ 0x14002ADF4 (xxxSendMinRectMessages.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 *     xxxCallCtfHook @ 0x1400C4B80 (xxxCallCtfHook.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     xxxIsDragging @ 0x1401171C8 (xxxIsDragging.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x14013677C (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140187CB8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1401C8FD8 (-xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z.c)
 *     EditionNotifyShellLanguageHook @ 0x1402088C0 (EditionNotifyShellLanguageHook.c)
 *     xxxRedrawFrameAndHook @ 0x14021EE48 (xxxRedrawFrameAndHook.c)
 *     EditionCallAccessibilityHook @ 0x1402206E0 (EditionCallAccessibilityHook.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x140225D60 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x140257214 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x14025D7D0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     PhkNextValid @ 0x1400C5F24 (PhkNextValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1400C7990 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     xxxPointerCallHook @ 0x140138DC4 (xxxPointerCallHook.c)
 *     IsPointerInputClientMessage @ 0x140143F90 (IsPointerInputClientMessage.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxCallHook(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v7; // r15d
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  struct _ERESOURCE *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 Valid; // rcx

  v4 = a4;
  v7 = a1;
  v8 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42312);
  if ( !*(_DWORD *)(W32GetUserSessionState(v10, v9) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || ExIsResourceAcquiredExclusiveLite(v8) != 1 && !ExIsResourceAcquiredSharedLite(v8)) )
  {
    __int2c();
  }
  if ( (_DWORD)v4 == 6 )
    goto LABEL_4;
  if ( (_DWORD)v4 != 4 )
  {
    if ( (_DWORD)v4 == 12 )
    {
      v11 = *(unsigned int *)(a3 + 24);
      goto LABEL_5;
    }
    if ( (_DWORD)v4 != 3 && (_DWORD)v4 != -1 )
    {
      v11 = 0LL;
LABEL_7:
      if ( !(unsigned int)IsPointerInputClientMessage(v11) )
        goto LABEL_9;
      goto LABEL_8;
    }
LABEL_4:
    v11 = *(unsigned int *)(a3 + 8);
LABEL_5:
    v12 = *(_QWORD *)(a3 + 16);
    goto LABEL_6;
  }
  v11 = *(unsigned int *)(a3 + 16);
  v12 = *(_QWORD *)(a3 + 8);
LABEL_6:
  if ( (unsigned int)(v11 - 577) > 3 )
    goto LABEL_7;
LABEL_8:
  if ( (_DWORD)v11 != 595 )
    return xxxPointerCallHook(v7, a2, a3, (unsigned int)v4);
LABEL_9:
  if ( (_DWORD)v11 == 528 && (_WORD)v12 == 582 )
    return xxxPointerCallHook(v7, a2, a3, (unsigned int)v4);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v11, v12);
  if ( CurrentThreadNonPaged )
    v16 = *CurrentThreadNonPaged;
  else
    v16 = 0LL;
  v17 = *(struct _ERESOURCE **)(W32GetUserSessionState(v15, v14) + 42312);
  if ( !*(_DWORD *)(W32GetUserSessionState(v19, v18) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL()
     || ExIsResourceAcquiredExclusiveLite(v17) != 1 && !ExIsResourceAcquiredSharedLite(v17)) )
  {
    __int2c();
  }
  Valid = *(_QWORD *)(v16 + 8 * v4 + 968);
  if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(v16 + 504) + 8 * v4 + 48)) != 0)
    && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
  {
    Valid = PhkNextValid(Valid, v20);
  }
  return xxxCallHook2(Valid, v7, a2, a3, 1);
}
