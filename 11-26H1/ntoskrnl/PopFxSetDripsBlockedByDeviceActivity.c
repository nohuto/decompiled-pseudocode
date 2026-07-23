/*
 * XREFs of PopFxSetDripsBlockedByDeviceActivity @ 0x140421048
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x140420E2C (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1404210CC (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404A915C (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

void __fastcall PopFxSetDripsBlockedByDeviceActivity(unsigned __int8 a1)
{
  __int64 v2; // rcx
  KIRQL v3; // di

  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.Timer.Header.WaitListHead);
  if ( PopFxBlockingDeviceListLock.SavedApcStateFill[1] )
  {
    if ( PopFxBlockingDeviceListLock.SavedApcStateFill[0] == a1 )
      goto LABEL_7;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( a1 )
      PopFxBlockingDeviceListLock.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
    else
      PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 0LL);
  }
  if ( PopFxBlockingDeviceListLock.SavedApcStateFill[0] != a1 )
  {
    LOBYTE(v2) = a1;
    PopFxBlockingDeviceListLock.SavedApcStateFill[0] = a1;
    PopFxUpdateDeviceIRPhaseAccounting(v2);
  }
LABEL_7:
  KeReleaseSpinLock((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.Timer.Header.WaitListHead, v3);
}
