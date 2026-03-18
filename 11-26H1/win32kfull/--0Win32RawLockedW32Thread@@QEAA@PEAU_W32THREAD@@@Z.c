/*
 * XREFs of ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140153F80
 * Callers:
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1401497E4 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     xxxQueryInformationThread @ 0x1401535CC (xxxQueryInformationThread.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x140153BB4 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     TryDetachShellFrame @ 0x140292DFC (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

Win32RawLockedW32Thread *__fastcall Win32RawLockedW32Thread::Win32RawLockedW32Thread(
        Win32RawLockedW32Thread *this,
        struct _W32THREAD *a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rcx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  *(_QWORD *)this = *(_QWORD *)(v5 + 376);
  *(_QWORD *)(v5 + 376) = this;
  *((_QWORD *)this + 2) = Win32RawLockedW32Thread::Deref;
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    ReferenceW32Thread(a2);
  return this;
}
