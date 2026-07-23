/*
 * XREFs of DifNtQueryDirectoryFileWrapper @ 0x140685710
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtQueryDirectoryFile @ 0x140982D50 (NtQueryDirectoryFile.c)
 */

__int64 __fastcall DifNtQueryDirectoryFileWrapper(
        void *a1,
        void *a2,
        void (__stdcall *a3)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        void *a4,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        UNICODE_STRING *FileName,
        BOOLEAN RestartScan)
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
  BOOLEAN v26; // [rsp+70h] [rbp-51h]
  UNICODE_STRING *v27; // [rsp+78h] [rbp-49h]
  BOOLEAN v28; // [rsp+80h] [rbp-41h]
  FILE_INFORMATION_CLASS v29; // [rsp+84h] [rbp-3Dh]
  ULONG v30; // [rsp+88h] [rbp-39h]
  PVOID v31; // [rsp+90h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v32; // [rsp+98h] [rbp-29h]
  void *v33; // [rsp+A0h] [rbp-21h]
  void (__stdcall *v34)(PVOID, PIO_STATUS_BLOCK, ULONG); // [rsp+A8h] [rbp-19h]
  void *v35; // [rsp+B0h] [rbp-11h]
  void *v36; // [rsp+B8h] [rbp-9h]
  unsigned int DirectoryFile; // [rsp+C0h] [rbp-1h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(&v25, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(615);
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
  v32 = IoStatusBlock;
  v31 = FileInformation;
  v30 = Length;
  v29 = FileInformationClass;
  v28 = ReturnSingleEntry;
  v27 = FileName;
  v26 = RestartScan;
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
  DirectoryFile = NtQueryDirectoryFile(
                    a1,
                    a2,
                    a3,
                    a4,
                    IoStatusBlock,
                    FileInformation,
                    Length,
                    FileInformationClass,
                    ReturnSingleEntry,
                    FileName,
                    RestartScan);
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
  return DirectoryFile;
}
