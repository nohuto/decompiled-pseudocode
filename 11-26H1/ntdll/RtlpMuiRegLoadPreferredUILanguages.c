/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x180057290
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x180054030 (InitializeTEBUserLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800545D0 (RtlpSetProcUserMachineLangList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180055400 (RtlpQueryDefaultUILanguage.c)
 *     RtlpInitializeUserList @ 0x180056710 (RtlpInitializeUserList.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180056670 (RtlpMuiRegCreateLanguageList.c)
 *     RtlOpenCurrentUser @ 0x180056B10 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     GetGlobalizationUserModelType @ 0x1800586B0 (GetGlobalizationUserModelType.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800586F4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800D89BC (RtlpMuiRegGrowLanguageList.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        ULONG a2,
        unsigned int a3,
        int a4,
        _BYTE *a5,
        __int64 *a6)
{
  unsigned int v6; // r15d
  __int64 v7; // rsi
  unsigned int v8; // r13d
  _WORD *v9; // r14
  __int64 v10; // rdi
  _BYTE *v11; // r12
  size_t v12; // rax
  __int64 v13; // rdx
  HANDLE v14; // rcx
  int GlobalizationUserModelType; // eax
  __int64 v16; // rdx
  int v17; // eax
  HANDLE v18; // rsi
  ULONG v19; // r12d
  size_t v20; // rax
  _DWORD *Heap_0; // rbx
  NTSTATUS v22; // esi
  bool v23; // sf
  bool v24; // zf
  NTSTATUS PolicyLanguageSpec; // ebx
  _DWORD *v26; // rax
  HANDLE v28; // rcx
  size_t v29; // rax
  _WORD *LanguageList; // rax
  unsigned int v31; // esi
  size_t v32; // rax
  size_t v33; // rax
  HANDLE v34; // rbx
  _DWORD *v35; // rsi
  NTSTATUS v36; // ebx
  HANDLE v37; // rbx
  unsigned int v38; // r12d
  _DWORD *v39; // rsi
  NTSTATUS v40; // eax
  int v41; // r12d
  size_t v42; // rax
  __int64 v43; // rdx
  size_t v44; // rax
  wchar_t *v45; // rcx
  unsigned int v46; // eax
  NTSTATUS v47; // eax
  _BYTE *v48; // r13
  _WORD *v49; // r12
  size_t v50; // rax
  HANDLE v51; // rbx
  size_t v52; // rax
  _DWORD *v53; // r13
  NTSTATUS v54; // ebx
  _DWORD *v55; // r13
  NTSTATUS v56; // eax
  unsigned int v57; // ecx
  NTSTATUS v58; // eax
  unsigned int v59; // eax
  _WORD *v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r10
  int v64; // eax
  __int64 v65; // rdx
  int v66; // eax
  HANDLE v67; // [rsp+40h] [rbp-99h] BYREF
  _UNICODE_STRING ValueName; // [rsp+48h] [rbp-91h] BYREF
  _UNICODE_STRING v69; // [rsp+58h] [rbp-81h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-71h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-41h] BYREF
  HANDLE CurrentUserKey; // [rsp+A0h] [rbp-39h] BYREF
  int v73; // [rsp+A8h] [rbp-31h]
  _WORD *v74; // [rsp+B0h] [rbp-29h] BYREF
  HANDLE v75; // [rsp+B8h] [rbp-21h] BYREF
  int v76; // [rsp+C0h] [rbp-19h]
  HANDLE KeyHandle; // [rsp+C8h] [rbp-11h] BYREF
  _DWORD v78[20]; // [rsp+D0h] [rbp-9h] BYREF
  ULONG v80; // [rsp+138h] [rbp+5Fh] BYREF
  ULONG ResultLength; // [rsp+140h] [rbp+67h] BYREF
  int v82; // [rsp+148h] [rbp+6Fh]

  v82 = a4;
  v80 = a2;
  CurrentUserKey = 0LL;
  Handle = 0LL;
  v6 = a3;
  KeyHandle = 0LL;
  v7 = a1;
  v73 = 7;
  v8 = 0;
  v76 = 7;
  v9 = 0LL;
  v74 = 0LL;
  v10 = 0LL;
  v69 = 0LL;
  if ( !a1 || (v11 = a5) == 0LL || !a6 )
  {
    PolicyLanguageSpec = -1073741811;
    goto LABEL_28;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return 3221225485LL;
  v69.Buffer = (wchar_t *)L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v12 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v12 >= 0xFFFE )
    LOWORD(v12) = -4;
  v69.Length = v12;
  v69.MaximumLength = v12 + 2;
  ObjectAttributes.ObjectName = &v69;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    KeyHandle = 0LL;
    goto LABEL_9;
  }
  v28 = KeyHandle;
  v67 = 0LL;
  LOBYTE(v80) = 0;
  LOWORD(ResultLength) = 0;
  ValueName = 0LL;
  if ( KeyHandle )
    goto LABEL_40;
  ValueName.Buffer = (wchar_t *)L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v29 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v29 >= 0xFFFE )
    LOWORD(v29) = -4;
  ValueName.Length = v29;
  ValueName.MaximumLength = v29 + 2;
  ObjectAttributes.ObjectName = &ValueName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PolicyLanguageSpec = NtOpenKey(&v67, 0x20019u, &ObjectAttributes);
  if ( PolicyLanguageSpec >= 0 )
  {
    v28 = v67;
LABEL_40:
    PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(v28);
    if ( !PolicyLanguageSpec )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, 1, v7);
      v74 = LanguageList;
      v10 = (__int64)LanguageList;
      if ( LanguageList )
      {
        *(_WORD *)(*((_QWORD *)LanguageList + 3) + 6LL * (unsigned __int16)LanguageList[2]) = (unsigned __int8)v80;
        v13 = 3LL * (unsigned __int16)LanguageList[2];
        *(_WORD *)(*((_QWORD *)LanguageList + 3) + 6LL * (unsigned __int16)LanguageList[2]++ + 4) = ResultLength;
      }
      else
      {
        PolicyLanguageSpec = -1073741801;
      }
    }
  }
  v14 = v67;
  if ( v67 )
    NtClose(v67);
  if ( !PolicyLanguageSpec && v10 )
  {
    v48 = v11;
    v31 = 0;
    goto LABEL_98;
  }
LABEL_9:
  if ( v6 != 1 )
    goto LABEL_10;
  v18 = KeyHandle;
  if ( !KeyHandle )
    goto LABEL_49;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v19 = -1;
  ValueName.Buffer = (wchar_t *)L"MachineUILock";
  v80 = -1;
  v20 = 2 * wcslen(L"MachineUILock");
  ResultLength = 0;
  if ( v20 >= 0xFFFE )
    LOWORD(v20) = -4;
  ValueName.Length = v20;
  ValueName.MaximumLength = v20 + 2;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  if ( !Heap_0 )
  {
    v11 = a5;
LABEL_49:
    v7 = a1;
    goto LABEL_10;
  }
  v22 = NtQueryValueKey(v18, &ValueName, KeyValuePartialInformation, Heap_0, 0x10u, &ResultLength);
  if ( v22 >= 0 )
  {
    v59 = Heap_0[2];
    if ( v59 > 4 )
    {
      v22 = -2147483643;
    }
    else
    {
      memmove(&v80, Heap_0 + 3, v59);
      v19 = v80;
    }
  }
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  v23 = v22 < 0;
  v7 = a1;
  if ( v23 )
  {
    v11 = a5;
  }
  else
  {
    v24 = v19 == 1;
    v11 = a5;
    if ( v24 )
      v6 = 0;
  }
LABEL_10:
  GlobalizationUserModelType = GetGlobalizationUserModelType(v14, v13);
  switch ( GlobalizationUserModelType )
  {
    case 1:
      v17 = RtlOpenCurrentUser(0x2000000u, &CurrentUserKey);
      break;
    case 2:
      v17 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &CurrentUserKey);
      break;
    case 3:
      v80 = 0;
      v17 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v16, &CurrentUserKey, &v80);
      break;
    default:
      PolicyLanguageSpec = -1073741595;
      goto LABEL_120;
  }
  PolicyLanguageSpec = v17;
  if ( v17 < 0 )
  {
LABEL_120:
    *v11 = 1;
    goto LABEL_28;
  }
  if ( v6 != 1 )
  {
    v31 = 0;
    *(_QWORD *)&v69.Length = 0LL;
    v69.Buffer = (wchar_t *)L"Control Panel\\Desktop\\MuiCached";
    v32 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    Handle = 0LL;
    if ( v32 >= 0xFFFE )
      LOWORD(v32) = -4;
    v69.Length = v32;
    v69.MaximumLength = v32 + 2;
    ObjectAttributes.RootDirectory = CurrentUserKey;
    ObjectAttributes.ObjectName = &v69;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
    {
      v48 = a5;
      PolicyLanguageSpec = 0;
      *v11 = 1;
      goto LABEL_98;
    }
    *(_QWORD *)&v69.Length = 0LL;
    v69.Buffer = (wchar_t *)L"MachinePreferredUILanguages";
    v33 = 2 * wcslen(L"MachinePreferredUILanguages");
    if ( v33 >= 0xFFFE )
      LOWORD(v33) = -4;
LABEL_58:
    v34 = Handle;
    v69.Length = v33;
    v80 = 0;
    v69.MaximumLength = v33 + 2;
    v35 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
    if ( !v35 )
      goto LABEL_118;
    v36 = NtQueryValueKey(v34, &v69, KeyValuePartialInformation, v35, 0xCu, &v80);
    if ( (int)(v36 + 0x80000000) < 0 || v36 == -2147483643 )
    {
      v8 = v35[2];
      v76 = v35[1];
    }
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v35);
    if ( v36 == -1073741772 || !v8 )
    {
LABEL_118:
      v48 = a5;
      v31 = 0;
      PolicyLanguageSpec = 0;
      *v11 = 1;
      goto LABEL_98;
    }
    if ( v36 != -2147483643 )
    {
      PolicyLanguageSpec = -1073741772;
      goto LABEL_28;
    }
    v9 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v8 + 2);
    if ( !v9 )
    {
      PolicyLanguageSpec = -1073741801;
      goto LABEL_28;
    }
    v37 = Handle;
    v38 = v8 + 12;
    v80 = 0;
    if ( v8 == -12 || (v39 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v38)) == 0LL )
    {
      PolicyLanguageSpec = -1073741670;
      goto LABEL_27;
    }
    v40 = NtQueryValueKey(v37, &v69, KeyValuePartialInformation, v39, v8 + 12, &v80);
    PolicyLanguageSpec = v40;
    if ( v40 >= 0 )
    {
      v46 = v39[2];
      if ( v46 > v8 )
      {
        PolicyLanguageSpec = -2147483643;
      }
      else if ( v46 <= v38 )
      {
        memmove(v9, v39 + 3, v46);
      }
    }
    else if ( v40 != -2147483643 )
    {
      v41 = v76;
LABEL_93:
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v39);
      if ( PolicyLanguageSpec < 0 )
      {
        v31 = 0;
      }
      else
      {
        if ( v41 != 1 && v41 != 7 )
        {
          v48 = a5;
          v31 = 0;
          PolicyLanguageSpec = 0;
          *a5 = 1;
          goto LABEL_98;
        }
        v31 = 0;
        v47 = RtlpMuiRegAddMultiSzToLangFallbackList(
                a1,
                v9,
                v8 >> 1,
                8,
                (unsigned int)(v6 != 1) + 2,
                1u,
                (__int64 *)&v74);
        v10 = (__int64)v74;
        PolicyLanguageSpec = v47;
      }
      if ( PolicyLanguageSpec )
        goto LABEL_27;
      v48 = a5;
LABEL_98:
      if ( v6 || v10 && *(_WORD *)(v10 + 4) )
        goto LABEL_23;
      PolicyLanguageSpec = 0;
      v49 = 0LL;
      *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
      ValueName.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings";
      v50 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
      v67 = 0LL;
      if ( v50 >= 0xFFFE )
        LOWORD(v50) = -4;
      ObjectAttributes.RootDirectory = 0LL;
      ValueName.Length = v50;
      ValueName.MaximumLength = v50 + 2;
      ObjectAttributes.ObjectName = &ValueName;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenKey(&v67, 0x20019u, &ObjectAttributes) < 0 )
      {
        *v48 = 1;
      }
      else
      {
        *(_QWORD *)&ValueName.Length = 0LL;
        ValueName.Buffer = (wchar_t *)L"PreferredUILanguages";
        v51 = v67;
        v52 = 2 * wcslen(L"PreferredUILanguages");
        v80 = 0;
        if ( v52 >= 0xFFFE )
          LOWORD(v52) = -4;
        ValueName.Length = v52;
        ValueName.MaximumLength = v52 + 2;
        v53 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
        if ( !v53 )
          goto LABEL_148;
        v54 = NtQueryValueKey(v51, &ValueName, KeyValuePartialInformation, v53, 0xCu, &v80);
        if ( (int)(v54 + 0x80000000) < 0 || v54 == -2147483643 )
        {
          v31 = v53[2];
          v73 = v53[1];
        }
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v53);
        if ( v54 == -1073741772 || !v31 )
        {
LABEL_148:
          PolicyLanguageSpec = 0;
          *a5 = 1;
          goto LABEL_132;
        }
        if ( v54 == -2147483643 )
        {
          v49 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v31 + 2);
          if ( v49 )
          {
            v75 = v67;
            v80 = 0;
            if ( v31 != -12 )
            {
              v55 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v31 + 12);
              if ( v55 )
              {
                v56 = NtQueryValueKey(v75, &ValueName, KeyValuePartialInformation, v55, v31 + 12, &v80);
                PolicyLanguageSpec = v56;
                if ( v56 >= 0 )
                {
                  v57 = v55[2];
                  if ( v57 > v31 )
                  {
                    PolicyLanguageSpec = -2147483643;
                  }
                  else if ( v57 <= v31 + 12 )
                  {
                    memmove(v49, v55 + 3, v57);
                  }
                }
                else if ( v56 != -2147483643 )
                {
LABEL_129:
                  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v55);
                  if ( PolicyLanguageSpec < 0 )
                    goto LABEL_132;
                  if ( v73 == 7 || v73 == 1 )
                  {
                    *a5 = 0;
                    v58 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v49, v31 >> 1, 8, 3, 1u, (__int64 *)&v74);
                    v10 = (__int64)v74;
                    PolicyLanguageSpec = v58;
                    goto LABEL_132;
                  }
                  goto LABEL_148;
                }
                v31 = v55[2];
                v73 = v55[1];
                goto LABEL_129;
              }
            }
            PolicyLanguageSpec = -1073741670;
          }
          else
          {
            PolicyLanguageSpec = -1073741801;
          }
        }
        else
        {
          PolicyLanguageSpec = -1073741772;
        }
      }
LABEL_132:
      if ( v67 )
        NtClose(v67);
      if ( v49 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v49);
      if ( PolicyLanguageSpec )
        goto LABEL_26;
LABEL_23:
      if ( !v10 )
      {
        v26 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x46uLL);
        v10 = (__int64)v26;
        if ( v26 )
        {
          *v26 = 70;
          v26[1] = 0x10000;
          v26[10] = 0;
          *((_BYTE *)v26 + 8) = v6 != 1;
          *((_QWORD *)v26 + 3) = v26 + 16;
          *((_QWORD *)v26 + 2) = a1;
        }
        else
        {
          v10 = 0LL;
          PolicyLanguageSpec = -1073741801;
        }
      }
      goto LABEL_26;
    }
    v8 = v39[2];
    v41 = v39[1];
    goto LABEL_93;
  }
  ValueName.Buffer = (wchar_t *)L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
  v67 = 0LL;
  v75 = 0LL;
  LOBYTE(v80) = 0;
  LOWORD(ResultLength) = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v42 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
  if ( v42 >= 0xFFFE )
    LOWORD(v42) = -4;
  ValueName.Length = v42;
  ValueName.MaximumLength = v42 + 2;
  if ( CurrentUserKey )
  {
    ObjectAttributes.RootDirectory = CurrentUserKey;
  }
  else
  {
    v64 = GetGlobalizationUserModelType(65532LL, v43);
    switch ( v64 )
    {
      case 1:
        v66 = RtlOpenCurrentUser(0x2000000u, &v67);
        break;
      case 2:
        v66 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &v67);
        break;
      case 3:
        v78[0] = 0;
        v66 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v65, &v67, v78);
        break;
      default:
        PolicyLanguageSpec = -1073741595;
        goto LABEL_75;
    }
    PolicyLanguageSpec = v66;
    if ( v66 < 0 )
      goto LABEL_75;
    ObjectAttributes.RootDirectory = v67;
  }
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &ValueName;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PolicyLanguageSpec = NtOpenKey(&v75, 0x20019u, &ObjectAttributes);
  if ( PolicyLanguageSpec >= 0 )
  {
    PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(v75);
    if ( !PolicyLanguageSpec )
    {
      if ( v10 )
      {
        v61 = v10;
        v62 = v10;
        v63 = v10;
        if ( *(_WORD *)(v10 + 4) < *(_WORD *)(v10 + 6) )
          goto LABEL_145;
        v74 = (_WORD *)RtlpMuiRegGrowLanguageList(v10);
        v10 = (__int64)v74;
        v61 = (__int64)v74;
        v62 = (__int64)v74;
        v63 = (__int64)v74;
        if ( v74 )
          goto LABEL_145;
        PolicyLanguageSpec = -1073741801;
      }
      else
      {
        v60 = RtlpMuiRegCreateLanguageList(1, 0, v7);
        v74 = v60;
        v10 = (__int64)v60;
        if ( v60 )
        {
          v61 = (__int64)v60;
          v62 = (__int64)v60;
          v63 = (__int64)v60;
LABEL_145:
          *(_WORD *)(*(_QWORD *)(v63 + 24) + 6LL * *(unsigned __int16 *)(v62 + 4)) = (unsigned __int8)v80;
          *(_WORD *)(*(_QWORD *)(v63 + 24) + 6LL * *(unsigned __int16 *)(v62 + 4) + 4) = ResultLength;
          ++*(_WORD *)(v61 + 4);
          goto LABEL_75;
        }
        PolicyLanguageSpec = -1073741801;
      }
    }
  }
LABEL_75:
  if ( v75 )
  {
    NtClose(v75);
    v75 = 0LL;
  }
  if ( v67 )
    NtClose(v67);
  if ( PolicyLanguageSpec || !v10 )
  {
    *(_QWORD *)&v69.Length = 0LL;
    v69.Buffer = (wchar_t *)L"Control Panel\\Desktop";
    v44 = 2 * wcslen(L"Control Panel\\Desktop");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    Handle = 0LL;
    if ( v44 >= 0xFFFE )
      LOWORD(v44) = -4;
    v69.Length = v44;
    v69.MaximumLength = v44 + 2;
    ObjectAttributes.RootDirectory = CurrentUserKey;
    ObjectAttributes.ObjectName = &v69;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    PolicyLanguageSpec = NtOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( PolicyLanguageSpec < 0 )
    {
      *v11 = 1;
      goto LABEL_28;
    }
    v45 = (wchar_t *)L"PreferredUILanguages";
    *(_QWORD *)&v69.Length = 0LL;
    if ( v82 != 3 )
      v45 = (wchar_t *)L"PreferredUILanguagesPending";
    v69.Buffer = v45;
    v33 = 2 * wcslen(v45);
    if ( v33 >= 0xFFFE )
      LOWORD(v33) = -4;
    goto LABEL_58;
  }
LABEL_26:
  *a6 = v10;
  if ( v9 )
LABEL_27:
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v9);
LABEL_28:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( CurrentUserKey )
  {
    NtClose(CurrentUserKey);
    CurrentUserKey = 0LL;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)PolicyLanguageSpec;
}
