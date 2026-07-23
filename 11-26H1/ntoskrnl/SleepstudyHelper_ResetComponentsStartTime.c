/*
 * XREFs of SleepstudyHelper_ResetComponentsStartTime @ 0x1406171E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall SleepstudyHelper_ResetComponentsStartTime(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // ebx
  KIRQL v3; // al

  v1 = 0;
  if ( SpinLock )
  {
    if ( SpinLock != (PKSPIN_LOCK)&unk_140F0A850 )
    {
      v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      if ( (SpinLock[1] & 3) == 3 )
        SpinLock[4] = MEMORY[0xFFFFF78000000008];
      KeReleaseSpinLock(SpinLock, v3);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
