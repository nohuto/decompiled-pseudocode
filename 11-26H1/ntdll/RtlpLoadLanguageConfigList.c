/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x180058140
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     InitializeTEBUserLangList @ 0x180054030 (InitializeTEBUserLangList.c)
 *     RtlpInitializeUserList @ 0x180056710 (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800DAB90 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlOpenCurrentUser @ 0x180056B10 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     GetGlobalizationUserModelType @ 0x1800586B0 (GetGlobalizationUserModelType.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800586F4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x180058A0C (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x180058A90 (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegFreeStringPool @ 0x180059064 (RtlpMuiRegFreeStringPool.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(ULONG Flags, void **a2, __int64 a3)
{
  int PolicyLanguageSpec; // ebx
  void *v7; // r15
  size_t v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  HANDLE v15; // rbx
  int v16; // r12d
  size_t v17; // rax
  _DWORD *Heap_0; // r13
  NTSTATUS v19; // ebx
  char v20; // al
  size_t v21; // rax
  size_t v22; // rax
  NTSTATUS v23; // eax
  void *v25; // rcx
  __int64 LanguageConfigList; // rax
  size_t v27; // rax
  size_t v28; // rax
  NTSTATUS v29; // eax
  unsigned int v30; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-59h] BYREF
  __int128 v32; // [rsp+38h] [rbp-51h] BYREF
  HANDLE CurrentUserKey; // [rsp+48h] [rbp-41h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  int v36; // [rsp+88h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+7h] BYREF
  _UNICODE_STRING ValueName; // [rsp+98h] [rbp+Fh] BYREF

  PolicyLanguageSpec = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  v7 = 0LL;
  CurrentUserKey = 0LL;
  v32 = 0LL;
  if ( !a2 || !a3 )
  {
    PolicyLanguageSpec = -1073741811;
LABEL_48:
    if ( a2 )
    {
      v25 = *a2;
      if ( *a2 != v7 )
      {
        if ( v25 )
          RtlpMuiRegFreeStringPool(v25);
        *a2 = v7;
      }
    }
    return (unsigned int)PolicyLanguageSpec;
  }
  v7 = *a2;
  *((_QWORD *)&v32 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v8 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  LOWORD(v32) = v8;
  WORD1(v32) = v8 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v32;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(KeyHandle);
    if ( PolicyLanguageSpec >= 0 )
      goto LABEL_38;
    if ( Flags != 8 )
      goto LABEL_23;
    v15 = KeyHandle;
    v16 = -1;
    v36 = -1;
    if ( !KeyHandle )
      goto LABEL_23;
    *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
    ValueName.Buffer = (wchar_t *)L"MachineUILock";
    v17 = 2 * wcslen(L"MachineUILock");
    ResultLength = 0;
    if ( v17 >= 0xFFFE )
      LOWORD(v17) = -4;
    ValueName.Length = v17;
    ValueName.MaximumLength = v17 + 2;
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, Flags, 0x10uLL);
    if ( !Heap_0 )
      goto LABEL_23;
    v19 = NtQueryValueKey(v15, &ValueName, KeyValuePartialInformation, Heap_0, 0x10u, &ResultLength);
    if ( v19 >= 0 )
    {
      v30 = Heap_0[2];
      if ( v30 > 4 )
      {
        v19 = -2147483643;
      }
      else
      {
        memmove(&v36, Heap_0 + 3, v30);
        v16 = v36;
      }
    }
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
    if ( v19 >= 0 )
    {
      if ( v16 == 1 )
      {
        v20 = 1;
LABEL_20:
        if ( !v19 && v20 == 1 )
          Flags = 4;
        goto LABEL_23;
      }
      if ( v16 )
      {
LABEL_23:
        NtClose(KeyHandle);
        PolicyLanguageSpec = 0;
        KeyHandle = 0LL;
        goto LABEL_6;
      }
    }
    v20 = 0;
    goto LABEL_20;
  }
LABEL_6:
  v11 = GetGlobalizationUserModelType(v10, v9) - 1;
  if ( !v11 )
  {
    v14 = RtlOpenCurrentUser(0x2000000u, &CurrentUserKey);
LABEL_25:
    if ( v14 >= 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v13 = v11 - 1;
  if ( !v13 )
  {
    v14 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &CurrentUserKey);
    goto LABEL_25;
  }
  if ( v13 == 1 )
  {
    ResultLength = 0;
    v14 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v12, &CurrentUserKey, &ResultLength);
    goto LABEL_25;
  }
LABEL_26:
  CurrentUserKey = 0LL;
LABEL_27:
  if ( Flags == 8 )
  {
    if ( !CurrentUserKey )
      goto LABEL_38;
    *(_QWORD *)&v32 = 0LL;
    *((_QWORD *)&v32 + 1) = L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
    v21 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    if ( v21 >= 0xFFFE )
      LOWORD(v21) = -4;
    LOWORD(v32) = v21;
    WORD1(v32) = v21 + 2;
    ObjectAttributes.RootDirectory = CurrentUserKey;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v32;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(Handle);
      if ( PolicyLanguageSpec >= 0 )
        goto LABEL_38;
      PolicyLanguageSpec = 0;
    }
    *(_QWORD *)&v32 = 0LL;
    *((_QWORD *)&v32 + 1) = L"Control Panel\\Desktop\\LanguageConfiguration";
    v22 = 2 * wcslen(L"Control Panel\\Desktop\\LanguageConfiguration");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    KeyHandle = 0LL;
    if ( v22 >= 0xFFFE )
      LOWORD(v22) = -4;
    LOWORD(v32) = v22;
    WORD1(v32) = v22 + 2;
    ObjectAttributes.RootDirectory = CurrentUserKey;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v32;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v23 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v23 >= 0 )
      goto LABEL_37;
    if ( v23 != -1073741772 )
      PolicyLanguageSpec = v23;
  }
  else
  {
    if ( Flags != 4 )
      goto LABEL_37;
    if ( CurrentUserKey )
    {
      *(_QWORD *)&v32 = 0LL;
      *((_QWORD *)&v32 + 1) = L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration";
      v27 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
      KeyHandle = 0LL;
      if ( v27 >= 0xFFFE )
        LOWORD(v27) = -4;
      LOWORD(v32) = v27;
      WORD1(v32) = v27 + 2;
      ObjectAttributes.RootDirectory = CurrentUserKey;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v32;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
        goto LABEL_37;
    }
    *(_QWORD *)&v32 = 0LL;
    *((_QWORD *)&v32 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration";
    v28 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    KeyHandle = 0LL;
    if ( v28 >= 0xFFFE )
      LOWORD(v28) = -4;
    ObjectAttributes.RootDirectory = 0LL;
    LOWORD(v32) = v28;
    WORD1(v32) = v28 + 2;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v32;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v29 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    PolicyLanguageSpec = v29;
    if ( v29 >= 0 )
    {
LABEL_37:
      PolicyLanguageSpec = RtlpPopulateLanguageConfigList(KeyHandle, a2, a3);
      goto LABEL_38;
    }
    if ( v29 == -1073741772 )
      PolicyLanguageSpec = 0;
  }
LABEL_38:
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( Handle )
    NtClose(Handle);
  if ( CurrentUserKey )
    NtClose(CurrentUserKey);
  if ( PolicyLanguageSpec < 0 )
    goto LABEL_48;
  if ( *a2 )
    return (unsigned int)PolicyLanguageSpec;
  LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
  *a2 = (void *)LanguageConfigList;
  if ( LanguageConfigList )
    return (unsigned int)PolicyLanguageSpec;
  *a2 = v7;
  return 3221225495LL;
}
