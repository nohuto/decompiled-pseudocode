/*
 * XREFs of DifNtAllocateVirtualMemoryExWrapper @ 0x14066B860
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtAllocateVirtualMemoryEx @ 0x1409F2240 (NtAllocateVirtualMemoryEx.c)
 */

__int64 __fastcall DifNtAllocateVirtualMemoryExWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        volatile void *a6,
        int a7)
{
  __int128 *APIThunkContextById; // rax
  __int64 v11; // rdx
  __int128 *v12; // r14
  int v13; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v15; // si
  __int128 *i; // rbx
  __int64 v17; // rdx
  BOOLEAN v18; // di
  __int128 *j; // rbx
  PVOID v21; // [rsp+40h] [rbp-40h] BYREF
  int v22; // [rsp+48h] [rbp-38h]
  volatile void *v23; // [rsp+50h] [rbp-30h]
  int v24; // [rsp+58h] [rbp-28h]
  int v25; // [rsp+5Ch] [rbp-24h]
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h]
  __int64 v28; // [rsp+70h] [rbp-10h]
  unsigned int VirtualMemory; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(&v21, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(764);
  v12 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v13 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v13 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v21 = ReturnAddressForWrappers;
LABEL_7:
  v15 = 0;
  v28 = a1;
  v24 = a5;
  v23 = a6;
  v22 = a7;
  v27 = a2;
  v26 = a3;
  v25 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v12 + 4); i != v12 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v21, v11);
    }
    if ( v15 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  VirtualMemory = NtAllocateVirtualMemoryEx(a1, a2, a3, a4, a5, a6, a7);
  if ( v12 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v12 + 6); j != v12 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v21, v17);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return VirtualMemory;
}
