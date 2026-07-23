/*
 * XREFs of DifNtRemoveIoCompletionExWrapper @ 0x14068C570
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtRemoveIoCompletionEx @ 0x140A6AAB0 (NtRemoveIoCompletionEx.c)
 */

__int64 __fastcall DifNtRemoveIoCompletionExWrapper(
        void *a1,
        _FILE_IO_COMPLETION_INFORMATION *a2,
        ULONG a3,
        ULONG *a4,
        LARGE_INTEGER *Timeout,
        BOOLEAN Alertable)
{
  __int128 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int128 *v11; // r14
  int v12; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v14; // si
  __int128 *i; // rbx
  __int64 v16; // rdx
  BOOLEAN v17; // di
  __int128 *j; // rbx
  PVOID v20; // [rsp+30h] [rbp-40h] BYREF
  BOOLEAN v21; // [rsp+38h] [rbp-38h]
  LARGE_INTEGER *v22; // [rsp+40h] [rbp-30h]
  ULONG *v23; // [rsp+48h] [rbp-28h]
  ULONG v24; // [rsp+50h] [rbp-20h]
  _FILE_IO_COMPLETION_INFORMATION *v25; // [rsp+58h] [rbp-18h]
  void *v26; // [rsp+60h] [rbp-10h]
  unsigned int v27; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(&v20, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(650);
  v11 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v12 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v12 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v12 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v20 = ReturnAddressForWrappers;
LABEL_7:
  v14 = 0;
  v26 = a1;
  v22 = Timeout;
  v21 = Alertable;
  v25 = a2;
  v24 = a3;
  v23 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v11 + 4); i != v11 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v20, v10);
    }
    if ( v14 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v27 = NtRemoveIoCompletionEx(a1, a2, a3, a4, Timeout, Alertable);
  if ( v11 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v11 + 6); j != v11 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v20, v16);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v27;
}
