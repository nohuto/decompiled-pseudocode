/*
 * XREFs of ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140035D3C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserCreateWindowEx @ 0x1400391A0 (NtUserCreateWindowEx.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     NtUserUpdateLayeredWindow @ 0x140051B10 (NtUserUpdateLayeredWindow.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     xxxCancelTracking @ 0x14012B1F8 (xxxCancelTracking.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x14012B690 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxCsDdeInitialize @ 0x14017DC44 (xxxCsDdeInitialize.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxActiveWindowTracking @ 0x14018CE4C (xxxActiveWindowTracking.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxTurnOffCompositing @ 0x1402062A8 (xxxTurnOffCompositing.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x140238340 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     xxxDDETrackGetMessageHook @ 0x140255BA4 (xxxDDETrackGetMessageHook.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256E34 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x14026AB74 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402B16B4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402CA6B4 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(
        _QWORD *BugCheckParameter3,
        __int64 a2)
{
  ULONG_PTR *CurrentThreadNonPaged; // rax
  ULONG_PTR v4; // rcx

  if ( *BugCheckParameter3 != -1LL )
  {
    CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(BugCheckParameter3, a2);
    v4 = 0LL;
    if ( CurrentThreadNonPaged )
      v4 = *CurrentThreadNonPaged;
    Win32HM_UnlockFromThread<0>(v4, (ULONG_PTR)BugCheckParameter3);
  }
}
