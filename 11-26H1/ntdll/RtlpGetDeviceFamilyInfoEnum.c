/*
 * XREFs of RtlpGetDeviceFamilyInfoEnum @ 0x180082800
 * Callers:
 *     RtlConvertDeviceFamilyInfoToString @ 0x180082700 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlGetDeviceFamilyInfoEnum @ 0x1800827F0 (RtlGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     ReadUlongFromKey @ 0x180082ABC (ReadUlongFromKey.c)
 *     RtlGetVersion @ 0x180083D40 (RtlGetVersion.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     ZwQueryLicenseValue @ 0x180161A50 (ZwQueryLicenseValue.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpGetDeviceFamilyInfoEnum(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  size_t v6; // rax
  size_t v7; // rax
  __int64 v8; // r14
  size_t v9; // rax
  __int64 Data; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Type; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _OSVERSIONINFOEXW VersionInformation; // [rsp+98h] [rbp-70h] BYREF

  if ( a1 )
  {
    memset_thunk_772440563353939046(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
    *(&ObjectAttributes.Length + 1) = 0;
    ValueName.Buffer = (wchar_t *)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion";
    v8 = 0LL;
    *(&ObjectAttributes.Attributes + 1) = 0;
    Type = 0LL;
    LODWORD(Data) = 0;
    *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
    v9 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( v9 >= 0xFFFE )
      LOWORD(v9) = -4;
    ValueName.Length = v9;
    ValueName.MaximumLength = v9 + 2;
    ObjectAttributes.ObjectName = &ValueName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&Type, 0x20119u, &ObjectAttributes) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Type, (wchar_t *)L"UBR") >= 0 )
        v8 = (unsigned int)Data;
      NtClose(Type);
    }
    VersionInformation.dwOSVersionInfoSize = 284;
    RtlGetVersion(&VersionInformation);
    *a1 = v8
        + ((VersionInformation.dwBuildNumber
          + ((VersionInformation.dwMinorVersion + ((unsigned __int64)VersionInformation.dwMajorVersion << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    LODWORD(Type) = 0;
    ValueName.Buffer = (wchar_t *)L"Kernel-OneCore-DeviceFamilyID";
    ResultDataSize = 0;
    LODWORD(Data) = 3;
    *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
    v6 = 2 * wcslen(L"Kernel-OneCore-DeviceFamilyID");
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    ValueName.Length = v6;
    ValueName.MaximumLength = v6 + 2;
    ZwQueryLicenseValue(&ValueName, (PULONG)&Type, &Data, 4u, &ResultDataSize);
    *a2 = Data;
  }
  if ( a3 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    ValueName.Buffer = (wchar_t *)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM";
    *(&ObjectAttributes.Attributes + 1) = 0;
    Type = 0LL;
    LODWORD(Data) = 0;
    *a3 = 0;
    *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
    v7 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    ValueName.Length = v7;
    ValueName.MaximumLength = v7 + 2;
    ObjectAttributes.ObjectName = &ValueName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&Type, 0x20119u, &ObjectAttributes) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Type, (wchar_t *)L"DeviceForm") >= 0 )
        *a3 = Data;
      NtClose(Type);
    }
  }
}
