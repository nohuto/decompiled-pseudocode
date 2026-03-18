/*
 * XREFs of PopDripsWatchdogGetDeviceActiveTime @ 0x140504010
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x140B3FB6C (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopDripsWatchdogGetDeviceActiveTime(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  __int64 v3; // rbx
  KIRQL v4; // cl

  v1 = (KSPIN_LOCK *)(a1 + 640);
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 640));
  if ( *(_BYTE *)(a1 + 648) )
    v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 664);
  KeReleaseSpinLock(v1, v4);
  return v3;
}
