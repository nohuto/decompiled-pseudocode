/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1800580A0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800D8790 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     RtlConvertSidToUnicodeString @ 0x1800272E0 (RtlConvertSidToUnicodeString.c)
 *     RtlGetPersistedStateLocation @ 0x180028780 (RtlGetPersistedStateLocation.c)
 *     RtlAppendUnicodeStringToString @ 0x180043340 (RtlAppendUnicodeStringToString.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlInitUnicodeStringEx @ 0x1800A39B0 (RtlInitUnicodeStringEx.c)
 *     IdnaMemAlloc @ 0x1800AAD50 (IdnaMemAlloc.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(ACCESS_MASK a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  ACCESS_MASK v4; // edi
  HANDLE *v6; // r14
  int v7; // r13d
  __int64 *v8; // r15
  NTSTATUS InformationToken; // ebx
  HANDLE *v10; // rcx
  __int64 v12; // rax
  unsigned __int16 v13; // bx
  wchar_t *v14; // rax
  wchar_t *v15; // rdi
  __int16 v16; // r14
  unsigned __int64 v17; // rbx
  wchar_t *v18; // r12
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  PHANDLE KeyHandle; // [rsp+58h] [rbp-A8h]
  HANDLE Handle[2]; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  WCHAR TargetPath[264]; // [rsp+B0h] [rbp-50h] BYREF

  KeyHandle = a3;
  v4 = a1;
  v6 = a3;
  UnicodeString = 0LL;
  v7 = 0;
  memset(&ObjectAttributes, 0, 44);
  v8 = (__int64 *)IdnaMemAlloc(0x54uLL);
  if ( v8 )
  {
    LODWORD(Handle[0]) = 0;
    InformationToken = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, v8, 0x54u, (PULONG)Handle);
    if ( InformationToken < 0 )
      goto LABEL_10;
    v12 = *v8;
    if ( *(_BYTE *)(*v8 + 1) < 2u
      || *(_BYTE *)(v12 + 1) == 5 && *(_DWORD *)(v12 + 8) == 21 && *(_DWORD *)(v12 + 24) == 503 )
    {
      *a4 = 0;
      goto LABEL_9;
    }
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)*v8, 1u);
    if ( InformationToken < 0 )
    {
LABEL_8:
      if ( !v7 )
      {
LABEL_10:
        RtlpSysVolFree(v8);
        return (unsigned int)InformationToken;
      }
LABEL_9:
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(v4, v6);
      goto LABEL_10;
    }
    LODWORD(Handle[0]) = 0;
    InformationToken = RtlGetPersistedStateLocation(
                         L"GlobalizationUserSettings",
                         L"TargetNtPath",
                         L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                         LocationTypeRegistry,
                         TargetPath,
                         0x208u,
                         (PULONG)Handle);
    if ( InformationToken < 0 )
    {
LABEL_6:
      if ( UnicodeString.Buffer )
        RtlpSysVolFree(UnicodeString.Buffer);
      goto LABEL_8;
    }
    v13 = LOWORD(Handle[0]) + UnicodeString.Length + 4;
    v14 = (wchar_t *)IdnaMemAlloc(v13);
    v15 = v14;
    if ( !v14 )
    {
      InformationToken = -1073741801;
      goto LABEL_5;
    }
    *(_QWORD *)&Destination.Length = 0LL;
    Destination.MaximumLength = v13;
    Destination.Buffer = v14;
    *(_OWORD *)Handle = 0LL;
    if ( RtlInitUnicodeStringEx((PUNICODE_STRING)Handle, TargetPath) < 0 )
    {
      InformationToken = -1073741789;
      goto LABEL_4;
    }
    v16 = (__int16)Handle[0];
    if ( LOWORD(Handle[0]) + (unsigned int)Destination.Length > Destination.MaximumLength )
    {
      InformationToken = -1073741789;
    }
    else
    {
      v17 = LOWORD(Handle[0]);
      v18 = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
      memmove(v18, TargetPath, LOWORD(Handle[0]));
      Destination.Length += v16;
      if ( (unsigned int)Destination.Length + 1 < Destination.MaximumLength )
        v18[v17 >> 1] = 0;
      InformationToken = RtlAppendUnicodeToString(&Destination, L"\\");
      if ( InformationToken >= 0 )
      {
        InformationToken = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
        if ( InformationToken >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          Handle[0] = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(Handle, 0x20019u, &ObjectAttributes) >= 0 )
          {
            NtClose(Handle[0]);
            v6 = KeyHandle;
            v10 = KeyHandle;
            *a4 = 2;
            InformationToken = NtOpenKey(v10, a1, &ObjectAttributes);
LABEL_4:
            RtlpSysVolFree(v15);
LABEL_5:
            v4 = a1;
            goto LABEL_6;
          }
          *a4 = 1;
          v7 = 1;
        }
      }
    }
    v6 = KeyHandle;
    goto LABEL_4;
  }
  return (unsigned int)-1073741801;
}
