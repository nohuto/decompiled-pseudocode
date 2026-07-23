/*
 * XREFs of DifNtCreateNamedPipeFileWrapper @ 0x140675C90
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtCreateNamedPipeFile @ 0x140984640 (NtCreateNamedPipeFile.c)
 */

__int64 __fastcall DifNtCreateNamedPipeFileWrapper(
        HANDLE *a1,
        ULONG a2,
        OBJECT_ATTRIBUTES *a3,
        struct _IO_STATUS_BLOCK *a4,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        ULONG NamedPipeType,
        ULONG ReadMode,
        ULONG CompletionMode,
        ULONG MaximumInstances,
        ULONG InboundQuota,
        ULONG OutboundQuota,
        LARGE_INTEGER *DefaultTimeout)
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
  _QWORD v29[2]; // [rsp+78h] [rbp-59h] BYREF
  ULONG v30; // [rsp+88h] [rbp-49h]
  ULONG v31; // [rsp+8Ch] [rbp-45h]
  ULONG v32; // [rsp+90h] [rbp-41h]
  ULONG v33; // [rsp+94h] [rbp-3Dh]
  ULONG v34; // [rsp+98h] [rbp-39h]
  ULONG v35; // [rsp+9Ch] [rbp-35h]
  ULONG v36; // [rsp+A0h] [rbp-31h]
  ULONG v37; // [rsp+A4h] [rbp-2Dh]
  ULONG v38; // [rsp+A8h] [rbp-29h]
  struct _IO_STATUS_BLOCK *v39; // [rsp+B0h] [rbp-21h]
  OBJECT_ATTRIBUTES *v40; // [rsp+B8h] [rbp-19h]
  ULONG v41; // [rsp+C0h] [rbp-11h]
  HANDLE *v42; // [rsp+C8h] [rbp-9h]
  unsigned int NamedPipeFile; // [rsp+D0h] [rbp-1h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(v29, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(630);
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
  v29[0] = ReturnAddressForWrappers;
LABEL_7:
  v22 = 0;
  v42 = a1;
  v38 = ShareAccess;
  v37 = CreateDisposition;
  v36 = CreateOptions;
  v35 = NamedPipeType;
  v34 = ReadMode;
  v33 = CompletionMode;
  v32 = MaximumInstances;
  v31 = InboundQuota;
  v30 = OutboundQuota;
  v29[1] = DefaultTimeout;
  v41 = a2;
  v40 = a3;
  v39 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v19 + 4); i != v19 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v29, v18);
    }
    if ( v22 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  NamedPipeFile = NtCreateNamedPipeFile(
                    a1,
                    a2,
                    a3,
                    a4,
                    ShareAccess,
                    CreateDisposition,
                    CreateOptions,
                    NamedPipeType,
                    ReadMode,
                    CompletionMode,
                    MaximumInstances,
                    InboundQuota,
                    OutboundQuota,
                    DefaultTimeout);
  if ( v19 )
  {
    if ( (v25 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v25 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v26 = (_QWORD **)(v19 + 3);
      for ( j = *v26; j != v26; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v29, v24);
      }
      if ( v25 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return NamedPipeFile;
}
