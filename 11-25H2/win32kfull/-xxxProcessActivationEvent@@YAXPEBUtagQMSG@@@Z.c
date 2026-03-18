/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x14023B7E4
 * Callers:
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1400232D8 (_anonymous_namespace_--xxxUpdateTray.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     xxxCancelTracking @ 0x14012B1F8 (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1401558AC (zzzLockWindowUpdate2.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1401D4008 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x140245078 (zzzInputFocusReceivedWindowEvent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x14027847C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     zzzActiveCursorTracking @ 0x14028203C (zzzActiveCursorTracking.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct tagWND *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  struct tagWND *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-28h] BYREF

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3759LL);
  v3 = PtiCurrent((__int64)a1, a2);
  v5 = *((_QWORD *)a1 + 5);
  v6 = v3;
  v7 = *((_QWORD *)v3 + 59);
  if ( v5 )
  {
    LOBYTE(v4) = 1;
    v16 = HMValidateHandleNoSecure(v5, v4);
    v17 = (struct tagWND *)v16;
    if ( !v16 )
      return;
    if ( v6 != *(struct tagTHREADINFO **)(v16 + 16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3824LL);
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v17);
    if ( *(_QWORD *)(W32GetUserSessionState(v19, v18) + 18888) )
    {
      if ( v17 == *(struct tagWND **)(v7 + 128) )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 18888);
        anonymous_namespace_::xxxSendNCActivateMessage(v17, v7 == v23);
        if ( v7 == v23 )
        {
          anonymous_namespace_::xxxUpdateTray(v17);
          if ( (*((_DWORD *)a1 + 6) & 2) == 0 )
            xxxSetWindowPos(v17, 0LL, 0LL, 0LL, 0, 0, 3);
        }
      }
      else if ( anonymous_namespace_::xxxLocalActivateWindow(
                  v17,
                  *((unsigned int *)a1 + 8),
                  *((_WORD *)a1 + 12) & 2 | 0x84)
             && (*(_DWORD *)(W32GetUserSessionState(v22, v15) + 66804) & 1) != 0 )
      {
        zzzActiveCursorTracking(v17);
      }
    }
    else
    {
      xxxSetForegroundWindow2(v17, v6, 0LL);
    }
    if ( (*((_DWORD *)a1 + 6) & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v17 + 5) + 31LL) & 0x20) != 0 )
      _PostTransformableMessageExtended(v17, 0x112u, 0xF120uLL, 0LL, 0LL, 1);
    goto LABEL_27;
  }
  xxxCancelTracking();
  UserSessionState = W32GetUserSessionState(v9, v8);
  CCursorClip::ClearClip(*(CCursorClip **)(UserSessionState + 36240));
  zzzLockWindowUpdate2(0LL, 1LL);
  v13 = *((_QWORD *)v6 + 59);
  if ( *((_QWORD *)a1 + 4) && *(_QWORD *)(v13 + 128) && v13 == *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18888) )
  {
    v14 = *(struct tagWND **)(v13 + 128);
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v14);
    if ( *(_QWORD *)(v13 + 120) )
      zzzInputFocusReceivedWindowEvent(7LL);
    anonymous_namespace_::xxxSendNCActivateMessage(v14, 1uLL);
    anonymous_namespace_::xxxUpdateTray(v14);
    xxxSetWindowPos(v14, 0LL, 0LL, 0LL, 0, 0, 3);
LABEL_27:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v15);
    return;
  }
  if ( v13 != *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18888) )
    anonymous_namespace_::RemoveForegroundActivate();
}
