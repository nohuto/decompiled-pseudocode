/*
 * XREFs of ?Exchange@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401C35B4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32RawLockedW32Thread::Exchange(Win32RawLockedW32Thread *this, struct _W32THREAD *a2)
{
  __int64 v4; // rcx

  if ( a2 )
    ReferenceW32Thread(a2);
  v4 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = a2;
  if ( v4 )
    (*((void (**)(void))this + 2))();
}
