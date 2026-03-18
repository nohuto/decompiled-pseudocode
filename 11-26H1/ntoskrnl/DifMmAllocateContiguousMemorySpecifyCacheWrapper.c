/*
 * XREFs of DifMmAllocateContiguousMemorySpecifyCacheWrapper @ 0x1406655D0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x140349920 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall DifMmAllocateContiguousMemorySpecifyCacheWrapper(
        SIZE_T a1,
        PHYSICAL_ADDRESS a2,
        PHYSICAL_ADDRESS a3,
        PHYSICAL_ADDRESS a4,
        MEMORY_CACHING_TYPE CacheType)
{
  __int128 *APIThunkContextById; // rax
  __int64 v9; // rdx
  __int128 *v10; // r13
  int v11; // ecx
  BOOLEAN v12; // r12
  __int128 *i; // r14
  __int64 v14; // rdx
  BOOLEAN v15; // di
  __int128 *j; // rbx
  __int128 v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+40h] [rbp-30h]
  __int128 v20; // [rsp+50h] [rbp-20h]
  PVOID ContiguousMemorySpecifyCacheNode; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  ContiguousMemorySpecifyCacheNode = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(236);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      *(_QWORD *)&v18 = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      *(_QWORD *)&v18 = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    *((_QWORD *)&v20 + 1) = a1;
    DWORD2(v18) = CacheType;
    *(PHYSICAL_ADDRESS *)&v20 = a2;
    *((PHYSICAL_ADDRESS *)&v19 + 1) = a3;
    *(PHYSICAL_ADDRESS *)&v19 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v10 + 4); i != v10 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v18, v9);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  ContiguousMemorySpecifyCacheNode = MmAllocateContiguousMemorySpecifyCacheNode(a1, a2, a3, a4, CacheType, 0x80000000);
  if ( v10 )
  {
    if ( (v15 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v10 + 6); j != v10 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v18, v14);
      }
      if ( v15 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return ContiguousMemorySpecifyCacheNode;
}
