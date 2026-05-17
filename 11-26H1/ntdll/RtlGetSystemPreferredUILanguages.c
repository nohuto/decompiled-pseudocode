/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x180002AF0
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180038AA0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlIsValidLocaleName @ 0x180001D40 (RtlIsValidLocaleName.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180003400 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpSetProcUserMachineLangList @ 0x180008EA0 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18000AF40 (RtlpMuiRegCreateLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x180039130 (LdrpCreateLangFallbackList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180039EC0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlGetSystemPreferredUILanguages(int a1, wchar_t *a2, _DWORD *a3, _WORD *a4, unsigned int *a5)
{
  char v5; // r15
  unsigned int v7; // r13d
  __int64 LanguageList; // rdi
  __int64 v10; // r14
  int v11; // ebx
  bool v12; // r15
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // r13
  _WORD *v16; // rdx
  __int64 v17; // r9
  int v18; // esi
  _WORD *v19; // r15
  __int64 v20; // r9
  int v21; // eax
  char v22; // r14
  _WORD *v23; // rdx
  unsigned int v24; // r15d
  unsigned int v25; // edi
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-51h]
  char v29; // [rsp+28h] [rbp-49h]
  char v30; // [rsp+50h] [rbp-21h]
  int v31; // [rsp+54h] [rbp-1Dh] BYREF
  __int64 v32; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int16 v33; // [rsp+60h] [rbp-11h] BYREF
  unsigned int v34; // [rsp+68h] [rbp-9h]
  __int64 v35; // [rsp+70h] [rbp-1h] BYREF
  int v36; // [rsp+78h] [rbp+7h]
  __int64 v37[8]; // [rsp+80h] [rbp+Fh] BYREF
  _WORD *v39; // [rsp+E8h] [rbp+77h]

  v39 = a4;
  v5 = a1;
  v36 = -1;
  v33 = -1;
  v31 = 0;
  v7 = *a5;
  v32 = 0LL;
  LanguageList = 0LL;
  v35 = 0LL;
  v10 = 0LL;
  v37[0] = 0LL;
  if ( a2 )
  {
    wcslen(a2);
    v12 = v5 < 0;
    if ( !RtlIsValidLocaleName(a2, 2) )
    {
      v19 = v39;
      v18 = -1073741772;
LABEL_61:
      if ( v19 )
      {
        if ( v7 )
          *v19 = 0;
        if ( v7 > 1 )
          v19[1] = 0;
      }
      return (unsigned int)v18;
    }
    a4 = v39;
    v11 = 4104;
    v30 = 1;
    v13 = 4096;
    goto LABEL_36;
  }
  if ( (a1 & 0xFFFF6373) != 0 )
    return 3221225485LL;
  v11 = a1 | 0x80;
  if ( (a1 & 0x9880) != 0 )
    v11 = a1;
  v12 = 0;
  if ( (v11 & 8) != 0 )
  {
    if ( (v11 & 4) == 0 )
      goto LABEL_7;
    return 3221225485LL;
  }
  if ( (v11 & 4) == 0 )
    v11 |= 8u;
LABEL_7:
  v30 = (v11 & 0x400) == 0;
  v13 = v11 & 0x9880;
  if ( (v11 & 0x9880) == 0 )
  {
    v11 |= 0x8000u;
    goto LABEL_9;
  }
LABEL_36:
  if ( v13 != 128 && v13 != 2048 && v13 != 4096 && v13 != 0x8000 )
    return 3221225485LL;
LABEL_9:
  v34 = *a5;
  if ( v34 && !a4 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(v37);
  if ( (int)result < 0 )
    return result;
  v15 = v37[0];
  if ( a2 )
  {
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v37[0], a2, 0LL, &v33) < 0 )
    {
      v19 = v39;
      v18 = -1073741772;
LABEL_60:
      v7 = v34;
      goto LABEL_61;
    }
    v36 = v33;
  }
  result = RtlpSetProcUserMachineLangList(v15, 0LL);
  if ( (int)result < 0 )
    return result;
  if ( (v11 & 0x800) == 0 )
  {
    if ( (v11 & 0x8080) != 0 )
    {
      if ( !v15 )
      {
        v18 = -1073741811;
        goto LABEL_51;
      }
      LOBYTE(v16) = 1;
      LanguageList = RtlpMuiRegCreateLanguageList(25LL, v16, v15);
      v32 = LanguageList;
      v16 = 0LL;
      if ( !LanguageList )
      {
        v18 = -1073741801;
LABEL_51:
        v19 = v39;
        goto LABEL_21;
      }
      v19 = v39;
      v18 = LdrpMergeLangFallbackLists(v11 | 0x30u, v15, &v32, 0LL, 0LL, 0LL, *(_QWORD *)(v15 + 56), 0LL, 1);
      LanguageList = v32;
      if ( v18 >= 0 )
        v18 = LdrpConvertLangFallbackListToMultiSz(v32, v15, (_DWORD)v39, (_DWORD)a5, v11, v30, (__int64)&v31);
LABEL_21:
      if ( LanguageList )
        RtlpMuiRegFreeLanguageList(LanguageList, v16);
      if ( v10 )
        RtlpMuiRegFreeLanguageList(v10, v16);
      if ( v18 >= 0 )
        goto LABEL_26;
      goto LABEL_60;
    }
    LOBYTE(v17) = 1;
    v18 = LdrpCreateLangFallbackList(&v32, v15, 25LL, v17);
    if ( v18 >= 0 )
    {
      v18 = LdrpMergeLangFallbackLists(v11 | 0x30u, v15, &v32, 0LL, 0LL, 0LL, *(_QWORD *)(v15 + 56), 0LL, 0);
      if ( v18 >= 0 )
      {
        LOBYTE(v20) = 1;
        v21 = LdrpCreateLangFallbackList(&v35, v15, 25LL, v20);
        LanguageList = v32;
        v18 = v21;
        if ( v21 >= 0 )
        {
          if ( a2 )
          {
            v22 = v30;
            if ( (_WORD)v36 != 0xFFFF )
            {
              v23 = (_WORD *)(28LL * (__int16)v36 + *(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL));
              if ( v23 )
              {
                if ( (*v23 & 2) != 0 || v12 && (*v23 & 4) != 0 )
                  v22 = 0;
                v18 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v35, v28);
LABEL_49:
                if ( v18 < 0 )
                  goto LABEL_50;
              }
            }
          }
          else
          {
            v24 = 0;
            v22 = v30;
            if ( *(_WORD *)(v32 + 4) )
            {
              while ( 1 )
              {
                v27 = *(_QWORD *)(LanguageList + 24);
                if ( *(_WORD *)(v27 + 6LL * v24) == 2 )
                {
                  v16 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL) + 28LL * *(__int16 *)(v27 + 6LL * v24 + 4));
                  if ( (*v16 & 2) != 0 )
                    v22 = 0;
                  if ( (*v16 & 6) != 0 )
                  {
                    v18 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v35, v28);
                    if ( v18 >= 0 )
                      break;
                  }
                }
                if ( ++v24 >= *(unsigned __int16 *)(LanguageList + 4) )
                  goto LABEL_49;
              }
            }
          }
          v19 = v39;
          v29 = v22;
          v10 = v35;
          v18 = LdrpConvertLangFallbackListToMultiSz(v35, v15, (_DWORD)v39, (_DWORD)a5, v11, v29, (__int64)&v31);
          goto LABEL_21;
        }
LABEL_50:
        v10 = v35;
        goto LABEL_51;
      }
    }
    v19 = v39;
LABEL_80:
    LanguageList = v32;
    goto LABEL_21;
  }
  v25 = v34;
  v19 = v39;
  *a5 = v34;
  v18 = LdrpConvertLangFallbackListToMultiSz(
          *(_QWORD *)(v15 + 56),
          v15,
          (_DWORD)v39,
          (_DWORD)a5,
          v11,
          v30,
          (__int64)&v31);
  if ( v18 < 0 || !v31 )
  {
    LOBYTE(v26) = 1;
    v18 = LdrpCreateLangFallbackList(&v32, v15, 25LL, v26);
    if ( v18 >= 0 )
    {
      v18 = LdrpMergeLangFallbackLists(v11 | 0x30u, v15, &v32, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      if ( v18 >= 0 )
      {
        *a5 = v25;
        LanguageList = v32;
        v18 = LdrpConvertLangFallbackListToMultiSz(v32, v15, (_DWORD)v39, (_DWORD)a5, v11, v30, (__int64)&v31);
        goto LABEL_21;
      }
    }
    goto LABEL_80;
  }
LABEL_26:
  *a3 = v31;
  return (unsigned int)v18;
}
