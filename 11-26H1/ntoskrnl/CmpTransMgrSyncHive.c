/*
 * XREFs of CmpTransMgrSyncHive @ 0x1408AF3A0
 * Callers:
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 * Callees:
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v5; // rcx

  CmpLockRegistry();
  HvLockHiveFlusherExclusive(BugCheckParameter2);
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) == 0 )
  {
    HvLockHiveWriter(BugCheckParameter2);
    v3 = HvpMarkDirty(BugCheckParameter2);
    HvUnlockHiveWriter(BugCheckParameter2);
    if ( v3 < 0 )
    {
      HvUnlockHiveFlusherExclusive(BugCheckParameter2);
      CmpUnlockRegistry(v5);
      return (unsigned int)v3;
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
  }
  HvUnlockHiveFlusherExclusive(BugCheckParameter2);
  CmpUnlockRegistry(v2);
  v3 = 0;
  if ( (int)CmpFlushHive(BugCheckParameter2, 0LL) < 0 )
    return (unsigned int)-1073741670;
  return (unsigned int)v3;
}
