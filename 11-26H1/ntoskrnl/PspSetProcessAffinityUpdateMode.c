/*
 * XREFs of PspSetProcessAffinityUpdateMode @ 0x140B71A98
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     PspLockUnlockProcessExclusive @ 0x140441BB0 (PspLockUnlockProcessExclusive.c)
 *     PspLockAffinityUpdateShared @ 0x140618560 (PspLockAffinityUpdateShared.c)
 *     PspUpdateSingleProcessAffinity @ 0x1407F70E8 (PspUpdateSingleProcessAffinity.c)
 */

__int64 __fastcall PspSetProcessAffinityUpdateMode(__int64 a1, int *a2)
{
  _KPROCESS *Process; // rdi
  int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // r8
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v8; // ett
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned __int16 i; // cx
  __int64 v12; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = *a2;
  v5 = (*a2 & 2) << 17;
  v6 = v5 | 0x80000;
  if ( (v4 & 1) == 0 )
    v6 = v5;
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  do
  {
    if ( (DirectoryTableBase & 0xC0000) == (_DWORD)v6 )
      break;
    if ( (DirectoryTableBase & 0x40000) != 0 )
      return 3221225473LL;
    v8 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                           v6 | DirectoryTableBase & 0xFFF3FFFF,
                           DirectoryTableBase);
  }
  while ( v8 != DirectoryTableBase );
  if ( (_DWORD)v6 == 0x40000 )
  {
    PspLockUnlockProcessExclusive((__int64)Process, a1);
  }
  else if ( (v6 & 0x80000) != 0 && KeDynamicPartitioningSupported )
  {
    PspLockAffinityUpdateShared(a1, 0x40000LL, v6, (struct _KLOCK_ENTRIES *)0x80000);
    for ( i = 0; i < (unsigned int)PspLastUpdateAffinityMask[0]; ++i )
    {
      if ( *(_QWORD *)&PspLastUpdateAffinityMask[4 * i + 4] )
      {
        PspUpdateSingleProcessAffinity(a1, (__int64)Process, (__int64)PspLastUpdateAffinityMask, v10);
        break;
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.AffinityPrimaryGroup, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock.AffinityPrimaryGroup);
    KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.AffinityPrimaryGroup);
    KiLeaveCriticalRegionUnsafe(a1, v12);
  }
  return 0LL;
}
