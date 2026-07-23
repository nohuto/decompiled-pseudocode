/*
 * XREFs of KsepShimDatabaseTime @ 0x140AFFCFC
 * Callers:
 *     KsepShimDbChanged @ 0x1404DCBA4 (KsepShimDbChanged.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 */

__int64 __fastcall KsepShimDatabaseTime(PCWSTR SourceString, _QWORD *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  __int64 v6; // rcx
  char StackBase; // al
  __int64 v8; // rax
  HANDLE FileHandle; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  __int128 FileInformation; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v14; // [rsp+98h] [rbp+2Fh]
  __int64 v15; // [rsp+A8h] [rbp+3Fh]

  *a2 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v15 = 0LL;
  DestinationString = 0LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v14 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v6) = v3;
    StackBase = (char)stru_140E66D40.StackBase;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v6) = 590722;
    if ( (StackBase & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: ZwOpenFile failed opening DB file!\n");
    KsepLogError(0LL, (__int64)"KSE: ZwOpenFile failed opening DB file!\n");
  }
  else
  {
    v4 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    if ( v4 < 0 )
    {
      v8 = ((unsigned __int8)_InterlockedExchangeAdd(
                               (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                               1u)
          + 1) & 0x3F;
      *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v8) = v4;
      *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v8) = 590735;
      if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: ZwQueryInformationFile failed getting DB file!\n");
      KsepLogError(0LL, (__int64)"KSE: ZwQueryInformationFile failed getting DB file!\n");
    }
    else
    {
      *a2 = v14;
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
