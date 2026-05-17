/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x1800038D0
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x180002AF0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180038AA0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpLoadInstallLanguageFallback @ 0x18000144C (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180001AEC (RtlpFilterandReplaceConsoleLanguages.c)
 *     GetNameFromLangListNode @ 0x1800027E0 (GetNameFromLangListNode.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180003400 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800061D0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x180039130 (LdrpCreateLangFallbackList.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtIsUILanguageComitted @ 0x1801610B0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180161AD0 (NtQueryInstallUILanguage.c)
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
  __int64 v10; // rdx
  int appended; // r12d
  __int64 v12; // r13
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 *v18; // r14
  unsigned __int16 *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  wchar_t *v23; // rcx
  size_t v24; // rax
  int v25; // eax
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  __int64 v28; // r8
  __int64 *v29; // rdi
  __int64 v30; // r9
  __int64 v32; // rcx
  unsigned int i; // ecx
  unsigned int v34; // eax
  unsigned __int16 *v35; // r9
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int j; // edi
  unsigned __int16 *v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  __int16 v43; // [rsp+28h] [rbp-81h]
  __int16 v44; // [rsp+28h] [rbp-81h]
  __int16 v45; // [rsp+28h] [rbp-81h]
  char v46; // [rsp+38h] [rbp-71h]
  int v47; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int16 v48[2]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v49; // [rsp+44h] [rbp-65h]
  int v50; // [rsp+48h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-59h] BYREF
  int v52; // [rsp+60h] [rbp-49h]
  int v53[2]; // [rsp+68h] [rbp-41h]
  __int64 v54; // [rsp+70h] [rbp-39h]
  unsigned int v55; // [rsp+78h] [rbp-31h]
  unsigned int v56; // [rsp+7Ch] [rbp-2Dh]
  int v57; // [rsp+80h] [rbp-29h]
  __int64 v58; // [rsp+88h] [rbp-21h] BYREF
  wchar_t *String[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-9h]
  char v61; // [rsp+E8h] [rbp+3Fh]
  _QWORD *v62; // [rsp+F8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+F8h] [rbp+4Fh]
  __int64 v64; // [rsp+100h] [rbp+57h]
  __int64 v65; // [rsp+108h] [rbp+5Fh]
  __int64 v66; // [rsp+110h] [rbp+67h]
  __int64 v67; // [rsp+118h] [rbp+6Fh]
  __int64 v68; // [rsp+120h] [rbp+77h]
  __int64 v69; // [rsp+128h] [rbp+7Fh]
  va_list va1; // [rsp+130h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v62 = va_arg(va1, _QWORD *);
  v64 = va_arg(va1, _QWORD);
  v65 = va_arg(va1, _QWORD);
  v66 = va_arg(va1, _QWORD);
  v67 = va_arg(va1, _QWORD);
  v68 = va_arg(va1, _QWORD);
  v69 = va_arg(va1, _QWORD);
  v61 = a1;
  v2 = 0;
  v56 = 0;
  v52 = 0;
  LOWORD(v47) = -1;
  v3 = v62;
  LOWORD(v50) = -1;
  v48[0] = -1;
  v5 = a1;
  v58 = 0LL;
  Heap_0 = 0LL;
  v46 = 0;
  v54 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)String = 0LL;
  if ( !v62 || !*v62 || !a2 || *(_WORD *)(*v62 + 4LL) )
    return 3221225485LL;
  v7 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages
    && (UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages, *(_QWORD *)UserPrefLanguages) )
  {
    v9 = *(_DWORD *)(*(_QWORD *)UserPrefLanguages + 40LL);
    v55 = v9;
  }
  else
  {
    v9 = 0;
    v55 = 0;
  }
  *(_QWORD *)v53 = v62;
  if ( !v7 && (v9 & 6) != 0 )
  {
    v56 = HIWORD(v9);
    v46 = 1;
    *(_QWORD *)v53 = &v58;
    appended = LdrpCreateLangFallbackList(&v58, a2, 25LL, 0LL);
    if ( appended < 0 )
      goto LABEL_67;
    v5 = v61;
  }
  v12 = 0LL;
  Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 340LL);
  if ( !Heap_0 )
    return 3221225495LL;
  v13 = 170LL;
  if ( !v7 )
  {
    v14 = v64;
    if ( v64 )
    {
      for ( i = 0; ; i = v49 + 1 )
      {
        v34 = *(unsigned __int16 *)(v14 + 4);
        v49 = i;
        if ( i >= v34 )
          break;
        v35 = (unsigned __int16 *)(*(_QWORD *)(v14 + 24) + 6LL * i);
        if ( *v35 )
        {
          v36 = *(_QWORD *)(v14 + 16);
          DestinationString.Buffer = Heap_0;
          v37 = a2;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( v36 )
            v37 = v36;
          if ( (int)GetNameFromLangListNode(v37, v35, &DestinationString) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode(v53[0], a2, 0, (int)&v47, DestinationString.Buffer);
            if ( appended < 0 )
              goto LABEL_67;
          }
          v14 = v64;
          v13 = 170LL;
        }
      }
      v5 = v61;
    }
  }
  v10 = v65;
  if ( v65 && !v7 )
  {
    for ( j = 0; j < *(unsigned __int16 *)(v10 + 4); ++j )
    {
      v40 = (unsigned __int16 *)(*(_QWORD *)(v10 + 24) + 6LL * j);
      if ( *v40 )
      {
        v41 = *(_QWORD *)(v10 + 16);
        DestinationString.Buffer = Heap_0;
        v42 = a2;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( v41 )
          v42 = v41;
        if ( (int)GetNameFromLangListNode(v42, v40, &DestinationString) >= 0 )
        {
          appended = LdrpLangFallbackListAppendNode(v53[0], a2, 0, (int)&v47, DestinationString.Buffer);
          if ( appended < 0 )
            goto LABEL_67;
        }
        v10 = v65;
        v13 = 170LL;
      }
    }
    v5 = v61;
  }
  v57 = v5 & 0x20;
  if ( (v5 & 0x20) != 0 && ((v15 = v66) != 0 && *(_WORD *)(v66 + 4) || (v15 = v67) != 0 && *(_WORD *)(v67 + 4)) )
  {
    v12 = v15;
    if ( *(_BYTE *)(v15 + 8) )
    {
      v16 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v54 = v68;
      if ( v68 )
        goto LABEL_24;
      v16 = *(_QWORD *)(a2 + 48);
    }
    v54 = v16;
LABEL_24:
    v17 = 0;
    if ( !*(_WORD *)(v12 + 4) )
      goto LABEL_45;
    v18 = *(__int64 **)v53;
    while ( 1 )
    {
      v60 = 6LL * v17;
      v19 = (unsigned __int16 *)(*(_QWORD *)(v12 + 24) + v60);
      v20 = *v19;
      if ( (_WORD)v20 )
      {
        DestinationString.Buffer = Heap_0;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( v19 )
          break;
      }
LABEL_43:
      if ( ++v17 >= *(unsigned __int16 *)(v12 + 4) )
      {
        v3 = v62;
        goto LABEL_45;
      }
    }
    if ( v20 == 2 )
    {
      v10 = 28LL * (__int16)v19[2];
      v21 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
      v22 = *(__int16 *)(v10 + v21 + 6);
      v13 = *(unsigned __int16 *)(v10 + v21 + 4);
      if ( (__int16)v22 > 0 )
      {
        v13 = *(_QWORD *)(a2 + 32);
        *(_QWORD *)&DestinationString.Length = 0LL;
        v10 = *(__int16 *)(*(_QWORD *)(v13 + 16) + 2 * v22);
        v23 = (wchar_t *)(*(_QWORD *)(v13 + 24) + 2 * v10);
        DestinationString.Buffer = v23;
        if ( v23 )
        {
          v24 = 2 * wcslen(v23);
          if ( v24 >= 0xFFFE )
            LOWORD(v24) = -4;
          DestinationString.Length = v24;
          DestinationString.MaximumLength = v24 + 2;
        }
        goto LABEL_34;
      }
      if ( !(_WORD)v13 )
      {
LABEL_76:
        v25 = -1073741595;
        goto LABEL_35;
      }
      v32 = *(unsigned __int16 *)(v10 + v21 + 4);
    }
    else
    {
      v10 = (unsigned int)(v20 - 1);
      if ( v20 != 1 )
      {
        if ( v20 != 3 )
        {
          v25 = -1073741595;
          goto LABEL_35;
        }
        RtlInitUnicodeString(
          &DestinationString,
          (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL)
                 + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL) + 2LL * (__int16)v19[2])));
        goto LABEL_34;
      }
      v32 = (unsigned int)(__int16)v19[2];
    }
    if ( (unsigned __int8)RtlLCIDToCultureName(v32, &DestinationString) )
    {
LABEL_34:
      v25 = 0;
LABEL_35:
      if ( v25 >= 0 )
      {
        LOBYTE(v13) = 1;
        if ( (int)LdrpLangFallbackListAppendNode((int)v18, a2, v13, (int)&v47, DestinationString.Buffer) >= 0
          && (v5 & 0x10) != 0 )
        {
          v26 = *(_QWORD *)(v12 + 24);
          if ( *(_WORD *)(v60 + v26) == 2 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v60 + v26 + 4);
            if ( (*(_WORD *)v10 & 7) != 0
              && ((*(_WORD *)v10 & 6) == 0
               || (int)LdrpMergeParentBaseLanguagesToList(v18, (_WORD *)v10, a2, v54, v43) >= 0) )
            {
              ++v52;
            }
          }
        }
      }
      goto LABEL_43;
    }
    goto LABEL_76;
  }
LABEL_45:
  LOWORD(v62) = 0;
  String[1] = Heap_0 + 85;
  appended = 0;
  v27 = *(_WORD *)(a2 + 4);
  LODWORD(String[0]) = 11141120;
  if ( !v27 )
  {
    appended = NtQueryInstallUILanguage((_QWORD **)va, v10, v13);
    if ( appended < 0 )
      goto LABEL_51;
    if ( (int)NtIsUILanguageComitted() >= 0 )
    {
      RtlpLoadInstallLanguageFallback(a2, (_WORD *)(a2 + 6), (_WORD *)(a2 + 8));
      *(_WORD *)(a2 + 4) = (_WORD)v62;
    }
    v27 = (unsigned __int16)v62;
  }
  v2 = v27;
LABEL_51:
  if ( appended >= 0 )
  {
    if ( (unsigned __int8)RtlLCIDToCultureName(v2, String) )
    {
      LOBYTE(v28) = 1;
      appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v2, v28, v48);
      if ( appended >= 0 )
      {
        if ( (v61 & 0x40) != 0 || (_BYTE)v69 && v52 )
        {
          v29 = *(__int64 **)v53;
          goto LABEL_66;
        }
        v29 = *(__int64 **)v53;
        appended = LdrpLangFallbackListAppendNode(v53[0], a2, 0, (int)&v50, String[1]);
        if ( appended < 0
          || !v57
          || (v10 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v48[0], (*(_BYTE *)v10 & 6) == 0)
          || (!v12 || !v54 ? (v30 = *(_QWORD *)(a2 + 40)) : (v30 = v54),
              appended = LdrpMergeParentBaseLanguagesToList(v29, (_WORD *)v10, a2, v30, v44),
              appended >= 0) )
        {
LABEL_66:
          if ( v46 )
          {
            appended = RtlpFilterandReplaceConsoleLanguages(*v29, a2, (v55 & 4) != 0, v56, (__int64)v3);
            if ( appended >= 0 )
            {
              if ( v57 )
              {
                if ( (v61 & 0x10) != 0 )
                {
                  appended = LdrpLangFallbackListAppendNode((int)v3, a2, 0, (int)&v50, String[1]);
                  if ( appended >= 0 )
                  {
                    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v48[0];
                    if ( (*(_BYTE *)v10 & 6) != 0 )
                    {
                      if ( !v12 || (v38 = v54) == 0 )
                        v38 = *(_QWORD *)(a2 + 40);
                      appended = LdrpMergeParentBaseLanguagesToList(v3, (_WORD *)v10, a2, v38, v45);
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
  if ( v58 )
    RtlpMuiRegFreeLanguageList(v58, v10);
  if ( Heap_0 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, Heap_0);
  return (unsigned int)appended;
}
