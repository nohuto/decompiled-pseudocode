/*
 * XREFs of ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401B7DA0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     xxxActiveWindowTracking @ 0x14008DA14 (xxxActiveWindowTracking.c)
 *     xxxTurnOffCompositing @ 0x1401F9048 (xxxTurnOffCompositing.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x14024F4BC (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402ED554 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(_QWORD *a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // r8

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v5 = 0LL;
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  *a1 = *(_QWORD *)(v5 + 448);
  *(_QWORD *)(v5 + 448) = a1;
  a1[1] = a2;
  return HMLockObject(a2);
}
