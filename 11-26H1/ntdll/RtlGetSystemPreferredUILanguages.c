/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x18004E220
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180023010 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x1800236A0 (LdrpCreateLangFallbackList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180024430 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlIsValidLocaleName @ 0x18004D470 (RtlIsValidLocaleName.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18004EB30 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800545D0 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180056350 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180056670 (RtlpMuiRegCreateLanguageList.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

NTSTATUS __cdecl RtlGetSystemPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  char v5; // r15
  ULONG v7; // r13d
  unsigned __int16 *LanguageList; // rdi
  void *v10; // r14
  ULONG v11; // ebx
  bool v12; // r15
  int v13; // eax
  NTSTATUS result; // eax
  __int64 v15; // r13
  __int64 v16; // rdx
  NTSTATUS v17; // esi
  WCHAR *v18; // r15
  int LangFallbackList; // eax
  char v20; // r14
  _WORD *v21; // rdx
  unsigned int v22; // r15d
  ULONG v23; // edi
  __int64 v24; // rax
  __int16 v25; // ax
  int v26; // [rsp+20h] [rbp-51h]
  char v27; // [rsp+28h] [rbp-49h]
  char v28; // [rsp+50h] [rbp-21h]
  ULONG v29; // [rsp+54h] [rbp-1Dh] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int16 v31; // [rsp+60h] [rbp-11h] BYREF
  ULONG v32; // [rsp+68h] [rbp-9h]
  int v33[2]; // [rsp+70h] [rbp-1h] BYREF
  int v34; // [rsp+78h] [rbp+7h]
  __int64 v35[8]; // [rsp+80h] [rbp+Fh] BYREF
  WCHAR *v37; // [rsp+E8h] [rbp+77h]

  v37 = Languages;
  v5 = Flags;
  v34 = -1;
  v31 = -1;
  v29 = 0;
  v7 = *ReturnLength;
  BaseAddress = 0LL;
  LanguageList = 0LL;
  *(_QWORD *)v33 = 0LL;
  v10 = 0LL;
  v35[0] = 0LL;
  if ( LocaleName )
  {
    wcslen(LocaleName);
    v12 = v5 < 0;
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      v18 = v37;
      v17 = -1073741772;
LABEL_61:
      if ( v18 )
      {
        if ( v7 )
          *v18 = 0;
        if ( v7 > 1 )
          v18[1] = 0;
      }
      return v17;
    }
    Languages = v37;
    v11 = 4104;
    v28 = 1;
    v13 = 4096;
    goto LABEL_36;
  }
  if ( (Flags & 0xFFFF6373) != 0 )
    return -1073741811;
  v11 = Flags | 0x80;
  if ( (Flags & 0x9880) != 0 )
    v11 = Flags;
  v12 = 0;
  if ( (v11 & 8) != 0 )
  {
    if ( (v11 & 4) == 0 )
      goto LABEL_7;
    return -1073741811;
  }
  if ( (v11 & 4) == 0 )
    v11 |= 8u;
LABEL_7:
  v28 = (v11 & 0x400) == 0;
  v13 = v11 & 0x9880;
  if ( (v11 & 0x9880) == 0 )
  {
    v11 |= 0x8000u;
    goto LABEL_9;
  }
LABEL_36:
  if ( v13 != 128 && v13 != 2048 && v13 != 4096 && v13 != 0x8000 )
    return -1073741811;
LABEL_9:
  v32 = *ReturnLength;
  if ( v32 && !Languages )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(v35);
  if ( result < 0 )
    return result;
  v15 = v35[0];
  if ( LocaleName )
  {
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v35[0], LocaleName, 0LL, &v31) < 0 )
    {
      v18 = v37;
      v17 = -1073741772;
LABEL_60:
      v7 = v32;
      goto LABEL_61;
    }
    v34 = v31;
  }
  result = RtlpSetProcUserMachineLangList(v15, 0LL);
  if ( result < 0 )
    return result;
  if ( (v11 & 0x800) == 0 )
  {
    if ( (v11 & 0x8080) != 0 )
    {
      if ( !v15 )
      {
        v17 = -1073741811;
        goto LABEL_51;
      }
      LOBYTE(v16) = 1;
      LanguageList = (unsigned __int16 *)RtlpMuiRegCreateLanguageList(25LL, v16, v15);
      BaseAddress = LanguageList;
      if ( !LanguageList )
      {
        v17 = -1073741801;
LABEL_51:
        v18 = v37;
        goto LABEL_21;
      }
      v18 = v37;
      v17 = LdrpMergeLangFallbackLists(v11 | 0x30, v15, &BaseAddress, 0LL);
      LanguageList = (unsigned __int16 *)BaseAddress;
      if ( v17 >= 0 )
        v17 = LdrpConvertLangFallbackListToMultiSz((__int64)BaseAddress, v15, v37, ReturnLength, v11, v28, &v29);
LABEL_21:
      if ( LanguageList )
        RtlpMuiRegFreeLanguageList(LanguageList);
      if ( v10 )
        RtlpMuiRegFreeLanguageList(v10);
      if ( v17 >= 0 )
        goto LABEL_26;
      goto LABEL_60;
    }
    v17 = LdrpCreateLangFallbackList(&BaseAddress, v15, 25, 1);
    if ( v17 >= 0 )
    {
      v26 = 0;
      v17 = LdrpMergeLangFallbackLists(v11 | 0x30, v15, &BaseAddress, 0LL);
      if ( v17 >= 0 )
      {
        LangFallbackList = LdrpCreateLangFallbackList(v33, v15, 25, 1);
        LanguageList = (unsigned __int16 *)BaseAddress;
        v17 = LangFallbackList;
        if ( LangFallbackList >= 0 )
        {
          if ( LocaleName )
          {
            v20 = v28;
            if ( (_WORD)v34 != 0xFFFF )
            {
              v21 = (_WORD *)(28LL * (__int16)v34 + *(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL));
              if ( v21 )
              {
                if ( (*v21 & 2) != 0 || v12 && (*v21 & 4) != 0 )
                  v20 = 0;
                v17 = LdrpMergeParentBaseLanguagesToList((int)v33, 0);
LABEL_49:
                if ( v17 < 0 )
                  goto LABEL_50;
              }
            }
          }
          else
          {
            v22 = 0;
            v20 = v28;
            if ( *((_WORD *)BaseAddress + 2) )
            {
              while ( 1 )
              {
                v24 = *((_QWORD *)LanguageList + 3);
                if ( *(_WORD *)(v24 + 6LL * v22) == 2 )
                {
                  v25 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL) + 28LL * *(__int16 *)(v24 + 6LL * v22 + 4));
                  if ( (v25 & 2) != 0 )
                    v20 = 0;
                  if ( (v25 & 6) != 0 )
                  {
                    v17 = LdrpMergeParentBaseLanguagesToList((int)v33, v26);
                    if ( v17 >= 0 )
                      break;
                  }
                }
                if ( ++v22 >= LanguageList[2] )
                  goto LABEL_49;
              }
            }
          }
          v18 = v37;
          v27 = v20;
          v10 = *(void **)v33;
          v17 = LdrpConvertLangFallbackListToMultiSz(*(__int64 *)v33, v15, v37, ReturnLength, v11, v27, &v29);
          goto LABEL_21;
        }
LABEL_50:
        v10 = *(void **)v33;
        goto LABEL_51;
      }
    }
    v18 = v37;
LABEL_80:
    LanguageList = (unsigned __int16 *)BaseAddress;
    goto LABEL_21;
  }
  v23 = v32;
  v18 = v37;
  *ReturnLength = v32;
  v17 = LdrpConvertLangFallbackListToMultiSz(*(_QWORD *)(v15 + 56), v15, v37, ReturnLength, v11, v28, &v29);
  if ( v17 < 0 || !v29 )
  {
    v17 = LdrpCreateLangFallbackList(&BaseAddress, v15, 25, 1);
    if ( v17 >= 0 )
    {
      v17 = LdrpMergeLangFallbackLists(v11 | 0x30, v15, &BaseAddress, 0LL);
      if ( v17 >= 0 )
      {
        *ReturnLength = v23;
        LanguageList = (unsigned __int16 *)BaseAddress;
        v17 = LdrpConvertLangFallbackListToMultiSz((__int64)BaseAddress, v15, v37, ReturnLength, v11, v28, &v29);
        goto LABEL_21;
      }
    }
    goto LABEL_80;
  }
LABEL_26:
  *NumberOfLanguages = v29;
  return v17;
}
