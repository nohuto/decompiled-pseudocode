/*
 * XREFs of ??1Win32RawLockedW32Thread@@QEAA@XZ @ 0x14012B3F0
 * Callers:
 *     xxxCancelTracking @ 0x14012B1F8 (xxxCancelTracking.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z @ 0x140283050 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall Win32RawLockedW32Thread::~Win32RawLockedW32Thread(void (**this)(void), __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx

  if ( this[2] != (void (*)(void))-1LL )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
    if ( CurrentThreadNonPaged )
      v4 = *CurrentThreadNonPaged;
    else
      v4 = 0LL;
    *(_QWORD *)(v4 + 384) = *this;
    if ( this[1] )
      this[2]();
    this[2] = (void (*)(void))-1LL;
  }
}
