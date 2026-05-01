/*
 * XREFs of ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x18022EFE4
 * Callers:
 *     ??1CCrashDetector@@QEAA@XZ @ 0x1801A8108 (--1CCrashDetector@@QEAA@XZ.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x180227FB4 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?Uninitialize@CApplicationFrameService@@UEAAJXZ @ 0x1802FAB50 (-Uninitialize@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801A8400 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 */

void __fastcall CCrashDetector::StopMonitoring(CCrashDetector *this)
{
  struct _TP_WAIT *v2; // rcx

  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    SetThreadpoolWait(v2, 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 2), 0);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
    CAutoHandle<void *>::~CAutoHandle<void *>((void **)this + 1);
  }
}
