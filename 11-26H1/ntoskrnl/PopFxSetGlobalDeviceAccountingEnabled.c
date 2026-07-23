/*
 * XREFs of PopFxSetGlobalDeviceAccountingEnabled @ 0x1404A90E4
 * Callers:
 *     PopFxPauseDeviceAccounting @ 0x14039675C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1404A8F28 (PopFxResumeDeviceAccounting.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404A915C (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

void __fastcall PopFxSetGlobalDeviceAccountingEnabled(unsigned __int8 a1)
{
  KIRQL v2; // r10

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.Timer.Header.WaitListHead);
  if ( a1 )
  {
    if ( PopFxBlockingDeviceListLock.SavedApcStateFill[0] )
      PopFxBlockingDeviceListLock.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
    else
      ++PopFxBlockingDeviceListLock.SavedApcState.Process;
  }
  else if ( PopFxBlockingDeviceListLock.SavedApcStateFill[0] )
  {
    PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 1200000000LL);
  }
  PopFxBlockingDeviceListLock.SavedApcStateFill[1] = a1;
  KeReleaseSpinLock((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.Timer.Header.WaitListHead, v2);
}
