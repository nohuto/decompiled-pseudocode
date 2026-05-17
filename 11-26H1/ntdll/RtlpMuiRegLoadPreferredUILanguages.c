/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x180008900 (InitializeTEBUserLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180008EA0 (RtlpSetProcUserMachineLangList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180009CD0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpInitializeUserList @ 0x18000AFE0 (RtlpInitializeUserList.c)
 * Callees:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18000AF40 (RtlpMuiRegCreateLanguageList.c)
 *     RtlOpenCurrentUser @ 0x18000B3E0 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18000B81C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     GetGlobalizationUserModelType @ 0x18000CF80 (GetGlobalizationUserModelType.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18000CFC4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800DBADC (RtlpMuiRegGrowLanguageList.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        int a2,
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
  int v19; // r12d
  size_t v20; // rax
  __int64 Heap_0; // rbx
  int v22; // esi
  bool v23; // sf
  bool v24; // zf
  int v25; // ebx
  __int64 v26; // rax
  HANDLE v28; // rcx
  size_t v29; // rax
  __int64 LanguageList; // rax
  unsigned int v31; // esi
  size_t v32; // rax
  size_t v33; // rax
  HANDLE v34; // rbx
  __int64 v35; // rsi
  int v36; // ebx
  HANDLE v37; // rbx
  unsigned int v38; // r12d
  _DWORD *v39; // rsi
  int v40; // eax
  int v41; // r12d
  size_t v42; // rax
  __int64 v43; // rdx
  size_t v44; // rax
  const wchar_t *v45; // rcx
  unsigned int v46; // eax
  int v47; // eax
  _BYTE *v48; // r13
  _WORD *v49; // r12
  size_t v50; // rax
  HANDLE v51; // rbx
  size_t v52; // rax
  __int64 v53; // r13
  int v54; // ebx
  _DWORD *v55; // r13
  int v56; // eax
  unsigned int v57; // ecx
  int v58; // eax
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r10
  int v64; // eax
  __int64 v65; // rdx
  int v66; // eax
  HANDLE v67; // [rsp+40h] [rbp-99h] BYREF
  __int128 v68; // [rsp+48h] [rbp-91h] BYREF
  __int128 v69; // [rsp+58h] [rbp-81h] BYREF
  __int64 v70; // [rsp+68h] [rbp-71h] BYREF
  HANDLE v71; // [rsp+70h] [rbp-69h]
  __int128 *v72; // [rsp+78h] [rbp-61h]
  __int64 v73; // [rsp+80h] [rbp-59h]
  __int128 v74; // [rsp+88h] [rbp-51h]
  HANDLE Handle; // [rsp+98h] [rbp-41h] BYREF
  HANDLE v76; // [rsp+A0h] [rbp-39h] BYREF
  int v77; // [rsp+A8h] [rbp-31h]
  __int64 v78; // [rsp+B0h] [rbp-29h] BYREF
  HANDLE v79; // [rsp+B8h] [rbp-21h] BYREF
  int v80; // [rsp+C0h] [rbp-19h]
  HANDLE v81; // [rsp+C8h] [rbp-11h] BYREF
  _DWORD v82[20]; // [rsp+D0h] [rbp-9h] BYREF
  int v84; // [rsp+138h] [rbp+5Fh] BYREF
  int v85; // [rsp+140h] [rbp+67h] BYREF
  int v86; // [rsp+148h] [rbp+6Fh]

  v86 = a4;
  v84 = a2;
  v76 = 0LL;
  Handle = 0LL;
  v6 = a3;
  v81 = 0LL;
  v7 = a1;
  v77 = 7;
  v8 = 0;
  v80 = 7;
  v9 = 0LL;
  v78 = 0LL;
  v10 = 0LL;
  v69 = 0LL;
  if ( !a1 || (v11 = a5) == 0LL || !a6 )
  {
    v25 = -1073741811;
    goto LABEL_28;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return 3221225485LL;
  *((_QWORD *)&v69 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v12 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v70 = 48LL;
  v73 = 64LL;
  v71 = 0LL;
  if ( v12 >= 0xFFFE )
    LOWORD(v12) = -4;
  LOWORD(v69) = v12;
  WORD1(v69) = v12 + 2;
  v72 = &v69;
  v74 = 0LL;
  if ( (int)NtOpenKey(&v81, 131097LL, &v70) < 0 )
  {
    v81 = 0LL;
    goto LABEL_9;
  }
  v28 = v81;
  v67 = 0LL;
  LOBYTE(v84) = 0;
  LOWORD(v85) = 0;
  v68 = 0LL;
  if ( v81 )
    goto LABEL_40;
  *((_QWORD *)&v68 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v29 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v70 = 48LL;
  v73 = 64LL;
  v71 = 0LL;
  if ( v29 >= 0xFFFE )
    LOWORD(v29) = -4;
  LOWORD(v68) = v29;
  WORD1(v68) = v29 + 2;
  v72 = &v68;
  v74 = 0LL;
  v25 = NtOpenKey(&v67, 131097LL, &v70);
  if ( v25 >= 0 )
  {
    v28 = v67;
LABEL_40:
    v25 = RtlpLoadPolicyLanguageSpec(v28, v7, &v84, &v85);
    if ( !v25 )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, 1, v7);
      v78 = LanguageList;
      v10 = LanguageList;
      if ( LanguageList )
      {
        *(_WORD *)(*(_QWORD *)(LanguageList + 24) + 6LL * *(unsigned __int16 *)(LanguageList + 4)) = (unsigned __int8)v84;
        v13 = 3LL * *(unsigned __int16 *)(LanguageList + 4);
        *(_WORD *)(*(_QWORD *)(LanguageList + 24) + 6LL * (unsigned __int16)(*(_WORD *)(LanguageList + 4))++ + 4) = v85;
      }
      else
      {
        v25 = -1073741801;
      }
    }
  }
  v14 = v67;
  if ( v67 )
    NtClose(v67);
  if ( !v25 && v10 )
  {
    v48 = v11;
    v31 = 0;
    goto LABEL_98;
  }
LABEL_9:
  if ( v6 != 1 )
    goto LABEL_10;
  v18 = v81;
  if ( !v81 )
    goto LABEL_49;
  DWORD1(v68) = 0;
  v19 = -1;
  *((_QWORD *)&v68 + 1) = L"MachineUILock";
  v84 = -1;
  v20 = 2 * wcslen(L"MachineUILock");
  v85 = 0;
  if ( v20 >= 0xFFFE )
    LOWORD(v20) = -4;
  LOWORD(v68) = v20;
  WORD1(v68) = v20 + 2;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 16LL);
  if ( !Heap_0 )
  {
    v11 = a5;
LABEL_49:
    v7 = a1;
    goto LABEL_10;
  }
  v22 = NtQueryValueKey(v18, &v68, 2LL, Heap_0, 16, &v85);
  if ( v22 >= 0 )
  {
    v59 = *(_DWORD *)(Heap_0 + 8);
    if ( v59 > 4 )
    {
      v22 = -2147483643;
    }
    else
    {
      memmove(&v84, (const void *)(Heap_0 + 12), v59);
      v19 = v84;
    }
  }
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, Heap_0);
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
      v17 = RtlOpenCurrentUser(0x2000000u, (__int64)&v76);
      break;
    case 2:
      v17 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &v76);
      break;
    case 3:
      v84 = 0;
      v17 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v16, (__int64)&v76, &v84);
      break;
    default:
      v25 = -1073741595;
      goto LABEL_120;
  }
  v25 = v17;
  if ( v17 < 0 )
  {
LABEL_120:
    *v11 = 1;
    goto LABEL_28;
  }
  if ( v6 != 1 )
  {
    v31 = 0;
    *(_QWORD *)&v69 = 0LL;
    *((_QWORD *)&v69 + 1) = L"Control Panel\\Desktop\\MuiCached";
    v32 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached");
    v70 = 48LL;
    v73 = 64LL;
    Handle = 0LL;
    if ( v32 >= 0xFFFE )
      LOWORD(v32) = -4;
    LOWORD(v69) = v32;
    WORD1(v69) = v32 + 2;
    v71 = v76;
    v72 = &v69;
    v74 = 0LL;
    if ( (int)NtOpenKey(&Handle, 131097LL, &v70) < 0 )
    {
      v48 = a5;
      v25 = 0;
      *v11 = 1;
      goto LABEL_98;
    }
    *(_QWORD *)&v69 = 0LL;
    *((_QWORD *)&v69 + 1) = L"MachinePreferredUILanguages";
    v33 = 2 * wcslen(L"MachinePreferredUILanguages");
    if ( v33 >= 0xFFFE )
      LOWORD(v33) = -4;
LABEL_58:
    v34 = Handle;
    LOWORD(v69) = v33;
    v84 = 0;
    WORD1(v69) = v33 + 2;
    v35 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 12LL);
    if ( !v35 )
      goto LABEL_118;
    v36 = NtQueryValueKey(v34, &v69, 2LL, v35, 12, &v84);
    if ( (int)(v36 + 0x80000000) < 0 || v36 == -2147483643 )
    {
      v8 = *(_DWORD *)(v35 + 8);
      v80 = *(_DWORD *)(v35 + 4);
    }
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v35);
    if ( v36 == -1073741772 || !v8 )
    {
LABEL_118:
      v48 = a5;
      v31 = 0;
      v25 = 0;
      *v11 = 1;
      goto LABEL_98;
    }
    if ( v36 != -2147483643 )
    {
      v25 = -1073741772;
      goto LABEL_28;
    }
    v9 = (_WORD *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v8 + 2);
    if ( !v9 )
    {
      v25 = -1073741801;
      goto LABEL_28;
    }
    v37 = Handle;
    v38 = v8 + 12;
    v84 = 0;
    if ( v8 == -12 || (v39 = (_DWORD *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v38)) == 0LL )
    {
      v25 = -1073741670;
      goto LABEL_27;
    }
    v40 = NtQueryValueKey(v37, &v69, 2LL, v39, v8 + 12, &v84);
    v25 = v40;
    if ( v40 >= 0 )
    {
      v46 = v39[2];
      if ( v46 > v8 )
      {
        v25 = -2147483643;
      }
      else if ( v46 <= v38 )
      {
        memmove(v9, v39 + 3, v46);
      }
    }
    else if ( v40 != -2147483643 )
    {
      v41 = v80;
LABEL_93:
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v39);
      if ( v25 < 0 )
      {
        v31 = 0;
      }
      else
      {
        if ( v41 != 1 && v41 != 7 )
        {
          v48 = a5;
          v31 = 0;
          v25 = 0;
          *a5 = 1;
          goto LABEL_98;
        }
        v31 = 0;
        v47 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v9, v8 >> 1, 8, (unsigned int)(v6 != 1) + 2, 1u, &v78);
        v10 = v78;
        v25 = v47;
      }
      if ( v25 )
        goto LABEL_27;
      v48 = a5;
LABEL_98:
      if ( v6 || v10 && *(_WORD *)(v10 + 4) )
        goto LABEL_23;
      v25 = 0;
      v49 = 0LL;
      DWORD1(v68) = 0;
      *((_QWORD *)&v68 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings";
      v50 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v70 = 48LL;
      v73 = 64LL;
      v67 = 0LL;
      if ( v50 >= 0xFFFE )
        LOWORD(v50) = -4;
      v71 = 0LL;
      LOWORD(v68) = v50;
      WORD1(v68) = v50 + 2;
      v72 = &v68;
      v74 = 0LL;
      if ( (int)NtOpenKey(&v67, 131097LL, &v70) < 0 )
      {
        *v48 = 1;
      }
      else
      {
        *(_QWORD *)&v68 = 0LL;
        *((_QWORD *)&v68 + 1) = L"PreferredUILanguages";
        v51 = v67;
        v52 = 2 * wcslen(L"PreferredUILanguages");
        v84 = 0;
        if ( v52 >= 0xFFFE )
          LOWORD(v52) = -4;
        LOWORD(v68) = v52;
        WORD1(v68) = v52 + 2;
        v53 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 12LL);
        if ( !v53 )
          goto LABEL_148;
        v54 = NtQueryValueKey(v51, &v68, 2LL, v53, 12, &v84);
        if ( (int)(v54 + 0x80000000) < 0 || v54 == -2147483643 )
        {
          v31 = *(_DWORD *)(v53 + 8);
          v77 = *(_DWORD *)(v53 + 4);
        }
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v53);
        if ( v54 == -1073741772 || !v31 )
        {
LABEL_148:
          v25 = 0;
          *a5 = 1;
          goto LABEL_132;
        }
        if ( v54 == -2147483643 )
        {
          v49 = (_WORD *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v31 + 2);
          if ( v49 )
          {
            v79 = v67;
            v84 = 0;
            if ( v31 != -12 )
            {
              v55 = (_DWORD *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v31 + 12);
              if ( v55 )
              {
                v56 = NtQueryValueKey(v79, &v68, 2LL, v55, v31 + 12, &v84);
                v25 = v56;
                if ( v56 >= 0 )
                {
                  v57 = v55[2];
                  if ( v57 > v31 )
                  {
                    v25 = -2147483643;
                  }
                  else if ( v57 <= v31 + 12 )
                  {
                    memmove(v49, v55 + 3, v57);
                  }
                }
                else if ( v56 != -2147483643 )
                {
LABEL_129:
                  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v55);
                  if ( v25 < 0 )
                    goto LABEL_132;
                  if ( v77 == 7 || v77 == 1 )
                  {
                    *a5 = 0;
                    v58 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v49, v31 >> 1, 8, 3, 1u, &v78);
                    v10 = v78;
                    v25 = v58;
                    goto LABEL_132;
                  }
                  goto LABEL_148;
                }
                v31 = v55[2];
                v77 = v55[1];
                goto LABEL_129;
              }
            }
            v25 = -1073741670;
          }
          else
          {
            v25 = -1073741801;
          }
        }
        else
        {
          v25 = -1073741772;
        }
      }
LABEL_132:
      if ( v67 )
        NtClose(v67);
      if ( v49 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v49);
      if ( v25 )
        goto LABEL_26;
LABEL_23:
      if ( !v10 )
      {
        v26 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 70LL);
        v10 = v26;
        if ( v26 )
        {
          *(_DWORD *)v26 = 70;
          *(_DWORD *)(v26 + 4) = 0x10000;
          *(_DWORD *)(v26 + 40) = 0;
          *(_BYTE *)(v26 + 8) = v6 != 1;
          *(_QWORD *)(v26 + 24) = v26 + 64;
          *(_QWORD *)(v26 + 16) = a1;
        }
        else
        {
          v10 = 0LL;
          v25 = -1073741801;
        }
      }
      goto LABEL_26;
    }
    v8 = v39[2];
    v41 = v39[1];
    goto LABEL_93;
  }
  *((_QWORD *)&v68 + 1) = L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
  v67 = 0LL;
  v79 = 0LL;
  LOBYTE(v84) = 0;
  LOWORD(v85) = 0;
  DWORD1(v68) = 0;
  v42 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
  if ( v42 >= 0xFFFE )
    LOWORD(v42) = -4;
  LOWORD(v68) = v42;
  WORD1(v68) = v42 + 2;
  if ( v76 )
  {
    v71 = v76;
  }
  else
  {
    v64 = GetGlobalizationUserModelType(65532LL, v43);
    switch ( v64 )
    {
      case 1:
        v66 = RtlOpenCurrentUser(0x2000000u, (__int64)&v67);
        break;
      case 2:
        v66 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &v67);
        break;
      case 3:
        v82[0] = 0;
        v66 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v65, (__int64)&v67, v82);
        break;
      default:
        v25 = -1073741595;
        goto LABEL_75;
    }
    v25 = v66;
    if ( v66 < 0 )
      goto LABEL_75;
    v71 = v67;
  }
  v70 = 48LL;
  v72 = &v68;
  v73 = 64LL;
  v74 = 0LL;
  v25 = NtOpenKey(&v79, 131097LL, &v70);
  if ( v25 >= 0 )
  {
    v25 = RtlpLoadPolicyLanguageSpec(v79, v7, &v84, &v85);
    if ( !v25 )
    {
      if ( v10 )
      {
        v61 = v10;
        v62 = v10;
        v63 = v10;
        if ( *(_WORD *)(v10 + 4) < *(_WORD *)(v10 + 6) )
          goto LABEL_145;
        v78 = RtlpMuiRegGrowLanguageList(v10);
        v10 = v78;
        v61 = v78;
        v62 = v78;
        v63 = v78;
        if ( v78 )
          goto LABEL_145;
        v25 = -1073741801;
      }
      else
      {
        v60 = RtlpMuiRegCreateLanguageList(1, 0, v7);
        v78 = v60;
        v10 = v60;
        if ( v60 )
        {
          v61 = v60;
          v62 = v60;
          v63 = v60;
LABEL_145:
          *(_WORD *)(*(_QWORD *)(v63 + 24) + 6LL * *(unsigned __int16 *)(v62 + 4)) = (unsigned __int8)v84;
          *(_WORD *)(*(_QWORD *)(v63 + 24) + 6LL * *(unsigned __int16 *)(v62 + 4) + 4) = v85;
          ++*(_WORD *)(v61 + 4);
          goto LABEL_75;
        }
        v25 = -1073741801;
      }
    }
  }
LABEL_75:
  if ( v79 )
  {
    NtClose(v79);
    v79 = 0LL;
  }
  if ( v67 )
    NtClose(v67);
  if ( v25 || !v10 )
  {
    *(_QWORD *)&v69 = 0LL;
    *((_QWORD *)&v69 + 1) = L"Control Panel\\Desktop";
    v44 = 2 * wcslen(L"Control Panel\\Desktop");
    v70 = 48LL;
    v73 = 64LL;
    Handle = 0LL;
    if ( v44 >= 0xFFFE )
      LOWORD(v44) = -4;
    LOWORD(v69) = v44;
    WORD1(v69) = v44 + 2;
    v71 = v76;
    v72 = &v69;
    v74 = 0LL;
    v25 = NtOpenKey(&Handle, 131097LL, &v70);
    if ( v25 < 0 )
    {
      *v11 = 1;
      goto LABEL_28;
    }
    v45 = L"PreferredUILanguages";
    *(_QWORD *)&v69 = 0LL;
    if ( v86 != 3 )
      v45 = L"PreferredUILanguagesPending";
    *((_QWORD *)&v69 + 1) = v45;
    v33 = 2 * wcslen(v45);
    if ( v33 >= 0xFFFE )
      LOWORD(v33) = -4;
    goto LABEL_58;
  }
LABEL_26:
  *a6 = v10;
  if ( v9 )
LABEL_27:
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v9);
LABEL_28:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v76 )
  {
    NtClose(v76);
    v76 = 0LL;
  }
  if ( v81 )
    NtClose(v81);
  return (unsigned int)v25;
}
