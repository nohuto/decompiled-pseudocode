/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401665A0
 * Callers:
 *     xxxCancelTracking @ 0x14005359C (xxxCancelTracking.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1401497E4 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ??1_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x140166580 (--1_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1401C7168 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1401C74D8 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     TryDetachShellFrame @ 0x140292DFC (TryDetachShellFrame.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1402A11AC (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  ULONG_PTR *CurrentThreadWin32Thread; // rax
  ULONG_PTR BugCheckParameter4; // rcx

  if ( *(_QWORD *)(BugCheckParameter2 + 16) == -1LL )
  {
    if ( !a2 )
    {
      CurrentThreadWin32Thread = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(BugCheckParameter2);
      if ( CurrentThreadWin32Thread )
        BugCheckParameter4 = *CurrentThreadWin32Thread;
      else
        BugCheckParameter4 = 0LL;
      KeBugCheckEx(0x164u, 0x12uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
    }
  }
  else
  {
    v3 = (__int64 *)PsGetCurrentThreadWin32Thread(BugCheckParameter2);
    if ( v3 )
      v4 = *v3;
    else
      v4 = 0LL;
    *(_QWORD *)(v4 + 376) = *(_QWORD *)BugCheckParameter2;
    if ( *(_QWORD *)(BugCheckParameter2 + 8) )
      (*(void (**)(void))(BugCheckParameter2 + 16))();
    *(_QWORD *)(BugCheckParameter2 + 16) = -1LL;
  }
}
