/*
 * XREFs of CmpHiveCachePopulateHiveEntry @ 0x1408684F8
 * Callers:
 *     CmpMachineHiveCachePopulateEntry @ 0x14085DD0C (CmpMachineHiveCachePopulateEntry.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmSiAllocateMemory @ 0x1404B7C28 (CmSiAllocateMemory.c)
 *     CmSiSetEvent @ 0x1406E7D40 (CmSiSetEvent.c)
 *     CmpCreateRegistryThread @ 0x14085D308 (CmpCreateRegistryThread.c)
 *     CmpHiveCacheEntryLockAcquire @ 0x1408682FC (CmpHiveCacheEntryLockAcquire.c)
 *     CmpHiveCacheEntryLockRelease @ 0x140868374 (CmpHiveCacheEntryLockRelease.c)
 */

__int64 __fastcall CmpHiveCachePopulateHiveEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // ebp
  int RegistryThread; // edi
  __int64 Memory; // rax

  v6 = a3;
  if ( a1 && a2 && a5 )
  {
    if ( *(_DWORD *)(a1 + 336) == 1 )
    {
      RegistryThread = -1073741822;
LABEL_11:
      CmpHiveCacheEntryLockAcquire(a1, a2, a3, a4);
      *(_DWORD *)(a1 + 168) = 3;
      CmpHiveCacheEntryLockRelease(a1);
      CmSiSetEvent(a1 + 272);
      CmSiSetEvent(a1 + 288);
      return (unsigned int)RegistryThread;
    }
    Memory = CmSiAllocateMemory();
    a4 = (struct _KLOCK_ENTRIES *)Memory;
    if ( !Memory )
    {
      RegistryThread = -1073741801;
      goto LABEL_11;
    }
    *(_QWORD *)(Memory + 24) = a5;
    *(_DWORD *)(Memory + 20) = 22609921;
    *(_DWORD *)(Memory + 16) = v6;
    *(_QWORD *)(Memory + 8) = a2;
    *(_QWORD *)(Memory + 32) = a6;
    *(_QWORD *)Memory = a1;
    RegistryThread = CmpCreateRegistryThread(a1 + 360, a2, (__int64)CmpHiveCachePopulateHiveEntryThread, Memory);
    if ( RegistryThread < 0 )
      goto LABEL_11;
  }
  else
  {
    RegistryThread = -1073741811;
    SetFailureLocation(a6, 0, 41, -1073741811, 16);
    if ( a1 )
      goto LABEL_11;
  }
  return (unsigned int)RegistryThread;
}
