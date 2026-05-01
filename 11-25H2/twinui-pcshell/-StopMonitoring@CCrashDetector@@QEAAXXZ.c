/*
 * XREFs of ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x18023CFC8
 * Callers:
 *     ??1CCrashDetector@@QEAA@XZ @ 0x1801B68D4 (--1CCrashDetector@@QEAA@XZ.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x1802363B8 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?Uninitialize@CApplicationFrameService@@UEAAJXZ @ 0x1802FF530 (-Uninitialize@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B6B38 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
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
