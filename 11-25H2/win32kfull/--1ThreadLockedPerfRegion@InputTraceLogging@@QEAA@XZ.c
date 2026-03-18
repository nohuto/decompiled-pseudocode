/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14005F618
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x14005EC10 (-OnPointerCursorOperation@@YAXXZ.c)
 *     NtUserSetCursorPos @ 0x14005EFD0 (NtUserSetCursorPos.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x140177CAC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     EditionLLMouseButtonHook @ 0x1401B3BF0 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1401B3E50 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x14024A8D0 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x14024CC60 (NtUserSendInput.c)
 *     NtUserInjectTouchpadAction @ 0x14029A600 (NtUserInjectTouchpadAction.c)
 * Callees:
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14026DC34 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        InputTraceLogging::ThreadLockedPerfRegion *this,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 *CurrentThreadNonPaged; // rax

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  if ( *(_QWORD *)this )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
    if ( CurrentThreadNonPaged )
      v3 = *CurrentThreadNonPaged;
    *(_QWORD *)(v3 + 384) = *(_QWORD *)(v2 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(this);
  }
}
