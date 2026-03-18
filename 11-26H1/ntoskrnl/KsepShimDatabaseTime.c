/*
 * XREFs of KsepShimDatabaseTime @ 0x140AFDC8C
 * Callers:
 *     KsepShimDbChanged @ 0x1404E3604 (KsepShimDbChanged.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x1404CCBBC (KsepLogError.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x140723610 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x140723A50 (ZwOpenFile.c)
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
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                             1u)
        + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v6 + 4] = v3;
    StackBase = (char)stru_140E66B30.StackBase;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v6) = 590722;
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
                               (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                               1u)
          + 1) & 0x3F;
      *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v8 + 4] = v4;
      *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v8) = 590735;
      if ( ((__int64)stru_140E66B30.StackBase & 2) != 0 )
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
