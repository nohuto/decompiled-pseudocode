/*
 * XREFs of CmpRecoverFlushProtocolStateFromFiles @ 0x140862558
 * Callers:
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1408632D4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140AEE648 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
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
