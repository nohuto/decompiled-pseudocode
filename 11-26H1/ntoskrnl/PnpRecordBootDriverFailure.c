/*
 * XREFs of PnpRecordBootDriverFailure @ 0x1405DCB00
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14048D330 (PnpDeviceCompletionRoutine.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PnpRecordBootDriverFailure(__int64 a1, int a2, __int64 a3, int a4)
{
  KIRQL v7; // al
  PVOID v8; // r8
  __int64 v9; // r10
  __int64 v10; // rdx

  if ( PnpBootDriverTracking )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PnpBootDriverTracking + 51);
    v8 = PnpBootDriverTracking;
    v9 = *(unsigned int *)PnpBootDriverTracking;
    if ( (unsigned int)v9 < 0x10 )
    {
      v10 = 3 * v9;
      *((_QWORD *)PnpBootDriverTracking + v10 + 1) = a1;
      *((_DWORD *)v8 + 2 * v10 + 4) = a2;
      *((_DWORD *)v8 + 2 * v10 + 5) = 14;
      *((_DWORD *)v8 + 2 * v10 + 6) = a4;
      ++*(_DWORD *)v8;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v8 + 51, v7);
  }
}
