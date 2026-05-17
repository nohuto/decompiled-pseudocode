/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x18000CA10
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     InitializeTEBUserLangList @ 0x180008900 (InitializeTEBUserLangList.c)
 *     RtlpInitializeUserList @ 0x18000AFE0 (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800DDC20 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlOpenCurrentUser @ 0x18000B3E0 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18000B81C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     GetGlobalizationUserModelType @ 0x18000CF80 (GetGlobalizationUserModelType.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18000CFC4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18000D2DC (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x18000D360 (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegFreeStringPool @ 0x18000D934 (RtlpMuiRegFreeStringPool.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(unsigned int a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // r15
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
  __int64 Heap_0; // r13
  int v19; // ebx
  char v20; // al
  size_t v21; // rax
  size_t v22; // rax
  int v23; // eax
  __int64 LanguageConfigList; // rax
  size_t v26; // rax
  size_t v27; // rax
  int v28; // eax
  unsigned int v29; // eax
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  __int128 v31; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v32; // [rsp+48h] [rbp-41h] BYREF
  int v33; // [rsp+50h] [rbp-39h] BYREF
  __int64 v34; // [rsp+58h] [rbp-31h] BYREF
  HANDLE v35; // [rsp+60h] [rbp-29h]
  __int128 *v36; // [rsp+68h] [rbp-21h]
  __int64 v37; // [rsp+70h] [rbp-19h]
  __int128 v38; // [rsp+78h] [rbp-11h]
  int v39; // [rsp+88h] [rbp-1h] BYREF
  HANDLE v40; // [rsp+90h] [rbp+7h] BYREF
  _WORD v41[2]; // [rsp+98h] [rbp+Fh] BYREF
  int v42; // [rsp+9Ch] [rbp+13h]
  const wchar_t *v43; // [rsp+A0h] [rbp+17h]
  char v44; // [rsp+F8h] [rbp+6Fh] BYREF
  __int16 v45; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = 0;
  v44 = 0;
  v45 = 0;
  Handle = 0LL;
  v40 = 0LL;
  v7 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  if ( !a2 || !a3 )
  {
    v3 = -1073741811;
LABEL_48:
    if ( a2 && *a2 != v7 )
    {
      if ( *a2 )
        RtlpMuiRegFreeStringPool();
      *a2 = v7;
    }
    return (unsigned int)v3;
  }
  v7 = *a2;
  *((_QWORD *)&v31 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v8 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v34 = 48LL;
  v37 = 64LL;
  v35 = 0LL;
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  LOWORD(v31) = v8;
  WORD1(v31) = v8 + 2;
  v36 = &v31;
  v38 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v34) >= 0 )
  {
    v3 = RtlpLoadPolicyLanguageSpec(Handle, a3, &v44, &v45);
    if ( v3 >= 0 )
      goto LABEL_38;
    if ( a1 != 8 )
      goto LABEL_23;
    v15 = Handle;
    v16 = -1;
    v39 = -1;
    if ( !Handle )
      goto LABEL_23;
    v42 = 0;
    v43 = L"MachineUILock";
    v17 = 2 * wcslen(L"MachineUILock");
    v33 = 0;
    if ( v17 >= 0xFFFE )
      LOWORD(v17) = -4;
    v41[0] = v17;
    v41[1] = v17 + 2;
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, a1, 16LL);
    if ( !Heap_0 )
      goto LABEL_23;
    v19 = NtQueryValueKey(v15, v41, 2LL, Heap_0, 16, &v33);
    if ( v19 >= 0 )
    {
      v29 = *(_DWORD *)(Heap_0 + 8);
      if ( v29 > 4 )
      {
        v19 = -2147483643;
      }
      else
      {
        memmove(&v39, (const void *)(Heap_0 + 12), v29);
        v16 = v39;
      }
    }
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, Heap_0);
    if ( v19 >= 0 )
    {
      if ( v16 == 1 )
      {
        v20 = 1;
LABEL_20:
        if ( !v19 && v20 == 1 )
          a1 = 4;
        goto LABEL_23;
      }
      if ( v16 )
      {
LABEL_23:
        NtClose(Handle);
        v3 = 0;
        Handle = 0LL;
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
    v14 = RtlOpenCurrentUser(0x2000000u, (__int64)&v32);
LABEL_25:
    if ( v14 >= 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v13 = v11 - 1;
  if ( !v13 )
  {
    v14 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &v32);
    goto LABEL_25;
  }
  if ( v13 == 1 )
  {
    v33 = 0;
    v14 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v12, (__int64)&v32, &v33);
    goto LABEL_25;
  }
LABEL_26:
  v32 = 0LL;
LABEL_27:
  if ( a1 == 8 )
  {
    if ( !v32 )
      goto LABEL_38;
    *(_QWORD *)&v31 = 0LL;
    *((_QWORD *)&v31 + 1) = L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
    v21 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    v34 = 48LL;
    v37 = 64LL;
    if ( v21 >= 0xFFFE )
      LOWORD(v21) = -4;
    LOWORD(v31) = v21;
    WORD1(v31) = v21 + 2;
    v35 = v32;
    v36 = &v31;
    v38 = 0LL;
    if ( (int)NtOpenKey(&v40, 131097LL, &v34) >= 0 )
    {
      v3 = RtlpLoadPolicyLanguageSpec(v40, a3, &v44, &v45);
      if ( v3 >= 0 )
        goto LABEL_38;
      v3 = 0;
    }
    *(_QWORD *)&v31 = 0LL;
    *((_QWORD *)&v31 + 1) = L"Control Panel\\Desktop\\LanguageConfiguration";
    v22 = 2 * wcslen(L"Control Panel\\Desktop\\LanguageConfiguration");
    v34 = 48LL;
    v37 = 64LL;
    Handle = 0LL;
    if ( v22 >= 0xFFFE )
      LOWORD(v22) = -4;
    LOWORD(v31) = v22;
    WORD1(v31) = v22 + 2;
    v35 = v32;
    v36 = &v31;
    v38 = 0LL;
    v23 = NtOpenKey(&Handle, 131097LL, &v34);
    if ( v23 >= 0 )
      goto LABEL_37;
    if ( v23 != -1073741772 )
      v3 = v23;
  }
  else
  {
    if ( a1 != 4 )
      goto LABEL_37;
    if ( v32 )
    {
      *(_QWORD *)&v31 = 0LL;
      *((_QWORD *)&v31 + 1) = L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration";
      v26 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
      v34 = 48LL;
      v37 = 64LL;
      Handle = 0LL;
      if ( v26 >= 0xFFFE )
        LOWORD(v26) = -4;
      LOWORD(v31) = v26;
      WORD1(v31) = v26 + 2;
      v35 = v32;
      v36 = &v31;
      v38 = 0LL;
      if ( (int)NtOpenKey(&Handle, 131097LL, &v34) >= 0 )
        goto LABEL_37;
    }
    *(_QWORD *)&v31 = 0LL;
    *((_QWORD *)&v31 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration";
    v27 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    v34 = 48LL;
    v37 = 64LL;
    Handle = 0LL;
    if ( v27 >= 0xFFFE )
      LOWORD(v27) = -4;
    v35 = 0LL;
    LOWORD(v31) = v27;
    WORD1(v31) = v27 + 2;
    v36 = &v31;
    v38 = 0LL;
    v28 = NtOpenKey(&Handle, 131097LL, &v34);
    v3 = v28;
    if ( v28 >= 0 )
    {
LABEL_37:
      v3 = RtlpPopulateLanguageConfigList(Handle, a2, a3);
      goto LABEL_38;
    }
    if ( v28 == -1073741772 )
      v3 = 0;
  }
LABEL_38:
  if ( Handle )
    NtClose(Handle);
  if ( v40 )
    NtClose(v40);
  if ( v32 )
    NtClose(v32);
  if ( v3 < 0 )
    goto LABEL_48;
  if ( *a2 )
    return (unsigned int)v3;
  LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
  *a2 = LanguageConfigList;
  if ( LanguageConfigList )
    return (unsigned int)v3;
  *a2 = v7;
  return 3221225495LL;
}
