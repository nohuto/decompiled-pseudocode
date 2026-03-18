/*
 * XREFs of PopDisksRegisteredForIdle @ 0x1404D8388
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

char PopDisksRegisteredForIdle()
{
  char v0; // bl
  KIRQL v2; // dl
  __int64 i; // rax

  if ( (stru_140F10828.WaitBlockFill6[100] & 2) != 0 )
    return 1;
  v0 = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F10808);
  for ( i = qword_140F10810; (__int64 *)i != &qword_140F10810; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == 1 )
    {
      v0 = 1;
      break;
    }
  }
  KeReleaseSpinLock(&qword_140F10808, v2);
  return v0;
}
