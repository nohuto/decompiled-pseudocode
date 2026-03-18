/*
 * XREFs of MiAcquireAddMemoryLocks @ 0x140864F14
 * Callers:
 *     MiAddPhysicalMemory @ 0x14086501C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140866D5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiLockDynamicMemoryExclusive @ 0x1405278F0 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x1406E96A4 (MiLockDynamicMemoryNestedExclusive.c)
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
