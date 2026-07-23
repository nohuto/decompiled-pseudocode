/*
 * XREFs of ExpSetPendingUILanguage @ 0x140B202E0
 * Callers:
 *     NtSetDefaultUILanguage @ 0x140B202C0 (NtSetDefaultUILanguage.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404E8A68 (DownLevelLangIDToLanguageName.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1404F05D4 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x140729B40 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     NtQueryInstallUILanguage @ 0x140B29800 (NtQueryInstallUILanguage.c)
 */

NTSTATUS ExpSetPendingUILanguage()
{
  char v0; // r12
  char v1; // r13
  __int64 v2; // rdx
  int v3; // ecx
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  ULONG v6; // r15d
  ULONG v7; // esi
  ULONG v8; // edx
  NTSTATUS InstallUILanguage; // ebx
  ULONG v10; // eax
  ULONG v11; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *Teb; // rcx
  NTSTATUS v14; // esi
  unsigned int v15; // r14d
  HANDLE v16; // rcx
  LANGID InstallUILanguageId[2]; // [rsp+40h] [rbp-488h] BYREF
  ULONG ResultLength; // [rsp+44h] [rbp-484h] BYREF
  HANDLE v19; // [rsp+48h] [rbp-480h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-478h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-470h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-468h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-458h] BYREF
  UNICODE_STRING ValueName; // [rsp+A0h] [rbp-428h] BYREF
  HANDLE v25; // [rsp+B0h] [rbp-418h] BYREF
  HANDLE v26; // [rsp+B8h] [rbp-410h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp-408h] BYREF
  UNICODE_STRING v28; // [rsp+D0h] [rbp-3F8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+E0h] [rbp-3E8h] BYREF
  int v30; // [rsp+E4h] [rbp-3E4h]
  ULONG DataSize; // [rsp+E8h] [rbp-3E0h]
  WCHAR Data[122]; // [rsp+ECh] [rbp-3DCh] BYREF
  WCHAR SourceString[88]; // [rsp+1E0h] [rbp-2E8h] BYREF
  _BYTE v34[4]; // [rsp+290h] [rbp-238h] BYREF
  int v35; // [rsp+294h] [rbp-234h]
  ULONG v36[2]; // [rsp+298h] [rbp-230h] BYREF
  unsigned int Size; // [rsp+2A0h] [rbp-228h]
  size_t Size_4; // [rsp+2A4h] [rbp-224h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  Handle = 0LL;
  memset_0(SourceString, 0, 0xAAuLL);
  ResultLength = 0;
  KeyHandle = 0LL;
  v26 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v0 = 1;
  v1 = 0;
  result = OpenGlobalizationUserSettingsKey(v3, v2, &v25);
  if ( result < 0 )
    return result;
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v25;
  ObjectAttributes.Attributes = 1600;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  *(_DWORD *)InstallUILanguageId = v5;
  if ( v5 < 0 )
    goto LABEL_10;
  RtlInitUnicodeString(&ValueName, L"PreferredUILanguagesPending");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength) >= 0
    && DataSize >= 4
    && v30 == 7 )
  {
    RtlInitUnicodeString(&ValueName, L"PreferredUILanguages");
    if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 7u, Data, DataSize) >= 0 )
    {
      v1 = 1;
      if ( DataSize + 12 < 0x100 )
      {
        Data[((unsigned __int64)DataSize >> 1) - 1] = 0;
        RtlInitUnicodeString(&ValueName, L"PreferredUILanguagesPending");
        ZwDeleteValueKey(KeyHandle, &ValueName);
        RtlInitUnicodeString(&v28, Data);
        RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfigurationPending");
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = v25;
        ObjectAttributes.Attributes = 1600;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&v26, 0x40000000u, &ObjectAttributes) >= 0
          && ZwQueryValueKey(v26, &v28, KeyValuePartialInformation, v34, 0x210u, &ResultLength) >= 0
          && v35 == 7 )
        {
          RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = v25;
          ObjectAttributes.Attributes = 1600;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwCreateKey(&Handle, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
          {
            if ( ZwSetValueKey(Handle, &v28, 0, 7u, &v36[1], v36[0]) >= 0 )
              ZwDeleteValueKey(v26, &v28);
            ZwClose(Handle);
          }
        }
      }
    }
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v25;
  ObjectAttributes.Attributes = 1600;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwOpenKey(&v19, 0x40000000u, &ObjectAttributes);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 1600;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x80000000, &ObjectAttributes) < 0 )
  {
    if ( v19 )
    {
      RtlInitUnicodeString(&ValueName, L"MachinePreferredUILanguages");
      ZwDeleteValueKey(v19, &ValueName);
    }
LABEL_7:
    RtlInitUnicodeString(&DestinationString, L"MachineLanguageConfiguration");
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v19;
    ObjectAttributes.Attributes = 1600;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&v21, 0x40000000u, &ObjectAttributes) >= 0 )
    {
      v11 = 0;
      do
      {
        memset_0(KeyValueInformation, 0, 0x100uLL);
        v14 = ZwEnumerateValueKey(v21, v11, KeyValueBasicInformation, KeyValueInformation, 0xFEu, &ResultLength);
        if ( v14 >= 0 )
        {
          RtlInitUnicodeString(&ValueName, Data);
          if ( ZwDeleteValueKey(v21, &ValueName) < 0 )
          {
            DbgPrint("*** MUI: Failed to delete value %S from MachineLanguageConfiguration!\n", Data);
            ++v11;
          }
        }
      }
      while ( v14 >= 0 );
    }
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1600;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x80000000, &ObjectAttributes) >= 0 )
    {
      v6 = 0;
      do
      {
        v7 = v6;
        memset_0(v34, 0, 0x210uLL);
        v8 = v6++;
        v5 = ZwEnumerateValueKey(Handle, v8, KeyValueFullInformation, v34, 0x20Eu, &ResultLength);
        *(_DWORD *)InstallUILanguageId = v5;
        if ( v5 >= 0 )
        {
          v15 = Size;
          if ( (unsigned __int64)Size + 24 <= 0x210 && v36[0] + v36[1] <= 0x210 && v35 == 7 && Size < 0xAA )
          {
            memset_0(SourceString, 0, 0xAAuLL);
            memmove(SourceString, &Size_4, v15);
            RtlInitUnicodeString(&ValueName, SourceString);
            v16 = v21;
            if ( !v21 )
            {
              RtlInitUnicodeString(&DestinationString, L"MachineLanguageConfiguration");
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = v19;
              ObjectAttributes.Attributes = 1600;
              ObjectAttributes.ObjectName = &DestinationString;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v5 = ZwCreateKey(&v21, 0x40000000u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
              *(_DWORD *)InstallUILanguageId = v5;
              if ( v5 < 0 )
                goto LABEL_10;
              v0 = 0;
              v16 = v21;
            }
            v5 = ZwSetValueKey(v16, &ValueName, 0, 7u, &v34[v36[0]], v36[1]);
            *(_DWORD *)InstallUILanguageId = v5;
            if ( v5 < 0 )
            {
              DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %S\n", SourceString);
              v5 = 0;
              *(_DWORD *)InstallUILanguageId = 0;
            }
          }
          else
          {
            DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %u\n", v7);
          }
        }
      }
      while ( v5 >= 0 );
      ZwClose(Handle);
    }
    else
    {
      v5 = 0;
      *(_DWORD *)InstallUILanguageId = 0;
    }
    goto LABEL_10;
  }
  RtlInitUnicodeString(&ValueName, L"PreferredUILanguages");
  if ( ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength) < 0
    || DataSize < 4
    || v30 != 7 )
  {
    InstallUILanguageId[0] = 0;
    DataSize = 0;
    InstallUILanguage = NtQueryInstallUILanguage(InstallUILanguageId);
    if ( InstallUILanguage >= 0 )
    {
      v10 = DownLevelLangIDToLanguageName(InstallUILanguageId[0], Data, 128, 0);
      DataSize = v10;
      if ( !v10 )
      {
        InstallUILanguage = -1073741823;
        goto LABEL_58;
      }
      DataSize = 2 * v10;
    }
    if ( InstallUILanguage >= 0 )
      goto LABEL_28;
LABEL_58:
    DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages due to error %d\n", InstallUILanguage);
    if ( v19 )
      ZwDeleteValueKey(v19, &ValueName);
    goto LABEL_31;
  }
LABEL_28:
  if ( v19 )
    goto LABEL_29;
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v25;
  ObjectAttributes.Attributes = 1600;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateKey(&v19, 0x40000000u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
  *(_DWORD *)InstallUILanguageId = v5;
  if ( v5 >= 0 )
  {
LABEL_29:
    RtlInitUnicodeString(&ValueName, L"MachinePreferredUILanguages");
    if ( ZwSetValueKey(v19, &ValueName, 0, 7u, Data, DataSize) < 0 )
      DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages\n");
LABEL_31:
    ZwClose(Handle);
    goto LABEL_7;
  }
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v26 )
  {
    if ( ZwEnumerateValueKey(v26, 0, KeyValueBasicInformation, 0LL, 0, &ResultLength) == -2147483622 )
      ZwDeleteKey(v26);
    ZwClose(v26);
  }
  if ( v19 )
  {
    if ( !v21 || v0 && ZwEnumerateValueKey(v21, 0, KeyValueBasicInformation, 0LL, 0, &ResultLength) == -2147483622 )
    {
      if ( v21 )
        ZwDeleteKey(v21);
      if ( ZwEnumerateValueKey(v19, 0, KeyValueBasicInformation, 0LL, 0, &ResultLength) == -2147483622 )
        ZwDeleteKey(v19);
    }
    ZwClose(v19);
  }
  if ( v21 )
    ZwClose(v21);
  if ( v25 )
    ZwClose(v25);
  if ( v1 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
    if ( Teb )
      RtlWriteULongToUser(Teb + 1530, 0);
  }
  return v5;
}
