/*
 * XREFs of DifNtAllocateVirtualMemoryExWrapper @ 0x14066F440
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtAllocateVirtualMemoryEx @ 0x1409EEA10 (NtAllocateVirtualMemoryEx.c)
 */

__int64 __fastcall DifNtAllocateVirtualMemoryExWrapper(
        void *a1,
        PVOID *a2,
        ULONG_PTR *a3,
        ULONG a4,
        ULONG PageProtection,
        MEM_EXTENDED_PARAMETER *ExtendedParameters,
        ULONG ExtendedParameterCount)
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
  ULONG v22; // [rsp+48h] [rbp-38h]
  MEM_EXTENDED_PARAMETER *v23; // [rsp+50h] [rbp-30h]
  ULONG v24; // [rsp+58h] [rbp-28h]
  ULONG v25; // [rsp+5Ch] [rbp-24h]
  ULONG_PTR *v26; // [rsp+60h] [rbp-20h]
  PVOID *v27; // [rsp+68h] [rbp-18h]
  void *v28; // [rsp+70h] [rbp-10h]
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
  v24 = PageProtection;
  v23 = ExtendedParameters;
  v22 = ExtendedParameterCount;
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
  VirtualMemory = NtAllocateVirtualMemoryEx(a1, a2, a3, a4, PageProtection, ExtendedParameters, ExtendedParameterCount);
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
