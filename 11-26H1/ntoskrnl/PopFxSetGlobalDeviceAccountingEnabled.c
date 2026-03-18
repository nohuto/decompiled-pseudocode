/*
 * XREFs of PopFxSetGlobalDeviceAccountingEnabled @ 0x1404AFA54
 * Callers:
 *     PopFxPauseDeviceAccounting @ 0x1403949DC (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1404AF898 (PopFxResumeDeviceAccounting.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404AFACC (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

void __fastcall PopFxSetGlobalDeviceAccountingEnabled(unsigned __int8 a1)
{
  KIRQL v2; // r10

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12420.320);
  if ( a1 )
  {
    if ( stru_140F12420.WaitBlockFill5[32] )
      stru_140F12420.WaitBlock[0].SparePtr = (PVOID)MEMORY[0xFFFFF78000000008];
    else
      ++*(_QWORD *)&stru_140F12420.WaitBlockFill11[64];
  }
  else if ( stru_140F12420.WaitBlockFill5[32] )
  {
    PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 1200000000LL);
  }
  stru_140F12420.WaitBlockFill5[33] = a1;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F12420.320, v2);
}
