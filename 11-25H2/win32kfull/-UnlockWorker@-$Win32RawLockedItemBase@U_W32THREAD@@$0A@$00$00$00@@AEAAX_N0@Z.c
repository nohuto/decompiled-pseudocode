/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401460C0
 * Callers:
 *     xxxQueryInformationThread @ 0x14002C784 (xxxQueryInformationThread.c)
 *     xxxCancelTracking @ 0x14012B1F8 (xxxCancelTracking.c)
 *     ??1_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1401460A0 (--1_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14019612C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x14019E8C8 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023A4E0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     TryDetachShellFrame @ 0x14023FB5C (TryDetachShellFrame.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140278CB0 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x140282610 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x140282A18 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax

  if ( *(_QWORD *)(BugCheckParameter2 + 16) == -1LL )
  {
    if ( !(_BYTE)a2 )
    {
      BugCheckParameter4 = PtiCurrent(BugCheckParameter2, a2);
      KeBugCheckEx(0x164u, 0x12uLL, BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
    }
  }
  else
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(BugCheckParameter2, a2);
    if ( CurrentThreadNonPaged )
      v4 = *CurrentThreadNonPaged;
    else
      v4 = 0LL;
    *(_QWORD *)(v4 + 384) = *(_QWORD *)BugCheckParameter2;
    if ( *(_QWORD *)(BugCheckParameter2 + 8) )
      (*(void (**)(void))(BugCheckParameter2 + 16))();
    *(_QWORD *)(BugCheckParameter2 + 16) = -1LL;
  }
}
