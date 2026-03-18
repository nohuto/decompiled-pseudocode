/*
 * XREFs of IopWaitAndAcquireFileObjectLock @ 0x1409B6E40
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x1404BA26C (IopValidateAndGetWriteParameters.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140795248 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140799CE0 (NtSetVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     NtSetEaFile @ 0x1409AFCE0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409B0030 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409B0520 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x1409B0D50 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x1409B13A0 (NtQueryVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x1409B8C10 (IopQueryXxxInformation.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 *     IoSetInformation @ 0x140B326A0 (IoSetInformation.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140278AE0 (KeAbPreWait.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeSetEventBoostPriorityEx @ 0x140421E18 (KeSetEventBoostPriorityEx.c)
 *     IopWaitForLockAlertable @ 0x1404AA8E8 (IopWaitForLockAlertable.c)
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)a2, v10);
  return (unsigned int)v9;
}
