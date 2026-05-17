/*
 * XREFs of RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180008130 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x18000A1D0 (RtlGetUILanguageInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DDB14 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x1800ED7C0 (RtlpInitializeLangRegistryInfo.c)
 * Callees:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x1800024D0 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     RtlpSetProcUserMachineLangList @ 0x180008EA0 (RtlpSetProcUserMachineLangList.c)
 *     RtlOpenCurrentUser @ 0x18000B3E0 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18000B81C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 *     GetGlobalizationUserModelType @ 0x18000CF80 (GetGlobalizationUserModelType.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800DDD80 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800DDFB0 (RtlpMuiRegLoadLicInformation.c)
 *     _RtlpMuiRegDeserializeRegistryInfo @ 0x1800DEFA0 (_RtlpMuiRegDeserializeRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x180114CD0 (RtlpMuiRegCreateRegistryInfo.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1801224D0 (_RtlpMuiRegLoadInstalled.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180160F10 (ZwGetMUIRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 Heap_0; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int Installed; // edi
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  __int64 RegistryInfo; // rax
  int LicInformation; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v21[4]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+50h] [rbp-10h]
  unsigned int v23; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+50h] BYREF
  HANDLE v26; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0LL;
  v24 = 0LL;
  if ( !a1 || *a1 )
  {
    Installed = -1073741811;
    goto LABEL_29;
  }
  v23 = 0;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v23, 0LL) >= 0 )
  {
    if ( !v23 )
      goto LABEL_47;
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v23);
    v4 = Heap_0;
    if ( !Heap_0 )
      goto LABEL_47;
    if ( (int)ZwGetMUIRegistryInfo(0LL, &v23, Heap_0) >= 0 && (int)RtlpMuiRegDeserializeRegistryInfo(v4, v23, &v24) >= 0 )
    {
      v2 = v24;
      Installed = RtlpMuiRegAddNeutralToInstalled(v24);
      if ( Installed >= 0 )
      {
        if ( !*(_QWORD *)(v2 + 40) )
          goto LABEL_37;
        Handle = 0LL;
        v20 = 0LL;
        v26 = 0LL;
        v8 = GetGlobalizationUserModelType(v6, v5) - 1;
        if ( v8 )
        {
          v10 = v8 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              LODWORD(v24) = 0;
              v11 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000LL, v9, &Handle, &v24);
              goto LABEL_32;
            }
LABEL_37:
            v24 = 0LL;
            RtlpMuiRegFreeRegistryInfo(v2, 8LL);
            if ( (int)RtlpLoadLanguageConfigList(8LL, &v24, v2) >= 0 )
            {
              v18 = v24;
              if ( v24 )
              {
                *(_DWORD *)v2 |= 8u;
                *(_QWORD *)(v2 + 48) = v18;
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
          v11 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000LL, &Handle);
        }
        else
        {
          v11 = RtlOpenCurrentUser(0x2000000LL, &Handle);
        }
LABEL_32:
        if ( v11 >= 0 )
        {
          *((_QWORD *)&v20 + 1) = L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration";
          v17 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          v21[0] = 48LL;
          v21[3] = 64LL;
          if ( v17 >= 0xFFFE )
            LOWORD(v17) = -4;
          LOWORD(v20) = v17;
          WORD1(v20) = v17 + 2;
          v21[1] = Handle;
          v21[2] = &v20;
          v22 = 0LL;
          if ( (int)NtOpenKey(&v26, 131097LL, v21) >= 0 )
          {
            v24 = 0LL;
            RtlpMuiRegFreeRegistryInfo(v2, 4LL);
            if ( (int)RtlpLoadLanguageConfigList(4LL, &v24, v2) >= 0 )
            {
              v19 = v24;
              if ( v24 )
              {
                *(_DWORD *)v2 |= 4u;
                *(_QWORD *)(v2 + 40) = v19;
              }
            }
            NtClose(v26);
          }
          NtClose(Handle);
        }
        goto LABEL_37;
      }
    }
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v4);
  }
  RegistryInfo = RtlpMuiRegCreateRegistryInfo();
  v2 = RegistryInfo;
  if ( !RegistryInfo )
  {
LABEL_47:
    Installed = -1073741801;
    goto LABEL_29;
  }
  v24 = 0LL;
  LicInformation = RtlpMuiRegLoadLicInformation(RegistryInfo);
  if ( LicInformation < 0 )
    DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", LicInformation);
  Installed = RtlpMuiRegLoadInstalled(v2);
  if ( Installed < 0 )
    goto LABEL_19;
  RtlpMuiRegFreeRegistryInfo(v2, 4LL);
  Installed = RtlpLoadLanguageConfigList(4LL, &v24, v2);
  if ( Installed < 0 )
    goto LABEL_19;
  v14 = v24;
  if ( v24 )
  {
    *(_DWORD *)v2 |= 4u;
    *(_QWORD *)(v2 + 40) = v14;
    v24 = 0LL;
  }
  RtlpMuiRegFreeRegistryInfo(v2, 8LL);
  Installed = RtlpLoadLanguageConfigList(8LL, &v24, v2);
  if ( Installed < 0 )
    goto LABEL_19;
  v15 = v24;
  if ( v24 )
  {
    *(_DWORD *)v2 |= 8u;
    *(_QWORD *)(v2 + 48) = v15;
  }
  RtlpMuiRegFreeRegistryInfo(v2, 32LL);
  Installed = RtlpSetProcUserMachineLangList(v2, 1LL);
  if ( Installed < 0
    || (RtlpMuiRegFreeRegistryInfo(v2, 16LL), Installed = RtlpSetProcUserMachineLangList(v2, 0LL), Installed < 0) )
  {
LABEL_19:
    RtlpMuiRegFreeRegistryInfo(v2, 4095LL);
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v2);
    v2 = 0LL;
  }
  else
  {
    Installed = 0;
    *(_DWORD *)(v2 + 12) = MEMORY[0x7FFE03A4];
  }
LABEL_29:
  *a1 = v2;
  return (unsigned int)Installed;
}
