/*
 * XREFs of SleepstudyHelper_ComponentInactive @ 0x140257560
 * Callers:
 *     <none>
 * Callees:
 *     SshpSetBlockerActive @ 0x1402566E4 (SshpSetBlockerActive.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140257660 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentInactive(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  KIRQL v4; // al
  int v5; // ecx
  KIRQL v6; // si
  bool v7; // zf

  v1 = 0;
  if ( SpinLock )
  {
    if ( !(unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
      || SpinLock != PsAltSystemCallRegistrationLock.Spare35 )
    {
      v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v5 = *((_DWORD *)SpinLock + 2);
      v6 = v4;
      if ( (v5 & 0x10) != 0 )
      {
        v7 = (*((_DWORD *)SpinLock + 5))-- == 1;
        *((_DWORD *)SpinLock + 2) = v5 & 0xFFFFFFEF;
        if ( v7 )
          SshpSetBlockerActive((__int64)SpinLock, 0LL);
      }
      KeReleaseSpinLock(SpinLock, v6);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
