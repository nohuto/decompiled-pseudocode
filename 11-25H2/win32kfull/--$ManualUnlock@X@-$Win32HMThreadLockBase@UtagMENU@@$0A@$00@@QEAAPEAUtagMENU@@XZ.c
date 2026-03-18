/*
 * XREFs of ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140187B78
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     xxxCancelTracking @ 0x14012B1F8 (xxxCancelTracking.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxDDETrackGetMessageHook @ 0x140255BA4 (xxxDDETrackGetMessageHook.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256E34 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402B16B4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1402B1DA8 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackWindowDying @ 0x1402B2AA4 (xxxDDETrackWindowDying.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402CA6B4 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(_QWORD *BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *CurrentThreadNonPaged; // rax
  ULONG_PTR v4; // rcx
  __int64 result; // rax

  CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(BugCheckParameter3, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  result = Win32HM_UnlockFromThread<0>(v4, BugCheckParameter3);
  BugCheckParameter3[1] = 0LL;
  *BugCheckParameter3 = -1LL;
  return result;
}
