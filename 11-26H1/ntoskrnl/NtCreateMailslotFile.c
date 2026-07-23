/*
 * XREFs of NtCreateMailslotFile @ 0x140B3E0E0
 * Callers:
 *     DifNtCreateMailslotFileWrapper @ 0x140675930 (DifNtCreateMailslotFileWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 */

NTSTATUS __cdecl NtCreateMailslotFile(
        PHANDLE FileHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CreateOptions,
        ULONG MailslotQuota,
        ULONG MaximumMessageSize,
        PLARGE_INTEGER ReadTimeout)
{
  char PreviousMode; // cl
  SIZE_T Length; // [rsp+50h] [rbp-88h]
  __int128 v15; // [rsp+88h] [rbp-50h] BYREF
  __int64 v16; // [rsp+98h] [rbp-40h]

  v15 = 0LL;
  v16 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ReadTimeout )
  {
    LOBYTE(v16) = 1;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)ReadTimeout & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *((_QWORD *)&v15 + 1) = RtlReadULong64FromUser(ReadTimeout);
    }
    else
    {
      RtlCopyVolatileMemory((char *)&v15 + 8, ReadTimeout, 8uLL);
    }
  }
  LODWORD(v15) = MailslotQuota;
  DWORD1(v15) = MaximumMessageSize;
  LODWORD(Length) = 0;
  return IopCreateFile(
           FileHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           (unsigned int *)IoStatusBlock,
           0LL,
           0,
           3,
           2u,
           CreateOptions,
           0LL,
           Length,
           2,
           &v15,
           0,
           0,
           0LL);
}
