/*
 * XREFs of DifNtCreateMailslotFileWrapper @ 0x140675930
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtCreateMailslotFile @ 0x140B3E0E0 (NtCreateMailslotFile.c)
 */

__int64 __fastcall DifNtCreateMailslotFileWrapper(
        HANDLE *a1,
        ULONG a2,
        OBJECT_ATTRIBUTES *a3,
        struct _IO_STATUS_BLOCK *a4,
        ULONG CreateOptions,
        ULONG MailslotQuota,
        ULONG MaximumMessageSize,
        LARGE_INTEGER *ReadTimeout)
{
  __int128 *APIThunkContextById; // rax
  __int64 v12; // rdx
  __int128 *v13; // r14
  int v14; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v16; // si
  __int128 *i; // rbx
  __int64 v18; // rdx
  BOOLEAN v19; // di
  __int128 *j; // rbx
  _QWORD v22[2]; // [rsp+48h] [rbp-39h] BYREF
  ULONG v23; // [rsp+58h] [rbp-29h]
  ULONG v24; // [rsp+5Ch] [rbp-25h]
  ULONG v25; // [rsp+60h] [rbp-21h]
  struct _IO_STATUS_BLOCK *v26; // [rsp+68h] [rbp-19h]
  OBJECT_ATTRIBUTES *v27; // [rsp+70h] [rbp-11h]
  ULONG v28; // [rsp+78h] [rbp-9h]
  HANDLE *v29; // [rsp+80h] [rbp-1h]
  unsigned int MailslotFile; // [rsp+88h] [rbp+7h]
  void *retaddr; // [rsp+C0h] [rbp+3Fh]

  memset_0(v22, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(631);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v14 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v14 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v22[0] = ReturnAddressForWrappers;
LABEL_7:
  v16 = 0;
  v29 = a1;
  v25 = CreateOptions;
  v24 = MailslotQuota;
  v23 = MaximumMessageSize;
  v22[1] = ReadTimeout;
  v28 = a2;
  v27 = a3;
  v26 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v13 + 4); i != v13 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v22, v12);
    }
    if ( v16 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  MailslotFile = NtCreateMailslotFile(a1, a2, a3, a4, CreateOptions, MailslotQuota, MaximumMessageSize, ReadTimeout);
  if ( v13 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v13 + 6); j != v13 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v22, v18);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return MailslotFile;
}
