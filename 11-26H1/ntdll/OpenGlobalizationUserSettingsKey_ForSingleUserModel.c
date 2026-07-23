/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1800580A0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800D8790 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     IdnaMemAlloc @ 0x1800AAD50 (IdnaMemAlloc.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  size_t v4; // rax
  NTSTATUS v5; // edi
  size_t v6; // rax
  NTSTATUS v7; // eax
  _DWORD *v8; // r14
  size_t v9; // rax
  unsigned __int64 v10; // r15
  HANDLE v11; // rax
  unsigned __int64 v13; // rdi
  size_t v14; // rax
  HANDLE v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+38h] [rbp-41h] BYREF
  void *Src; // [rsp+40h] [rbp-39h]
  _WORD v18[2]; // [rsp+48h] [rbp-31h] BYREF
  int v19; // [rsp+4Ch] [rbp-2Dh]
  void *v20; // [rsp+50h] [rbp-29h]
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  ULONG ResultLength; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE KeyHandlea; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( !dword_1801CA314 )
  {
    KeyHandlea = 0LL;
    v20 = (void *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\";
    v19 = 0;
    v4 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    if ( v4 >= 0xFFFE )
      LOWORD(v4) = -4;
    v18[0] = v4;
    v18[1] = v4 + 2;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = NtOpenKey(&KeyHandlea, DesiredAccess, &ObjectAttributes);
    if ( v5 < 0 )
      goto LABEL_24;
    ResultLength = 0;
    ValueName.Buffer = (wchar_t *)L"RedirectedKey";
    *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
    v6 = 2 * wcslen(L"RedirectedKey");
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    ValueName.Length = v6;
    ValueName.MaximumLength = v6 + 2;
    v7 = NtQueryValueKey(KeyHandlea, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( !ResultLength || v7 != -1073741789 && v7 != -2147483643 )
    {
      if ( v18[0] <= 0xAAu )
      {
        v13 = v18[0];
        memmove(word_1801C62F0, v20, v18[0]);
        if ( v13 + 2 <= 0xAA )
          word_1801C62F0[v13 >> 1] = 0;
        dword_1801CA314 = 1;
      }
      v5 = 0;
      *KeyHandle = KeyHandlea;
      KeyHandlea = 0LL;
      goto LABEL_24;
    }
    v8 = (_DWORD *)IdnaMemAlloc(ResultLength);
    if ( !v8 )
    {
      v5 = -1073741801;
LABEL_24:
      if ( KeyHandlea )
        NtClose(KeyHandlea);
      return (unsigned int)v5;
    }
    v5 = NtQueryValueKey(KeyHandlea, &ValueName, KeyValuePartialInformation, v8, ResultLength, &ResultLength);
    if ( v5 >= 0 )
    {
      if ( v8[1] == 1 )
      {
        v15 = 0LL;
        v16 = 0LL;
        Src = v8 + 3;
        if ( v8 != (_DWORD *)-12LL )
        {
          v9 = 2 * wcslen((const wchar_t *)v8 + 6);
          if ( v9 >= 0xFFFE )
            LOWORD(v9) = -4;
          LOWORD(v16) = v9;
          WORD1(v16) = v9 + 2;
        }
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = NtOpenKey(&v15, DesiredAccess, &ObjectAttributes);
        if ( v5 < 0 )
          goto LABEL_23;
        if ( (unsigned __int16)v16 <= 0xAAu )
        {
          v10 = (unsigned __int16)v16;
          memmove(word_1801C62F0, Src, (unsigned __int16)v16);
          if ( v10 + 2 <= 0xAA )
            word_1801C62F0[v10 >> 1] = 0;
          dword_1801CA314 = 1;
        }
        v11 = v15;
      }
      else
      {
        v11 = KeyHandlea;
        KeyHandlea = 0LL;
      }
      *KeyHandle = v11;
    }
LABEL_23:
    RtlpSysVolFree(v8);
    goto LABEL_24;
  }
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ValueName.Buffer = word_1801C62F0;
  v14 = 2 * wcslen(word_1801C62F0);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v14 >= 0xFFFE )
    LOWORD(v14) = -4;
  ValueName.Length = v14;
  ValueName.MaximumLength = v14 + 2;
  ObjectAttributes.ObjectName = &ValueName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return (unsigned int)NtOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
