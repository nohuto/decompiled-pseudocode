/*
 * XREFs of PopFxSetDripsBlockedByDeviceActivity @ 0x14042C978
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x14042C75C (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14042C9FC (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404AFACC (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

void __fastcall PopFxSetDripsBlockedByDeviceActivity(unsigned __int8 a1)
{
  __int64 v2; // rcx
  KIRQL v3; // di

  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12420.320);
  if ( stru_140F12420.WaitBlockFill5[33] )
  {
    if ( stru_140F12420.WaitBlockFill5[32] == a1 )
      goto LABEL_7;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( a1 )
      stru_140F12420.WaitBlock[0].SparePtr = (PVOID)MEMORY[0xFFFFF78000000008];
    else
      PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 0LL);
  }
  if ( stru_140F12420.WaitBlockFill5[32] != a1 )
  {
    LOBYTE(v2) = a1;
    stru_140F12420.WaitBlockFill5[32] = a1;
    PopFxUpdateDeviceIRPhaseAccounting(v2);
  }
LABEL_7:
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F12420.320, v3);
}
