/*
 * XREFs of DifIoCreateFileWrapper @ 0x14065E8A0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IoCreateFile @ 0x1409847E0 (IoCreateFile.c)
 */

__int64 __fastcall DifIoCreateFileWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        struct _IO_STATUS_BLOCK *a4,
        LARGE_INTEGER *AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options)
{
  __int128 *APIThunkContextById; // rax
  __int64 v18; // rdx
  __int128 *v19; // rsi
  int v20; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v22; // r14
  __int128 *i; // rbx
  __int64 v24; // rdx
  BOOLEAN v25; // di
  _QWORD **v26; // rsi
  _QWORD *j; // rbx
  PVOID v29; // [rsp+78h] [rbp-69h] BYREF
  ULONG v30; // [rsp+80h] [rbp-61h]
  PVOID v31; // [rsp+88h] [rbp-59h]
  CREATE_FILE_TYPE v32; // [rsp+90h] [rbp-51h]
  ULONG v33; // [rsp+94h] [rbp-4Dh]
  PVOID v34; // [rsp+98h] [rbp-49h]
  ULONG v35; // [rsp+A0h] [rbp-41h]
  ULONG v36; // [rsp+A4h] [rbp-3Dh]
  ULONG v37; // [rsp+A8h] [rbp-39h]
  ULONG v38; // [rsp+ACh] [rbp-35h]
  LARGE_INTEGER *v39; // [rsp+B0h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v40; // [rsp+B8h] [rbp-29h]
  OBJECT_ATTRIBUTES *v41; // [rsp+C0h] [rbp-21h]
  ACCESS_MASK v42; // [rsp+C8h] [rbp-19h]
  HANDLE *v43; // [rsp+D0h] [rbp-11h]
  unsigned int File; // [rsp+D8h] [rbp-9h]
  void *retaddr; // [rsp+110h] [rbp+2Fh]

  memset_0(&v29, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(353);
  v19 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v20 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v20 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v20 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v29 = ReturnAddressForWrappers;
LABEL_7:
  v22 = 0;
  v43 = a1;
  v39 = AllocationSize;
  v38 = FileAttributes;
  v37 = ShareAccess;
  v36 = Disposition;
  v35 = CreateOptions;
  v34 = EaBuffer;
  v33 = EaLength;
  v32 = CreateFileType;
  v31 = InternalParameters;
  v30 = Options;
  v42 = a2;
  v41 = a3;
  v40 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v19 + 4); i != v19 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v29, v18);
    }
    if ( v22 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  File = IoCreateFile(
           a1,
           a2,
           a3,
           a4,
           AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           EaLength,
           CreateFileType,
           InternalParameters,
           Options);
  if ( v19 )
  {
    if ( (v25 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v25 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v26 = (_QWORD **)(v19 + 3);
      for ( j = *v26; j != v26; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v29, v24);
      }
      if ( v25 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return File;
}
