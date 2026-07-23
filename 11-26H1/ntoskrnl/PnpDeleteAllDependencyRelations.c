/*
 * XREFs of PnpDeleteAllDependencyRelations @ 0x1409B0B74
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 *     IopDeleteDevice @ 0x1409B0B00 (IopDeleteDevice.c)
 * Callees:
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1409B0E50 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x1409B0FCC (PipDeleteAllDependencyRelations.c)
 */

__int64 __fastcall PnpDeleteAllDependencyRelations(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v1 = 0;
  v2 = a1;
  if ( a1 )
  {
    LOBYTE(a1) = 1;
    PnpAcquireDependencyRelationsLock(a1);
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 312) + 80LL) )
    {
      PipAddDependentsToRebuildPowerRelationsQueue(v2);
      PipDeleteAllDependencyRelations(v2);
      PnpReleaseDependencyRelationsLock(v8, v7, v9, v10);
      PipProcessRebuildPowerRelationsQueue();
    }
    else
    {
      PnpReleaseDependencyRelationsLock(v4, v3, v5, v6);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
