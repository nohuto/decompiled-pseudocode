/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x18004F000
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180023010 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18004E220 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x1800236A0 (LdrpCreateLangFallbackList.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18004CB84 (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18004D21C (RtlpFilterandReplaceConsoleLanguages.c)
 *     GetNameFromLangListNode @ 0x18004DF10 (GetNameFromLangListNode.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18004EB30 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051900 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtIsUILanguageComitted @ 0x180160FB0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1801619D0 (NtQueryInstallUILanguage.c)
 */

__int64 LdrpMergeLangFallbackLists(int a1, __int64 a2, ...)
{
  unsigned __int16 v2; // bx
  _QWORD *v3; // r14
  char v5; // r12
  wchar_t *Heap_0; // r15
  int v7; // edi
  void *UserPrefLanguages; // rcx
  unsigned int v9; // eax
  int appended; // r12d
  __int64 v11; // r13
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 *v18; // r14
  unsigned __int16 *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  wchar_t *v24; // rcx
  size_t v25; // rax
  int v26; // eax
  __int64 v27; // rax
  _WORD *v28; // rdx
  unsigned __int16 v29; // ax
  __int64 v30; // r8
  __int64 *v31; // rdi
  _WORD *v32; // rdx
  __int64 v33; // r9
  LCID v35; // ecx
  unsigned int i; // ecx
  unsigned int v37; // eax
  unsigned __int16 *v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  _WORD *v41; // rdx
  __int64 v42; // rax
  unsigned int j; // edi
  unsigned __int16 *v44; // r9
  __int64 v45; // rax
  __int64 v46; // rcx
  __int16 v47; // [rsp+28h] [rbp-81h]
  __int16 v48; // [rsp+28h] [rbp-81h]
  __int16 v49; // [rsp+28h] [rbp-81h]
  char v50; // [rsp+38h] [rbp-71h]
  int v51; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int16 v52[2]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v53; // [rsp+44h] [rbp-65h]
  int v54; // [rsp+48h] [rbp-61h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-59h] BYREF
  int v56; // [rsp+60h] [rbp-49h]
  int v57[2]; // [rsp+68h] [rbp-41h]
  __int64 v58; // [rsp+70h] [rbp-39h]
  unsigned int v59; // [rsp+78h] [rbp-31h]
  unsigned int v60; // [rsp+7Ch] [rbp-2Dh]
  int v61; // [rsp+80h] [rbp-29h]
  PVOID BaseAddress; // [rsp+88h] [rbp-21h] BYREF
  _UNICODE_STRING String; // [rsp+90h] [rbp-19h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-9h]
  char v65; // [rsp+E8h] [rbp+3Fh]
  _QWORD *InstallUILanguageId; // [rsp+F8h] [rbp+4Fh] BYREF
  va_list InstallUILanguageIda; // [rsp+F8h] [rbp+4Fh]
  __int64 v68; // [rsp+100h] [rbp+57h]
  __int64 v69; // [rsp+108h] [rbp+5Fh]
  __int64 v70; // [rsp+110h] [rbp+67h]
  __int64 v71; // [rsp+118h] [rbp+6Fh]
  __int64 v72; // [rsp+120h] [rbp+77h]
  __int64 v73; // [rsp+128h] [rbp+7Fh]
  va_list va1; // [rsp+130h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(InstallUILanguageIda, a2);
  InstallUILanguageId = va_arg(va1, _QWORD *);
  v68 = va_arg(va1, _QWORD);
  v69 = va_arg(va1, _QWORD);
  v70 = va_arg(va1, _QWORD);
  v71 = va_arg(va1, _QWORD);
  v72 = va_arg(va1, _QWORD);
  v73 = va_arg(va1, _QWORD);
  v65 = a1;
  v2 = 0;
  v60 = 0;
  v56 = 0;
  LOWORD(v51) = -1;
  v3 = InstallUILanguageId;
  LOWORD(v54) = -1;
  v52[0] = -1;
  v5 = a1;
  BaseAddress = 0LL;
  Heap_0 = 0LL;
  v50 = 0;
  v58 = 0LL;
  DestinationString = 0LL;
  String = 0LL;
  if ( !InstallUILanguageId || !*InstallUILanguageId || !a2 || *(_WORD *)(*InstallUILanguageId + 4LL) )
    return 3221225485LL;
  v7 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages
    && (UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages, *(_QWORD *)UserPrefLanguages) )
  {
    v9 = *(_DWORD *)(*(_QWORD *)UserPrefLanguages + 40LL);
    v59 = v9;
  }
  else
  {
    v9 = 0;
    v59 = 0;
  }
  *(_QWORD *)v57 = InstallUILanguageId;
  if ( !v7 && (v9 & 6) != 0 )
  {
    v60 = HIWORD(v9);
    v50 = 1;
    *(_QWORD *)v57 = &BaseAddress;
    appended = LdrpCreateLangFallbackList(&BaseAddress, a2, 25, 0);
    if ( appended < 0 )
      goto LABEL_67;
    v5 = v65;
  }
  v11 = 0LL;
  Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
  if ( !Heap_0 )
    return 3221225495LL;
  LODWORD(v12) = 170;
  if ( !v7 )
  {
    v13 = v68;
    if ( v68 )
    {
      for ( i = 0; ; i = v53 + 1 )
      {
        v37 = *(unsigned __int16 *)(v13 + 4);
        v53 = i;
        if ( i >= v37 )
          break;
        v38 = (unsigned __int16 *)(*(_QWORD *)(v13 + 24) + 6LL * i);
        if ( *v38 )
        {
          v39 = *(_QWORD *)(v13 + 16);
          DestinationString.Buffer = Heap_0;
          v40 = a2;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( v39 )
            v40 = v39;
          if ( (int)GetNameFromLangListNode(v40, v38, &DestinationString) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode(v57[0], a2, 0, (int)&v51, DestinationString.Buffer);
            if ( appended < 0 )
              goto LABEL_67;
          }
          v13 = v68;
          LODWORD(v12) = 170;
        }
      }
      v5 = v65;
    }
  }
  v14 = v69;
  if ( v69 && !v7 )
  {
    for ( j = 0; j < *(unsigned __int16 *)(v14 + 4); ++j )
    {
      v44 = (unsigned __int16 *)(*(_QWORD *)(v14 + 24) + 6LL * j);
      if ( *v44 )
      {
        v45 = *(_QWORD *)(v14 + 16);
        DestinationString.Buffer = Heap_0;
        v46 = a2;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( v45 )
          v46 = v45;
        if ( (int)GetNameFromLangListNode(v46, v44, &DestinationString) >= 0 )
        {
          appended = LdrpLangFallbackListAppendNode(v57[0], a2, 0, (int)&v51, DestinationString.Buffer);
          if ( appended < 0 )
            goto LABEL_67;
        }
        v14 = v69;
        LODWORD(v12) = 170;
      }
    }
    v5 = v65;
  }
  v61 = v5 & 0x20;
  if ( (v5 & 0x20) != 0 && ((v15 = v70) != 0 && *(_WORD *)(v70 + 4) || (v15 = v71) != 0 && *(_WORD *)(v71 + 4)) )
  {
    v11 = v15;
    if ( *(_BYTE *)(v15 + 8) )
    {
      v16 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v58 = v72;
      if ( v72 )
        goto LABEL_24;
      v16 = *(_QWORD *)(a2 + 48);
    }
    v58 = v16;
LABEL_24:
    v17 = 0;
    if ( !*(_WORD *)(v11 + 4) )
      goto LABEL_45;
    v18 = *(__int64 **)v57;
    while ( 1 )
    {
      v64 = 6LL * v17;
      v19 = (unsigned __int16 *)(*(_QWORD *)(v11 + 24) + v64);
      v20 = *v19;
      if ( (_WORD)v20 )
      {
        DestinationString.Buffer = Heap_0;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( v19 )
          break;
      }
LABEL_43:
      if ( ++v17 >= *(unsigned __int16 *)(v11 + 4) )
      {
        v3 = InstallUILanguageId;
        goto LABEL_45;
      }
    }
    switch ( v20 )
    {
      case 2:
        v21 = 28LL * (__int16)v19[2];
        v22 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
        v23 = *(__int16 *)(v21 + v22 + 6);
        LODWORD(v12) = *(unsigned __int16 *)(v21 + v22 + 4);
        if ( (__int16)v23 > 0 )
        {
          v12 = *(_QWORD *)(a2 + 32);
          *(_QWORD *)&DestinationString.Length = 0LL;
          v24 = (wchar_t *)(*(_QWORD *)(v12 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v12 + 16) + 2 * v23));
          DestinationString.Buffer = v24;
          if ( v24 )
          {
            v25 = 2 * wcslen(v24);
            if ( v25 >= 0xFFFE )
              LOWORD(v25) = -4;
            DestinationString.Length = v25;
            DestinationString.MaximumLength = v25 + 2;
          }
          goto LABEL_34;
        }
        if ( !(_WORD)v12 )
        {
LABEL_76:
          v26 = -1073741595;
          goto LABEL_35;
        }
        v35 = *(unsigned __int16 *)(v21 + v22 + 4);
        break;
      case 1:
        v35 = (__int16)v19[2];
        break;
      case 3:
        RtlInitUnicodeString(
          &DestinationString,
          (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL)
                 + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL) + 2LL * (__int16)v19[2])));
        goto LABEL_34;
      default:
        v26 = -1073741595;
        goto LABEL_35;
    }
    if ( RtlLCIDToCultureName(v35, &DestinationString) )
    {
LABEL_34:
      v26 = 0;
LABEL_35:
      if ( v26 >= 0 )
      {
        LOBYTE(v12) = 1;
        if ( (int)LdrpLangFallbackListAppendNode((int)v18, a2, v12, (int)&v51, DestinationString.Buffer) >= 0
          && (v5 & 0x10) != 0 )
        {
          v27 = *(_QWORD *)(v11 + 24);
          if ( *(_WORD *)(v64 + v27) == 2 )
          {
            v28 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v64 + v27 + 4));
            if ( (*v28 & 7) != 0
              && ((*v28 & 6) == 0 || (int)LdrpMergeParentBaseLanguagesToList(v18, v28, a2, v58, v47) >= 0) )
            {
              ++v56;
            }
          }
        }
      }
      goto LABEL_43;
    }
    goto LABEL_76;
  }
LABEL_45:
  LOWORD(InstallUILanguageId) = 0;
  String.Buffer = Heap_0 + 85;
  appended = 0;
  v29 = *(_WORD *)(a2 + 4);
  *(_DWORD *)&String.Length = 11141120;
  if ( !v29 )
  {
    appended = NtQueryInstallUILanguage((LANGID *)InstallUILanguageIda);
    if ( appended < 0 )
      goto LABEL_51;
    if ( NtIsUILanguageComitted() >= 0 )
    {
      RtlpLoadInstallLanguageFallback(a2, (_WORD *)(a2 + 6), (_WORD *)(a2 + 8));
      *(_WORD *)(a2 + 4) = (_WORD)InstallUILanguageId;
    }
    v29 = (unsigned __int16)InstallUILanguageId;
  }
  v2 = v29;
LABEL_51:
  if ( appended >= 0 )
  {
    if ( RtlLCIDToCultureName(v2, &String) )
    {
      LOBYTE(v30) = 1;
      appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v2, v30, v52);
      if ( appended >= 0 )
      {
        if ( (v65 & 0x40) != 0 || (_BYTE)v73 && v56 )
        {
          v31 = *(__int64 **)v57;
          goto LABEL_66;
        }
        v31 = *(__int64 **)v57;
        appended = LdrpLangFallbackListAppendNode(v57[0], a2, 0, (int)&v54, String.Buffer);
        if ( appended < 0
          || !v61
          || (v32 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v52[0]), (*(_BYTE *)v32 & 6) == 0)
          || (!v11 || !v58 ? (v33 = *(_QWORD *)(a2 + 40)) : (v33 = v58),
              appended = LdrpMergeParentBaseLanguagesToList(v31, v32, a2, v33, v48),
              appended >= 0) )
        {
LABEL_66:
          if ( v50 )
          {
            appended = RtlpFilterandReplaceConsoleLanguages(*v31, a2, (v59 & 4) != 0, v60, (__int64)v3);
            if ( appended >= 0 )
            {
              if ( v61 )
              {
                if ( (v65 & 0x10) != 0 )
                {
                  appended = LdrpLangFallbackListAppendNode((int)v3, a2, 0, (int)&v54, String.Buffer);
                  if ( appended >= 0 )
                  {
                    v41 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v52[0]);
                    if ( (*(_BYTE *)v41 & 6) != 0 )
                    {
                      if ( !v11 || (v42 = v58) == 0 )
                        v42 = *(_QWORD *)(a2 + 40);
                      appended = LdrpMergeParentBaseLanguagesToList(v3, v41, a2, v42, v49);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      appended = -1073741823;
    }
  }
LABEL_67:
  if ( BaseAddress )
    RtlpMuiRegFreeLanguageList(BaseAddress);
  if ( Heap_0 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  return (unsigned int)appended;
}
