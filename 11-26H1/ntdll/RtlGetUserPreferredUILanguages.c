/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x180023010
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x1800236A0 (LdrpCreateLangFallbackList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180024430 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlIsValidLocaleName @ 0x18004D470 (RtlIsValidLocaleName.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18004E220 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18004EB30 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     InitializeTEBUserLangList @ 0x180054030 (InitializeTEBUserLangList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180056350 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 */

NTSTATUS __cdecl RtlGetUserPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  ULONG v6; // ebx
  WCHAR *v7; // rsi
  void *v8; // r12
  int v9; // edi
  char v10; // r13
  int v11; // eax
  NTSTATUS result; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r15
  __int64 v16; // r10
  _QWORD *UserPrefLanguages; // rcx
  __int64 v18; // rax
  int v19; // eax
  int SystemPreferredUILanguages; // ebx
  int v21; // r8d
  _WORD *v22; // rsi
  int v23; // eax
  int LangFallbackList; // eax
  char v25; // r8
  _BYTE *v26; // rdx
  NTSTATUS v27; // eax
  ULONG v28; // r12d
  int v29; // r13d
  unsigned int v30; // r9d
  __int64 v31; // rax
  _BYTE *v32; // rdx
  int v33; // eax
  int v34; // [rsp+28h] [rbp-51h]
  __int16 v35[2]; // [rsp+58h] [rbp-21h] BYREF
  ULONG NumberOfLanguagesa; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG v37; // [rsp+60h] [rbp-19h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  int v39[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v40; // [rsp+78h] [rbp-1h]
  _QWORD v41[9]; // [rsp+80h] [rbp+7h] BYREF
  char LocaleNameb; // [rsp+E0h] [rbp+67h]
  char LocaleNamec; // [rsp+E0h] [rbp+67h]
  bool ReturnLengtha; // [rsp+F8h] [rbp+7Fh]
  unsigned int ReturnLengthb; // [rsp+F8h] [rbp+7Fh]

  v6 = Flags;
  BaseAddress = 0LL;
  *(_QWORD *)v39 = 0LL;
  NumberOfLanguagesa = 0;
  v7 = Languages;
  v37 = 0;
  v35[0] = -1;
  v8 = 0LL;
  v41[0] = 0LL;
  if ( ReturnLength )
    v37 = *ReturnLength;
  if ( LocaleName )
  {
    v6 = 4104;
    ReturnLengtha = (Flags & 0x80) != 0;
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( ReturnLength )
        *ReturnLength = 2;
      goto LABEL_49;
    }
  }
  else
  {
    ReturnLengtha = 0;
    if ( (Flags & 0xFFFF6771) != 0 )
      return -1073741811;
  }
  v9 = v6 | 0x80;
  if ( (v6 & 0x9880) != 0 )
    v9 = v6;
  if ( (v9 & 8) != 0 )
  {
    if ( (v9 & 4) != 0 )
      return -1073741811;
  }
  else if ( (v9 & 4) == 0 )
  {
    v9 |= 8u;
  }
  v10 = (v9 & 2) == 0;
  v11 = v9 & 0x9880;
  if ( (v9 & 0x9880) != 0 )
  {
    if ( v11 != 2048 && v11 != 128 && v11 != 4096 && v11 != 0x8000 )
      return -1073741811;
  }
  else
  {
    v9 |= 0x8000u;
  }
  if ( !ReturnLength || *ReturnLength && !v7 )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(v41);
  if ( result >= 0 )
  {
    v15 = v41[0];
    if ( LocaleName )
    {
      LOBYTE(v14) = 1;
      if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v41[0], LocaleName, v14, v35) < 0 )
      {
        SystemPreferredUILanguages = -1073741772;
        *ReturnLength = 2;
        goto LABEL_49;
      }
    }
    LOBYTE(v13) = v9 & 1;
    InitializeTEBUserLangList(v13, v15);
    v16 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
    v41[0] = v16;
    if ( UserPrefLanguages[1] )
      v18 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
    else
      v18 = *(_QWORD *)(v15 + 48);
    v40 = v18;
    if ( (v9 & 0x800) != 0 )
    {
      v28 = v37;
      if ( !v16 )
        goto LABEL_59;
      *ReturnLength = v37;
      SystemPreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(
                                     v16,
                                     v15,
                                     (_DWORD)v7,
                                     (_DWORD)ReturnLength,
                                     v9,
                                     v10,
                                     (__int64)&NumberOfLanguagesa);
      if ( SystemPreferredUILanguages >= 0 && *(_WORD *)(v41[0] + 4LL) )
        goto LABEL_30;
      if ( SystemPreferredUILanguages != -1073741789 )
      {
LABEL_59:
        *ReturnLength = v28;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       (v9 & 8) != 0 ? 2056 : 2052,
                                       LocaleName,
                                       &NumberOfLanguagesa,
                                       v7,
                                       ReturnLength);
      }
      goto LABEL_29;
    }
    v19 = LdrpCreateLangFallbackList(&BaseAddress, v15, 25LL);
    SystemPreferredUILanguages = v19;
    if ( (v9 & 0x8080) != 0 )
    {
      if ( v19 >= 0 )
      {
        if ( !BaseAddress )
          goto LABEL_30;
        SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v9 | 0x30u, v15, &BaseAddress, 0LL);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v21 = (int)v7;
          v22 = BaseAddress;
          *ReturnLength = v37;
          v23 = LdrpConvertLangFallbackListToMultiSz(
                  (_DWORD)v22,
                  v15,
                  v21,
                  (_DWORD)ReturnLength,
                  v9,
                  v10,
                  (__int64)&NumberOfLanguagesa);
          SystemPreferredUILanguages = v23;
          if ( v23 >= 0 && v22[2] || v23 == -1073741789 )
            goto LABEL_24;
          *ReturnLength = v37;
          v27 = RtlGetSystemPreferredUILanguages(
                  ((v9 & 8) != 0 ? 8 : 4) | 0x8000,
                  LocaleName,
                  &NumberOfLanguagesa,
                  Languages,
                  ReturnLength);
          goto LABEL_62;
        }
      }
LABEL_80:
      v22 = BaseAddress;
      goto LABEL_24;
    }
    if ( v19 < 0 )
      goto LABEL_80;
    if ( !BaseAddress )
      goto LABEL_30;
    v34 = 0;
    SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v9 | 0x20u, v15, &BaseAddress, 0LL);
    if ( SystemPreferredUILanguages < 0 )
      goto LABEL_80;
    LangFallbackList = LdrpCreateLangFallbackList(v39, v15, 25LL);
    v8 = *(void **)v39;
    SystemPreferredUILanguages = LangFallbackList;
    if ( LangFallbackList < 0 || !*(_QWORD *)v39 )
      goto LABEL_80;
    v25 = v10;
    v22 = BaseAddress;
    if ( LocaleName )
    {
      if ( v35[0] != -1 )
      {
        v26 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL) + 28LL * v35[0]);
        if ( v26 )
        {
          if ( (*v26 & 2) != 0 || (LocaleNameb = v10, ReturnLengtha) && (LocaleNameb = v10, (*v26 & 4) != 0) )
            LocaleNameb = 0;
          LdrpMergeParentBaseLanguagesToList((int)v39, 0);
          v25 = LocaleNameb;
          v8 = *(void **)v39;
        }
      }
    }
    else
    {
      v30 = 0;
      ReturnLengthb = 0;
      LocaleNamec = v10;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        v25 = v10;
        LocaleNamec = v10;
        do
        {
          v31 = *((_QWORD *)v22 + 3);
          if ( *(_WORD *)(v31 + 6LL * v30) == 2 )
          {
            v32 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL) + 28LL * *(__int16 *)(v31 + 6LL * v30 + 4));
            if ( (*v32 & 2) != 0 )
              v25 = 0;
            LocaleNamec = v25;
            if ( (*v32 & 6) != 0 )
            {
              v33 = LdrpMergeParentBaseLanguagesToList((int)v39, v34);
              v8 = *(void **)v39;
              v25 = LocaleNamec;
              SystemPreferredUILanguages = v33;
              v30 = ReturnLengthb;
              if ( v33 >= 0 )
                break;
            }
          }
          ReturnLengthb = ++v30;
        }
        while ( v30 < (unsigned __int16)v22[2] );
      }
      if ( !*(_WORD *)(*((_QWORD *)v22 + 3) + 6LL * v30) || SystemPreferredUILanguages < 0 )
      {
        v29 = (int)Languages;
        *ReturnLength = v37;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       (v9 & 8) != 0 ? 4104 : 4100,
                                       0LL,
                                       &NumberOfLanguagesa,
                                       Languages,
                                       ReturnLength);
        if ( SystemPreferredUILanguages >= 0 )
          goto LABEL_24;
        v25 = LocaleNamec;
        goto LABEL_61;
      }
    }
    v29 = (int)Languages;
LABEL_61:
    v27 = LdrpConvertLangFallbackListToMultiSz(
            (_DWORD)v8,
            v15,
            v29,
            (_DWORD)ReturnLength,
            v9,
            v25,
            (__int64)&NumberOfLanguagesa);
LABEL_62:
    SystemPreferredUILanguages = v27;
LABEL_24:
    if ( v22 )
      RtlpMuiRegFreeLanguageList(v22);
    if ( v8 )
      RtlpMuiRegFreeLanguageList(v8);
    v7 = Languages;
LABEL_29:
    if ( SystemPreferredUILanguages < 0 )
    {
LABEL_49:
      if ( v7 && v37 )
      {
        if ( v37 == 1 )
          *v7 = 0;
        else
          *(_DWORD *)v7 = 0;
      }
      return SystemPreferredUILanguages;
    }
LABEL_30:
    *NumberOfLanguages = NumberOfLanguagesa;
    return SystemPreferredUILanguages;
  }
  return result;
}
