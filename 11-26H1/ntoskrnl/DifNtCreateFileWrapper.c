/*
 * XREFs of DifNtCreateFileWrapper @ 0x140674870
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtCreateFile @ 0x140984A20 (NtCreateFile.c)
 */

__int64 __fastcall DifNtCreateFileWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        struct _IO_STATUS_BLOCK *a4,
        LARGE_INTEGER *AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  __int128 *APIThunkContextById; // rax
  __int64 v15; // rdx
  __int128 *v16; // r14
  int v17; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v19; // si
  __int128 *i; // rbx
  __int64 v21; // rdx
  BOOLEAN v22; // di
  __int128 *j; // rbx
  PVOID v25; // [rsp+68h] [rbp-59h] BYREF
  ULONG v26; // [rsp+70h] [rbp-51h]
  PVOID v27; // [rsp+78h] [rbp-49h]
  ULONG v28; // [rsp+80h] [rbp-41h]
  ULONG v29; // [rsp+84h] [rbp-3Dh]
  ULONG v30; // [rsp+88h] [rbp-39h]
  ULONG v31; // [rsp+8Ch] [rbp-35h]
  LARGE_INTEGER *v32; // [rsp+90h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v33; // [rsp+98h] [rbp-29h]
  OBJECT_ATTRIBUTES *v34; // [rsp+A0h] [rbp-21h]
  ACCESS_MASK v35; // [rsp+A8h] [rbp-19h]
  HANDLE *v36; // [rsp+B0h] [rbp-11h]
  unsigned int File; // [rsp+B8h] [rbp-9h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(&v25, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(208);
  v16 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v17 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v17 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v17 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v25 = ReturnAddressForWrappers;
LABEL_7:
  v19 = 0;
  v36 = a1;
  v32 = AllocationSize;
  v31 = FileAttributes;
  v30 = ShareAccess;
  v29 = CreateDisposition;
  v28 = CreateOptions;
  v27 = EaBuffer;
  v26 = EaLength;
  v35 = a2;
  v34 = a3;
  v33 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v16 + 4); i != v16 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v25, v15);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  File = NtCreateFile(
           a1,
           a2,
           a3,
           a4,
           AllocationSize,
           FileAttributes,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           EaBuffer,
           EaLength);
  if ( v16 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v16 + 6); j != v16 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v25, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return File;
}
