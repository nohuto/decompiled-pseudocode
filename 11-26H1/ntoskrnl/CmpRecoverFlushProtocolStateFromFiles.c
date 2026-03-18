/*
 * XREFs of CmpRecoverFlushProtocolStateFromFiles @ 0x14085C268
 * Callers:
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 * Callees:
 *     SetFailureLocation @ 0x140494894 (SetFailureLocation.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x14085CFE4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140AEB73C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpRecoverFlushProtocolStateFromFiles(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rcx

  v4 = HvRecoverFlushProtocolStateFromFiles();
  v5 = v4;
  if ( v4 >= 0 )
  {
    CmpLockRegistry();
    HvLockHiveFlusherShared(BugCheckParameter2);
    HvLockHiveWriter(BugCheckParameter2);
    v5 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    HvUnlockHiveWriter(BugCheckParameter2);
    HvUnlockHiveFlusherShared(BugCheckParameter2);
    CmpUnlockRegistry(v6);
    if ( v5 >= 0 )
      return 0;
    else
      SetFailureLocation(a2, 0, 37, v5, 32);
  }
  else
  {
    SetFailureLocation(a2, 0, 37, v4, 16);
  }
  return (unsigned int)v5;
}
