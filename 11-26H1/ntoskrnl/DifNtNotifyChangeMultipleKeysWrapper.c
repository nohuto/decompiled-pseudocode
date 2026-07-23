/*
 * XREFs of DifNtNotifyChangeMultipleKeysWrapper @ 0x1406801E0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 */

__int64 __fastcall DifNtNotifyChangeMultipleKeysWrapper(
        void *a1,
        ULONG a2,
        OBJECT_ATTRIBUTES *a3,
        void *a4,
        void (__stdcall *ApcRoutine)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        PVOID ApcContext,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  __int128 *APIThunkContextById; // rax
  __int64 v16; // rdx
  __int128 *v17; // rsi
  int v18; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v20; // r14
  __int128 *i; // rbx
  __int64 v22; // rdx
  BOOLEAN v23; // di
  _QWORD **v24; // rsi
  _QWORD *j; // rbx
  PVOID v27; // [rsp+68h] [rbp-59h] BYREF
  BOOLEAN v28; // [rsp+70h] [rbp-51h]
  ULONG v29; // [rsp+74h] [rbp-4Dh]
  PVOID v30; // [rsp+78h] [rbp-49h]
  BOOLEAN v31; // [rsp+80h] [rbp-41h]
  ULONG v32; // [rsp+84h] [rbp-3Dh]
  struct _IO_STATUS_BLOCK *v33; // [rsp+88h] [rbp-39h]
  PVOID v34; // [rsp+90h] [rbp-31h]
  void (__stdcall *v35)(PVOID, PIO_STATUS_BLOCK, ULONG); // [rsp+98h] [rbp-29h]
  void *v36; // [rsp+A0h] [rbp-21h]
  OBJECT_ATTRIBUTES *v37; // [rsp+A8h] [rbp-19h]
  ULONG v38; // [rsp+B0h] [rbp-11h]
  void *v39; // [rsp+B8h] [rbp-9h]
  unsigned int v40; // [rsp+C0h] [rbp-1h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(&v27, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(792);
  v17 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v18 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v18 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v18 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v27 = ReturnAddressForWrappers;
LABEL_7:
  v20 = 0;
  v39 = a1;
  v35 = ApcRoutine;
  v34 = ApcContext;
  v33 = IoStatusBlock;
  v32 = CompletionFilter;
  v31 = WatchTree;
  v30 = Buffer;
  v29 = BufferSize;
  v28 = Asynchronous;
  v38 = a2;
  v37 = a3;
  v36 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v17 + 4); i != v17 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v27, v16);
    }
    if ( v20 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v40 = NtNotifyChangeMultipleKeys(
          a1,
          a2,
          a3,
          a4,
          ApcRoutine,
          ApcContext,
          IoStatusBlock,
          CompletionFilter,
          WatchTree,
          Buffer,
          BufferSize,
          Asynchronous);
  if ( v17 )
  {
    if ( (v23 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v23 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v24 = (_QWORD **)(v17 + 3);
      for ( j = *v24; j != v24; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v27, v22);
      }
      if ( v23 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v40;
}
