/*
 * XREFs of DifMmProbeAndLockProcessPagesWrapper @ 0x14066BB20
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     MmProbeAndLockProcessPages @ 0x140A9E250 (MmProbeAndLockProcessPages.c)
 */

void __fastcall DifMmProbeAndLockProcessPagesWrapper(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  __int128 *APIThunkContextById; // rax
  __int64 v9; // rdx
  __int128 *v10; // rsi
  int v11; // eax
  BOOLEAN v12; // bp
  __int128 *i; // rbx
  __int64 v14; // rdx
  BOOLEAN v15; // di
  _QWORD **v16; // rsi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int128 v19; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(216);
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
    *((_QWORD *)&v19 + 1) = MemoryDescriptorList;
    *(_QWORD *)&v19 = Process;
    BYTE12(v18) = AccessMode;
    DWORD2(v18) = Operation;
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
  MmProbeAndLockProcessPages(MemoryDescriptorList, Process, AccessMode, Operation);
  if ( v10 )
  {
    if ( (v15 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v16 = (_QWORD **)(v10 + 3);
      for ( j = *v16; j != v16; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v18, v14);
      }
      if ( v15 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
