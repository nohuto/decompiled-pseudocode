/*
 * XREFs of ??1Win32RawLockedW32Thread@@QEAA@XZ @ 0x1400537A0
 * Callers:
 *     xxxCancelTracking @ 0x14005359C (xxxCancelTracking.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z @ 0x1402A1860 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32RawLockedW32Thread::~Win32RawLockedW32Thread(void (**this)(void))
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx

  if ( this[2] != (void (*)(void))-1LL )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this);
    if ( CurrentThreadWin32Thread )
      v3 = *CurrentThreadWin32Thread;
    else
      v3 = 0LL;
    *(_QWORD *)(v3 + 376) = *this;
    if ( this[1] )
      this[2]();
    this[2] = (void (*)(void))-1LL;
  }
}
