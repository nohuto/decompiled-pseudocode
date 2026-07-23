/*
 * XREFs of DifZwReadFileWrapper @ 0x1404BA200
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     ZwReadFile @ 0x140728080 (ZwReadFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifZwReadFileWrapper(
        void *a1,
        void *a2,
        void (__stdcall *a3)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        void *a4,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        LARGE_INTEGER *ByteOffset,
        ULONG *Key)
{
  __int64 APIThunkContextById; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // si
  _QWORD *i; // rbx
  __int64 v19; // rdx
  BOOLEAN v20; // di
  _QWORD *j; // rbx
  _QWORD v23[3]; // [rsp+58h] [rbp-51h] BYREF
  ULONG v24; // [rsp+70h] [rbp-39h]
  PVOID v25; // [rsp+78h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v26; // [rsp+80h] [rbp-29h]
  void *v27; // [rsp+88h] [rbp-21h]
  void (__stdcall *v28)(PVOID, PIO_STATUS_BLOCK, ULONG); // [rsp+90h] [rbp-19h]
  void *v29; // [rsp+98h] [rbp-11h]
  void *v30; // [rsp+A0h] [rbp-9h]
  unsigned int File; // [rsp+A8h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+37h]

  memset_0(v23, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(32LL);
  v14 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v15 = *(_DWORD *)(APIThunkContextById + 12);
  if ( (v15 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v23[0] = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v30 = a1;
  v26 = IoStatusBlock;
  v25 = Buffer;
  v24 = Length;
  v23[2] = ByteOffset;
  v23[1] = Key;
  v29 = a2;
  v28 = a3;
  v27 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = *(_QWORD **)(v14 + 32); i != (_QWORD *)(v14 + 32); i = (_QWORD *)*i )
    {
      if ( i != (_QWORD *)16 )
        guard_dispatch_icall_no_overrides(v23, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  File = ZwReadFile(a1, a2, a3, a4, IoStatusBlock, Buffer, Length, ByteOffset, Key);
  if ( v14 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = *(_QWORD **)(v14 + 48); j != (_QWORD *)(v14 + 48); j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v23, v19);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return File;
}
