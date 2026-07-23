/*
 * XREFs of DifZwNotifyChangeDirectoryFileExWrapper @ 0x1406AE420
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     ZwNotifyChangeDirectoryFileEx @ 0x14072A420 (ZwNotifyChangeDirectoryFileEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifZwNotifyChangeDirectoryFileExWrapper(
        void *a1,
        void *a2,
        void (__stdcall *a3)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        void *a4,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass)
{
  __int128 *APIThunkContextById; // rax
  __int64 v14; // rdx
  __int128 *v15; // r14
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // si
  __int128 *i; // rbx
  __int64 v20; // rdx
  BOOLEAN v21; // di
  __int128 *j; // rbx
  PVOID v24; // [rsp+58h] [rbp-49h] BYREF
  DIRECTORY_NOTIFY_INFORMATION_CLASS v25; // [rsp+60h] [rbp-41h]
  BOOLEAN v26; // [rsp+64h] [rbp-3Dh]
  ULONG v27; // [rsp+68h] [rbp-39h]
  ULONG v28; // [rsp+6Ch] [rbp-35h]
  PVOID v29; // [rsp+70h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v30; // [rsp+78h] [rbp-29h]
  void *v31; // [rsp+80h] [rbp-21h]
  void (__stdcall *v32)(PVOID, PIO_STATUS_BLOCK, ULONG); // [rsp+88h] [rbp-19h]
  void *v33; // [rsp+90h] [rbp-11h]
  void *v34; // [rsp+98h] [rbp-9h]
  unsigned int v35; // [rsp+A0h] [rbp-1h]
  void *retaddr; // [rsp+D0h] [rbp+2Fh]

  memset_0(&v24, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(978);
  v15 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v16 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v16 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v24 = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v34 = a1;
  v30 = IoStatusBlock;
  v29 = Buffer;
  v28 = Length;
  v27 = CompletionFilter;
  v26 = WatchTree;
  v25 = DirectoryNotifyInformationClass;
  v33 = a2;
  v32 = a3;
  v31 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v15 + 4); i != v15 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v24, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v35 = ZwNotifyChangeDirectoryFileEx(
          a1,
          a2,
          a3,
          a4,
          IoStatusBlock,
          Buffer,
          Length,
          CompletionFilter,
          WatchTree,
          DirectoryNotifyInformationClass);
  if ( v15 )
  {
    if ( (v21 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v15 + 6); j != v15 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v24, v20);
      }
      if ( v21 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v35;
}
