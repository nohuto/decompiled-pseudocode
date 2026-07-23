/*
 * XREFs of SleepstudyHelper_ComponentInactive @ 0x140518190
 * Callers:
 *     <none>
 * Callees:
 *     SshpSetBlockerActive @ 0x140258074 (SshpSetBlockerActive.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentInactive(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  KIRQL v3; // si
  int v4; // eax
  bool v5; // zf

  v1 = 0;
  if ( SpinLock )
  {
    if ( SpinLock != (PKSPIN_LOCK)&unk_140F0A850 )
    {
      v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v4 = *((_DWORD *)SpinLock + 2);
      if ( (v4 & 0x10) != 0 )
      {
        v5 = (*((_DWORD *)SpinLock + 5))-- == 1;
        *((_DWORD *)SpinLock + 2) = v4 & 0xFFFFFFEF;
        if ( v5 )
          SshpSetBlockerActive((__int64)SpinLock, 0LL);
      }
      KeReleaseSpinLock(SpinLock, v3);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
