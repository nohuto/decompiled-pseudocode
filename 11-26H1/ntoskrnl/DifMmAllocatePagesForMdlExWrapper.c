/*
 * XREFs of DifMmAllocatePagesForMdlExWrapper @ 0x140669CC0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     MmAllocatePagesForMdlEx @ 0x14034A280 (MmAllocatePagesForMdlEx.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PMDL __fastcall DifMmAllocatePagesForMdlExWrapper(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T a4,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  unsigned __int128 v7; // rdi
  __int128 *APIThunkContextById; // rax
  __int64 v9; // rdx
  __int128 *v10; // r13
  int v11; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v13; // r12
  __int128 *i; // r14
  __int64 v15; // rdx
  BOOLEAN v16; // di
  __int128 *j; // rbx
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h]
  unsigned __int128 v21; // [rsp+50h] [rbp-20h]
  PMDL PagesForMdl; // [rsp+60h] [rbp-10h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  PagesForMdl = 0LL;
  v19 = 0LL;
  v7 = __PAIR128__(LowAddress.QuadPart, HighAddress.QuadPart);
  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(229);
  v10 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v11 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v11 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v11 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  *(_QWORD *)&v19 = ReturnAddressForWrappers;
LABEL_7:
  v13 = 0;
  *(_QWORD *)&v20 = a4;
  *((_QWORD *)&v19 + 1) = __PAIR64__(CacheType, Flags);
  v21 = v7;
  *((PHYSICAL_ADDRESS *)&v20 + 1) = SkipBytes;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v10 + 4); i != v10 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v19, v9);
    }
    if ( v13 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  PagesForMdl = MmAllocatePagesForMdlEx(
                  *(PHYSICAL_ADDRESS *)((char *)&v7 + 8),
                  *(PHYSICAL_ADDRESS *)&v7,
                  SkipBytes,
                  a4,
                  CacheType,
                  Flags);
  if ( v10 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v10 + 6); j != v10 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v19, v15);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return PagesForMdl;
}
