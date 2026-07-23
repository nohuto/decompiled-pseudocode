/*
 * XREFs of RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180053860 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x180055900 (RtlGetUILanguageInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DAA84 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x1800ECFE0 (RtlpInitializeLangRegistryInfo.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18004DC00 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800545D0 (RtlpSetProcUserMachineLangList.c)
 *     RtlOpenCurrentUser @ 0x180056B10 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     GetGlobalizationUserModelType @ 0x1800586B0 (GetGlobalizationUserModelType.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800DACF0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800DAF20 (RtlpMuiRegLoadLicInformation.c)
 *     _RtlpMuiRegDeserializeRegistryInfo @ 0x1800DBF10 (_RtlpMuiRegDeserializeRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1801144C0 (RtlpMuiRegCreateRegistryInfo.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180122270 (_RtlpMuiRegLoadInstalled.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180160E10 (ZwGetMUIRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(_QWORD *a1)
{
  _DWORD *v2; // rbx
  PVOID Heap_0; // rax
  void *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int Installed; // edi
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  NTSTATUS v11; // eax
  __int64 RegistryInfo; // rax
  int LicInformation; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  ULONG DataSize; // [rsp+A0h] [rbp+40h] BYREF
  _DWORD *v23; // [rsp+A8h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+50h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0LL;
  v23 = 0LL;
  if ( !a1 || *a1 )
  {
    Installed = -1073741811;
    goto LABEL_29;
  }
  DataSize = 0;
  if ( ZwGetMUIRegistryInfo(0, &DataSize, 0LL) >= 0 )
  {
    if ( !DataSize )
      goto LABEL_47;
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
    v4 = Heap_0;
    if ( !Heap_0 )
      goto LABEL_47;
    if ( ZwGetMUIRegistryInfo(0, &DataSize, Heap_0) >= 0
      && (int)RtlpMuiRegDeserializeRegistryInfo(v4, DataSize, &v23) >= 0 )
    {
      v2 = v23;
      Installed = RtlpMuiRegAddNeutralToInstalled((__int64)v23);
      if ( Installed >= 0 )
      {
        if ( !*((_QWORD *)v2 + 5) )
          goto LABEL_37;
        Handle = 0LL;
        v20 = 0LL;
        KeyHandle = 0LL;
        v8 = GetGlobalizationUserModelType(v6, v5) - 1;
        if ( v8 )
        {
          v10 = v8 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              LODWORD(v23) = 0;
              v11 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000LL, v9, &Handle, &v23);
              goto LABEL_32;
            }
LABEL_37:
            v23 = 0LL;
            RtlpMuiRegFreeRegistryInfo(v2, 8LL);
            if ( (int)RtlpLoadLanguageConfigList(8u) >= 0 )
            {
              v18 = (__int64)v23;
              if ( v23 )
              {
                *v2 |= 8u;
                *((_QWORD *)v2 + 6) = v18;
              }
              RtlpMuiRegFreeRegistryInfo(v2, 32LL);
              if ( (int)RtlpSetProcUserMachineLangList(v2, 1LL) >= 0 )
              {
                RtlpMuiRegFreeRegistryInfo(v2, 16LL);
                RtlpSetProcUserMachineLangList(v2, 0LL);
              }
            }
            goto LABEL_29;
          }
          v11 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &Handle);
        }
        else
        {
          v11 = RtlOpenCurrentUser(0x2000000u, &Handle);
        }
LABEL_32:
        if ( v11 >= 0 )
        {
          *((_QWORD *)&v20 + 1) = L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration";
          v17 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
          if ( v17 >= 0xFFFE )
            LOWORD(v17) = -4;
          LOWORD(v20) = v17;
          WORD1(v20) = v17 + 2;
          ObjectAttributes.RootDirectory = Handle;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
          {
            v23 = 0LL;
            RtlpMuiRegFreeRegistryInfo(v2, 4LL);
            if ( (int)RtlpLoadLanguageConfigList(4u) >= 0 )
            {
              v19 = (__int64)v23;
              if ( v23 )
              {
                *v2 |= 4u;
                *((_QWORD *)v2 + 5) = v19;
              }
            }
            NtClose(KeyHandle);
          }
          NtClose(Handle);
        }
        goto LABEL_37;
      }
    }
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  RegistryInfo = RtlpMuiRegCreateRegistryInfo();
  v2 = (_DWORD *)RegistryInfo;
  if ( !RegistryInfo )
  {
LABEL_47:
    Installed = -1073741801;
    goto LABEL_29;
  }
  v23 = 0LL;
  LicInformation = RtlpMuiRegLoadLicInformation(RegistryInfo);
  if ( LicInformation < 0 )
    DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", LicInformation);
  Installed = RtlpMuiRegLoadInstalled((int)v2);
  if ( Installed < 0 )
    goto LABEL_19;
  RtlpMuiRegFreeRegistryInfo(v2, 4LL);
  Installed = RtlpLoadLanguageConfigList(4u);
  if ( Installed < 0 )
    goto LABEL_19;
  v14 = (__int64)v23;
  if ( v23 )
  {
    *v2 |= 4u;
    *((_QWORD *)v2 + 5) = v14;
    v23 = 0LL;
  }
  RtlpMuiRegFreeRegistryInfo(v2, 8LL);
  Installed = RtlpLoadLanguageConfigList(8u);
  if ( Installed < 0 )
    goto LABEL_19;
  v15 = (__int64)v23;
  if ( v23 )
  {
    *v2 |= 8u;
    *((_QWORD *)v2 + 6) = v15;
  }
  RtlpMuiRegFreeRegistryInfo(v2, 32LL);
  Installed = RtlpSetProcUserMachineLangList(v2, 1LL);
  if ( Installed < 0
    || (RtlpMuiRegFreeRegistryInfo(v2, 16LL), Installed = RtlpSetProcUserMachineLangList(v2, 0LL), Installed < 0) )
  {
LABEL_19:
    RtlpMuiRegFreeRegistryInfo(v2, 4095LL);
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = 0LL;
  }
  else
  {
    Installed = 0;
    v2[3] = MEMORY[0x7FFE03A4];
  }
LABEL_29:
  *a1 = v2;
  return (unsigned int)Installed;
}
