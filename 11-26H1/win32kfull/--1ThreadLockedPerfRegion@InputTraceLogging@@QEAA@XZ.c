/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14001EA30
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1400F8870 (-OnPointerCursorOperation@@YAXXZ.c)
 *     EditionLLMouseButtonHook @ 0x140173290 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1401734E0 (EditionLLMouseWheelHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     NtUserSetCursorPos @ 0x1401DD8F0 (NtUserSetCursorPos.c)
 *     NtUserInjectTouchInput @ 0x1402B6AF0 (NtUserInjectTouchInput.c)
 *     NtUserInjectTouchpadAction @ 0x1402B7030 (NtUserInjectTouchpadAction.c)
 *     NtUserSendInput @ 0x1402BB4D0 (NtUserSendInput.c)
 * Callees:
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14001EA8C (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        InputTraceLogging::ThreadLockedPerfRegion *this)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 *CurrentThreadWin32Thread; // rax

  v1 = *(_QWORD *)this;
  v2 = 0LL;
  if ( *(_QWORD *)this )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this);
    if ( CurrentThreadWin32Thread )
      v2 = *CurrentThreadWin32Thread;
    *(_QWORD *)(v2 + 376) = *(_QWORD *)(v1 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(this);
  }
}
