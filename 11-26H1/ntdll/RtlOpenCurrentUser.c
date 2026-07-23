/*
 * XREFs of RtlOpenCurrentUser @ 0x180056B10
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1800580A0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800D8790 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180026E60 (RtlFormatCurrentUserKeyPath.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 */

NTSTATUS __cdecl RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE CurrentUserKey)
{
  int v4; // ebx
  size_t v5; // rax
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  CurrentUserKeyPath = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v4 = RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath);
  if ( v4 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &CurrentUserKeyPath;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = NtOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
    if ( CurrentUserKeyPath.Buffer )
      RtlpSysVolFree(CurrentUserKeyPath.Buffer);
  }
  if ( v4 != -1073741772 )
    return v4;
  *(_QWORD *)&CurrentUserKeyPath.Length = 0LL;
  CurrentUserKeyPath.Buffer = L"\\Registry\\User\\.Default";
  if ( L"\\Registry\\User\\.Default" )
  {
    v5 = 2 * wcslen(L"\\Registry\\User\\.Default");
    if ( v5 >= 0xFFFE )
      LOWORD(v5) = -4;
    CurrentUserKeyPath.Length = v5;
    CurrentUserKeyPath.MaximumLength = v5 + 2;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CurrentUserKeyPath;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 1600;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return NtOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
}
