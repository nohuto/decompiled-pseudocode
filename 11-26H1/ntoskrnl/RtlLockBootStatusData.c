/*
 * XREFs of RtlLockBootStatusData @ 0x140B14C40
 * Callers:
 *     PoClearTransitionMarker @ 0x1407CB8BC (PoClearTransitionMarker.c)
 *     PopBootStatCheckIntegrity @ 0x1407DEB68 (PopBootStatCheckIntegrity.c)
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 *     PopBootStatGet @ 0x140B6AD34 (PopBootStatGet.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlpAcquireBootStatusLock @ 0x1404DD410 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404E8D18 (RtlpReleaseBootStatusLock.c)
 *     RtlInitializeBootStatDataCache @ 0x14061CE34 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x14061CF5C (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlLockBootStatusData(PHANDLE FileHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  WCHAR *v4; // rdi
  int v6; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v11; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandlea; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  FileHandlea = 0LL;
  v6 = 0;
  DestinationString = 0LL;
  SourceString = 0LL;
  IoStatusBlock = 0LL;
  v11 = 0;
  RtlpAcquireBootStatusLock((__int64)FileHandle, v1, v2, v3);
  ++HIDWORD(NormalizationListLock.SchedulingGroup);
  if ( BYTE4(NormalizationListLock.CycleTime) )
  {
    if ( FileHandle )
    {
      *FileHandle = *(HANDLE *)&NormalizationListLock.CurrentRunTime;
      goto LABEL_4;
    }
    goto LABEL_7;
  }
  RtlpGetBootStatusPath(&SourceString, &v11);
  v4 = (WCHAR *)SourceString;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenFile(&FileHandlea, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( v6 < 0 )
  {
    *(_QWORD *)&NormalizationListLock.CurrentRunTime = 0LL;
    BYTE4(NormalizationListLock.CycleTime) = 0;
    HIDWORD(NormalizationListLock.SchedulingGroup) = 0;
    if ( FileHandle )
      *FileHandle = 0LL;
  }
  else
  {
    *(_QWORD *)&NormalizationListLock.CurrentRunTime = FileHandlea;
    BYTE4(NormalizationListLock.CycleTime) = 1;
    RtlInitializeBootStatDataCache();
    if ( !FileHandle )
    {
LABEL_7:
      LOBYTE(NormalizationListLock.SchedulingGroup) = 1;
      goto LABEL_4;
    }
    *FileHandle = FileHandlea;
  }
LABEL_4:
  RtlpReleaseBootStatusLock();
  if ( v11 )
    ExFreePoolWithTag(v4, 0);
  return v6;
}
