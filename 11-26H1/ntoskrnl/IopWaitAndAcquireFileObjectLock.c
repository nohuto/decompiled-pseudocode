/*
 * XREFs of IopWaitAndAcquireFileObjectLock @ 0x140987E24
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x1404B3AFC (IopValidateAndGetWriteParameters.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140797D78 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14079C810 (NtSetVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     NtSetEaFile @ 0x140980DA0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409810F0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409815E0 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x140981E10 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140982460 (NtQueryVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x140982F50 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AAAD60 (NtNotifyChangeDirectoryFileEx.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeSetEventBoostPriorityEx @ 0x140419658 (KeSetEventBoostPriorityEx.c)
 *     IopWaitForLockAlertable @ 0x1404A3F78 (IopWaitForLockAlertable.c)
 */

__int64 __fastcall IopWaitAndAcquireFileObjectLock(
        __int64 a1,
        struct _KLOCK_ENTRY *a2,
        char a3,
        AutoBoost *a4,
        _BYTE *a5)
{
  char v7; // r15
  NTSTATUS v9; // ebp
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  signed int Priority; // [rsp+60h] [rbp+8h] BYREF

  v7 = (char)a2;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  do
  {
    if ( !*(_DWORD *)(a1 + 116) && !_InterlockedExchange((volatile __int32 *)(a1 + 116), 1) )
    {
      if ( a4 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(a4, a2);
        else
          *((_BYTE *)a4 + 10) = 1;
      }
      PsReferenceSiloContext((void *)a1);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 112));
      return 0;
    }
    if ( a4 )
      KeAbPreWait(a4, a2);
    v9 = IopWaitForLockAlertable((PVOID)(a1 + 128), v7, a3);
    if ( a4 )
      a4 = (AutoBoost *)KeAbPreAcquire(a1 + 128, (unsigned __int64)a4, 0LL, v11);
  }
  while ( v9 >= 0 );
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 112));
  if ( !*(_DWORD *)(a1 + 116) && *(_DWORD *)(a1 + 112) )
  {
    Priority = KeGetCurrentThread()->Priority;
    KeSetEventBoostPriorityEx(a1 + 128, (__int64)v13, &Priority, (struct _KTHREAD *)(a1 + 128), 0, 1);
  }
  if ( a4 )
    KeAbPostReleaseEx((struct _KTHREAD *)(a1 + 128), (unsigned __int64)a4, v10, (__int64)v11);
  *a5 = 1;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
