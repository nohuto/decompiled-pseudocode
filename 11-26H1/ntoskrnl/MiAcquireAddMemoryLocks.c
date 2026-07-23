/*
 * XREFs of MiAcquireAddMemoryLocks @ 0x14086B2F4
 * Callers:
 *     MiAddPhysicalMemory @ 0x14086B3FC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiLockDynamicMemoryExclusive @ 0x140529F60 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x1406EE344 (MiLockDynamicMemoryNestedExclusive.c)
 */

void __fastcall MiAcquireAddMemoryLocks(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9

  *(_BYTE *)(a1 + 44) = 1;
  MiLockDynamicMemoryExclusive(*(_QWORD *)(a1 + 48), (__int64)KeGetCurrentThread(), a3, a4);
  if ( *(ULONG **)(a1 + 48) != &MiSystemPartition )
    MiLockDynamicMemoryNestedExclusive(v6, v5, v7, v8);
}
