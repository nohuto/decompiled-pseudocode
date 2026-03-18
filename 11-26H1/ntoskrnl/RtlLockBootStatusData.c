/*
 * XREFs of RtlLockBootStatusData @ 0x140B12DA0
 * Callers:
 *     PoClearTransitionMarker @ 0x1407C881C (PoClearTransitionMarker.c)
 *     PopBootStatCheckIntegrity @ 0x1407DAC78 (PopBootStatCheckIntegrity.c)
 *     CmCompleteRegistryInitialization @ 0x14084E49C (CmCompleteRegistryInitialization.c)
 *     PopBootStatGet @ 0x140B67DA4 (PopBootStatGet.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlpAcquireBootStatusLock @ 0x1404E3E70 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404EF738 (RtlpReleaseBootStatusLock.c)
 *     RtlInitializeBootStatDataCache @ 0x140619DE4 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x140619F0C (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x140723A50 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlLockBootStatusData(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  WCHAR *v4; // rdi
  NTSTATUS v6; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v11; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  FileHandle = 0LL;
  v6 = 0;
  DestinationString = 0LL;
  SourceString = 0LL;
  IoStatusBlock = 0LL;
  v11 = 0;
  RtlpAcquireBootStatusLock((__int64)a1, a2, a3, a4);
  ++HIDWORD(NormalizationListLock.StateSaveArea);
  if ( LOBYTE(NormalizationListLock.CurrentRunTime) )
  {
    if ( a1 )
    {
      *a1 = NormalizationListLock.CycleTime;
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
  v6 = ZwOpenFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( v6 < 0 )
  {
    NormalizationListLock.CycleTime = 0LL;
    LOBYTE(NormalizationListLock.CurrentRunTime) = 0;
    HIDWORD(NormalizationListLock.StateSaveArea) = 0;
    if ( a1 )
      *a1 = 0LL;
  }
  else
  {
    NormalizationListLock.CycleTime = (volatile unsigned __int64)FileHandle;
    LOBYTE(NormalizationListLock.CurrentRunTime) = 1;
    RtlInitializeBootStatDataCache();
    if ( !a1 )
    {
LABEL_7:
      BYTE1(NormalizationListLock.CurrentRunTime) = 1;
      goto LABEL_4;
    }
    *a1 = FileHandle;
  }
LABEL_4:
  RtlpReleaseBootStatusLock();
  if ( v11 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
