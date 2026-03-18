/*
 * XREFs of ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x1401437D0
 * Callers:
 *     xxxQueryInformationThread @ 0x14002C784 (xxxQueryInformationThread.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14019612C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023A4E0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     TryDetachShellFrame @ 0x14023FB5C (TryDetachShellFrame.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

Win32RawLockedW32Thread *__fastcall Win32RawLockedW32Thread::Win32RawLockedW32Thread(
        Win32RawLockedW32Thread *this,
        struct _W32THREAD *a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rcx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  else
    v5 = 0LL;
  *(_QWORD *)this = *(_QWORD *)(v5 + 384);
  *(_QWORD *)(v5 + 384) = this;
  *((_QWORD *)this + 2) = Win32RawLockedW32Thread::Deref;
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    ReferenceW32Thread(a2);
  return this;
}
