/*
 * XREFs of DifIoCreateFileSpecifyDeviceObjectHintWrapper @ 0x14065E650
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IoCreateFileSpecifyDeviceObjectHint @ 0x140AF2B80 (IoCreateFileSpecifyDeviceObjectHint.c)
 */

__int64 __fastcall DifIoCreateFileSpecifyDeviceObjectHintWrapper(
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
        ULONG Options,
        PVOID DeviceObject)
{
  __int128 *APIThunkContextById; // rax
  __int64 v19; // rdx
  __int128 *v20; // rsi
  int v21; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v23; // r14
  __int128 *i; // rbx
  __int64 v25; // rdx
  BOOLEAN v26; // di
  _QWORD **v27; // rsi
  _QWORD *j; // rbx
  _QWORD v30[2]; // [rsp+88h] [rbp-69h] BYREF
  ULONG v31; // [rsp+98h] [rbp-59h]
  PVOID v32; // [rsp+A0h] [rbp-51h]
  CREATE_FILE_TYPE v33; // [rsp+A8h] [rbp-49h]
  ULONG v34; // [rsp+ACh] [rbp-45h]
  PVOID v35; // [rsp+B0h] [rbp-41h]
  ULONG v36; // [rsp+B8h] [rbp-39h]
  ULONG v37; // [rsp+BCh] [rbp-35h]
  ULONG v38; // [rsp+C0h] [rbp-31h]
  ULONG v39; // [rsp+C4h] [rbp-2Dh]
  LARGE_INTEGER *v40; // [rsp+C8h] [rbp-29h]
  struct _IO_STATUS_BLOCK *v41; // [rsp+D0h] [rbp-21h]
  OBJECT_ATTRIBUTES *v42; // [rsp+D8h] [rbp-19h]
  ACCESS_MASK v43; // [rsp+E0h] [rbp-11h]
  HANDLE *v44; // [rsp+E8h] [rbp-9h]
  unsigned int FileSpecifyDeviceObjectHint; // [rsp+F0h] [rbp-1h]
  void *retaddr; // [rsp+120h] [rbp+2Fh]

  memset_0(v30, 0, 0x70uLL);
  APIThunkContextById = DifGetAPIThunkContextById(351);
  v20 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v21 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v21 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v21 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v30[0] = ReturnAddressForWrappers;
LABEL_7:
  v23 = 0;
  v44 = a1;
  v40 = AllocationSize;
  v39 = FileAttributes;
  v38 = ShareAccess;
  v37 = Disposition;
  v36 = CreateOptions;
  v35 = EaBuffer;
  v34 = EaLength;
  v33 = CreateFileType;
  v32 = InternalParameters;
  v31 = Options;
  v30[1] = DeviceObject;
  v43 = a2;
  v42 = a3;
  v41 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v23 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v20 + 4); i != v20 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v30, v19);
    }
    if ( v23 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  FileSpecifyDeviceObjectHint = IoCreateFileSpecifyDeviceObjectHint(
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
                                  Options,
                                  DeviceObject);
  if ( v20 )
  {
    if ( (v26 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v26 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v27 = (_QWORD **)(v20 + 3);
      for ( j = *v27; j != v27; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v30, v25);
      }
      if ( v26 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return FileSpecifyDeviceObjectHint;
}
