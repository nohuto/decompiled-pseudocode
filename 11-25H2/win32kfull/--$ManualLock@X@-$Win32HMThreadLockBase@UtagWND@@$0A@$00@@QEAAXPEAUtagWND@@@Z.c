/*
 * XREFs of ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401894A8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     xxxActiveWindowTracking @ 0x14018CE4C (xxxActiveWindowTracking.c)
 *     xxxTurnOffCompositing @ 0x1402062A8 (xxxTurnOffCompositing.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x14026AB74 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(_QWORD *a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // r8

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v5 = 0LL;
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  *a1 = *(_QWORD *)(v5 + 456);
  *(_QWORD *)(v5 + 456) = a1;
  a1[1] = a2;
  return HMLockObject(a2);
}
