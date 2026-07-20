/*
 * XREFs of SmpPagefileInitialize @ 0x140010F40
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000ED40 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpQueryDedicatedDumpSetting @ 0x1400121D0 (SmpQueryDedicatedDumpSetting.c)
 *     SmpQueryDwordFromRegistry @ 0x14001225C (SmpQueryDwordFromRegistry.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 SmpPagefileInitialize()
{
  WCHAR *NtSystemRoot; // rax
  WCHAR v1; // ax
  NTSTATUS v2; // ebx
  int v3; // edx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ecx
  bool v8; // bl
  __int64 v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+30h] [rbp-D8h] BYREF
  const wchar_t *v12; // [rsp+38h] [rbp-D0h]
  _QWORD v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  __int128 SystemInformation; // [rsp+90h] [rbp-78h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-68h]
  _OSVERSIONINFOW VersionInformation; // [rsp+A8h] [rbp-60h] BYREF
  char v19; // [rsp+1C2h] [rbp+BAh]

  v13[0] = 11141288LL;
  v13[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  v14[0] = 8388734LL;
  v14[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v17 = 0LL;
  qword_140031BC8 = (__int64)&SmpPagingFileDescriptorList;
  SmpPagingFileDescriptorList = &SmpPagingFileDescriptorList;
  qword_140031BA8 = (__int64)&SmpVolumeDescriptorList;
  SmpVolumeDescriptorList = (__int64)&SmpVolumeDescriptorList;
  SystemInformation = 0LL;
  NtQuerySystemInformation(SystemPrefetcherInformation|0x80, &SystemInformation, 0x18u, 0LL);
  SmpMemorySize = SystemInformation;
  SmpHighestPhysicalAddress = v17;
  NtSystemRoot = (WCHAR *)RtlGetNtSystemRoot();
  v1 = RtlUpcaseUnicodeChar(*NtSystemRoot);
  ObjectAttributes.RootDirectory = 0LL;
  SmpOsVolumeLetter = v1;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
  ObjectAttributes.Length = 48;
  v2 = NtOpenKey(&SmpMmKey, 0x2001Fu, &ObjectAttributes);
  if ( v2 < 0 )
  {
    v3 = 583;
LABEL_3:
    SmpLogFailure((__int64)"SmpPagefileInitialize", v3, v2);
    return (unsigned int)v2;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = NtOpenKey(&SmpCrashDumpKey, 0x2001Fu, &ObjectAttributes);
  if ( v2 < 0 )
  {
    v3 = 600;
    goto LABEL_3;
  }
  v11 = 2228256LL;
  v12 = L"CrashDumpEnabled";
  LODWORD(v10) = 0;
  v6 = SmpQueryDwordFromRegistry(v5, &v11, 4LL, &v10);
  v7 = v10;
  if ( v6 < 0 )
    v7 = 4;
  SmpDumpType = v7;
  SmpUseDedicatedDumpFile = SmpQueryDedicatedDumpSetting();
  v11 = 1572886LL;
  v12 = L"FilterPages";
  LODWORD(v10) = 0;
  v8 = 0;
  if ( (int)SmpQueryDwordFromRegistry(v9, &v11, 0LL, &v10) >= 0 )
    v8 = (_DWORD)v10 != 0;
  SmpUseFilterPagesDumpFile = v8;
  SmpForceCopyDumpFile = (SmpSystemWriteConstraintInfo & 4) != 0;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( RtlGetVersion(&VersionInformation) >= 0 && v19 == 1 )
    SmpClientSku = 1;
  return 0LL;
}
