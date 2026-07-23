/*
 * XREFs of IoCreateFileEx @ 0x140984880
 * Callers:
 *     DifIoCreateFileExWrapper @ 0x14065E400 (DifIoCreateFileExWrapper.c)
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     IoCreateFileSpecifyDeviceObjectHint @ 0x140AF2B80 (IoCreateFileSpecifyDeviceObjectHint.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 */

NTSTATUS __stdcall IoCreateFileEx(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options,
        PIO_DRIVER_CREATE_CONTEXT DriverContext)
{
  int v15; // ebx
  int v16; // edi
  int v17; // eax
  int v19; // ebp
  struct _ECP_LIST *BugCheckParameter4; // r9
  ULONG v21; // edx
  unsigned int Flags; // ecx
  char v23; // r8
  int v24; // ecx
  struct _LIST_ENTRY *Flink; // rax
  int v26; // ecx
  SIZE_T Length; // [rsp+50h] [rbp-38h]

  v15 = (int)IoStatusBlock;
  v16 = (int)ObjectAttributes;
  v17 = (Options >> 10) & 2;
  v19 = (int)FileHandle;
  if ( !DriverContext )
  {
LABEL_16:
    LODWORD(Length) = EaLength;
    return IopCreateFile(
             v19,
             DesiredAccess,
             v16,
             v15,
             (__int64)AllocationSize,
             FileAttributes,
             ShareAccess,
             Disposition,
             CreateOptions,
             EaBuffer,
             Length,
             CreateFileType,
             (__int64)InternalParameters,
             Options | 0x100,
             v17,
             DriverContext);
  }
  BugCheckParameter4 = DriverContext->ExtraCreateParameter;
  v21 = v17 | 1;
  if ( !DriverContext->DeviceObjectHint )
    v21 = (Options >> 10) & 2;
  if ( !BugCheckParameter4 )
  {
LABEL_11:
    v26 = v21 | 4;
    if ( !DriverContext->TxnParameters )
      v26 = v21;
    v17 = v26;
    if ( DriverContext->Size >= 0x28u && *(_QWORD *)&DriverContext[1].Size != 1LL )
      v17 = v26 | 0x40;
    goto LABEL_16;
  }
  Flags = BugCheckParameter4->Flags;
  if ( (Flags & 9) == 0 )
  {
    v23 = 1;
    v24 = Flags | 1;
LABEL_7:
    Flink = BugCheckParameter4->EcpList.Flink;
    BugCheckParameter4->Flags = v24;
    if ( Flink == &BugCheckParameter4->EcpList )
      KeBugCheckEx(0x10Cu, 0x15uLL, 0LL, 0LL, (ULONG_PTR)BugCheckParameter4);
    do
    {
      if ( v23 )
        LODWORD(Flink[2].Blink) |= 1u;
      Flink = Flink->Flink;
    }
    while ( Flink != &BugCheckParameter4->EcpList );
    goto LABEL_11;
  }
  v23 = 0;
  if ( (BugCheckParameter4->Flags & 0x3F0) != 0x3F0 )
  {
    v24 = Flags + 16;
    goto LABEL_7;
  }
  return -1073740757;
}
