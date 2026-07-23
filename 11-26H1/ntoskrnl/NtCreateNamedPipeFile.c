/*
 * XREFs of NtCreateNamedPipeFile @ 0x140984640
 * Callers:
 *     DifNtCreateNamedPipeFileWrapper @ 0x140675C90 (DifNtCreateNamedPipeFileWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 */

NTSTATUS __cdecl NtCreateNamedPipeFile(
        PHANDLE FileHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        ULONG NamedPipeType,
        ULONG ReadMode,
        ULONG CompletionMode,
        ULONG MaximumInstances,
        ULONG InboundQuota,
        ULONG OutboundQuota,
        PLARGE_INTEGER DefaultTimeout)
{
  int v14; // r14d
  int v15; // esi
  int v17; // ebx
  char PreviousMode; // cl
  SIZE_T Length; // [rsp+50h] [rbp-98h]
  __int128 v21; // [rsp+88h] [rbp-60h] BYREF
  __int128 v22; // [rsp+98h] [rbp-50h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-40h]

  v14 = (int)IoStatusBlock;
  v15 = (int)ObjectAttributes;
  v17 = (int)FileHandle;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( DefaultTimeout )
  {
    LOBYTE(v23) = 1;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)DefaultTimeout & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *((_QWORD *)&v22 + 1) = RtlReadULong64FromUser(DefaultTimeout);
    }
    else
    {
      RtlCopyVolatileMemory((char *)&v22 + 8, DefaultTimeout, 8uLL);
    }
  }
  LODWORD(v21) = NamedPipeType;
  DWORD1(v21) = ReadMode;
  DWORD2(v21) = CompletionMode;
  HIDWORD(v21) = MaximumInstances;
  LODWORD(v22) = InboundQuota;
  DWORD1(v22) = OutboundQuota;
  LODWORD(Length) = 0;
  return IopCreateFile(
           v17,
           DesiredAccess,
           v15,
           v14,
           0LL,
           0,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           0LL,
           Length,
           1,
           (__int64)&v21,
           0,
           0,
           0LL);
}
