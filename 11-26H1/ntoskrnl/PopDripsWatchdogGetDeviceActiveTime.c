/*
 * XREFs of PopDripsWatchdogGetDeviceActiveTime @ 0x1404FD8E0
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x140B41B9C (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
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
