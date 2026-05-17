/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x180038AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsValidLocaleName @ 0x180001D40 (RtlIsValidLocaleName.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180002AF0 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180003400 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     InitializeTEBUserLangList @ 0x180008900 (InitializeTEBUserLangList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpCreateLangFallbackList @ 0x180039130 (LdrpCreateLangFallbackList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180039EC0 (LdrpConvertLangFallbackListToMultiSz.c)
 */

__int64 __fastcall RtlGetUserPreferredUILanguages(int a1, wchar_t *a2, _DWORD *a3, _WORD *a4, unsigned int *a5)
{
  int v6; // ebx
  _WORD *v7; // rsi
  __int64 v8; // r12
  int v9; // edi
  char v10; // r13
  int v11; // eax
  __int64 result; // rax
  _QWORD *v13; // r15
  __int64 v14; // r10
  _QWORD *UserPrefLanguages; // rcx
  __int64 v16; // rax
  int v17; // eax
  int SystemPreferredUILanguages; // ebx
  int v19; // r8d
  __int64 v20; // rsi
  int v21; // eax
  int v22; // eax
  char v23; // r8
  _WORD *v24; // rdx
  int v25; // eax
  unsigned int v26; // r12d
  __int64 v27; // rax
  int v28; // r13d
  unsigned int v29; // r9d
  __int64 v30; // rax
  _WORD *v31; // rdx
  __int64 v32; // r9
  int v33; // eax
  __int16 v34; // [rsp+28h] [rbp-51h]
  __int16 v35[2]; // [rsp+58h] [rbp-21h] BYREF
  int v36; // [rsp+5Ch] [rbp-1Dh] BYREF
  unsigned int v37; // [rsp+60h] [rbp-19h]
  __int64 v38; // [rsp+68h] [rbp-11h] BYREF
  __int64 v39; // [rsp+70h] [rbp-9h] BYREF
  __int64 v40; // [rsp+78h] [rbp-1h]
  __int64 v41[9]; // [rsp+80h] [rbp+7h] BYREF
  char v43; // [rsp+E0h] [rbp+67h]
  char v44; // [rsp+E0h] [rbp+67h]
  bool v47; // [rsp+F8h] [rbp+7Fh]
  unsigned int v48; // [rsp+F8h] [rbp+7Fh]

  v6 = a1;
  v38 = 0LL;
  v39 = 0LL;
  v36 = 0;
  v7 = a4;
  v37 = 0;
  v35[0] = -1;
  v8 = 0LL;
  v41[0] = 0LL;
  if ( a5 )
    v37 = *a5;
  if ( a2 )
  {
    v6 = 4104;
    v47 = (a1 & 0x80) != 0;
    if ( !RtlIsValidLocaleName(a2, 2) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( a5 )
        *a5 = 2;
      goto LABEL_49;
    }
  }
  else
  {
    v47 = 0;
    if ( (a1 & 0xFFFF6771) != 0 )
      return 3221225485LL;
  }
  v9 = v6 | 0x80;
  if ( (v6 & 0x9880) != 0 )
    v9 = v6;
  if ( (v9 & 8) != 0 )
  {
    if ( (v9 & 4) != 0 )
      return 3221225485LL;
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
      return 3221225485LL;
  }
  else
  {
    v9 |= 0x8000u;
  }
  if ( !a5 || *a5 && !v7 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(v41);
  if ( (int)result >= 0 )
  {
    v13 = (_QWORD *)v41[0];
    if ( a2 && (int)RtlpMuiRegGetInstalledLanguageIndexByName(v41[0], a2, 1, v35) < 0 )
    {
      SystemPreferredUILanguages = -1073741772;
      *a5 = 2;
      goto LABEL_49;
    }
    InitializeTEBUserLangList(v9 & 1, (__int64)v13);
    v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
    v41[0] = v14;
    if ( UserPrefLanguages[1] )
      v16 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
    else
      v16 = v13[6];
    v40 = v16;
    if ( (v9 & 0x800) != 0 )
    {
      v26 = v37;
      if ( !v14 )
        goto LABEL_59;
      *a5 = v37;
      SystemPreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(
                                     v14,
                                     (_DWORD)v13,
                                     (_DWORD)v7,
                                     (_DWORD)a5,
                                     v9,
                                     v10,
                                     (__int64)&v36);
      if ( SystemPreferredUILanguages >= 0 && *(_WORD *)(v41[0] + 4) )
        goto LABEL_30;
      if ( SystemPreferredUILanguages != -1073741789 )
      {
LABEL_59:
        *a5 = v26;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages((v9 & 8) != 0 ? 2056 : 2052, a2, &v36, v7, a5);
      }
      goto LABEL_29;
    }
    v17 = LdrpCreateLangFallbackList(&v38, v13, 25LL, 0LL);
    SystemPreferredUILanguages = v17;
    if ( (v9 & 0x8080) != 0 )
    {
      if ( v17 >= 0 )
      {
        if ( !v38 )
          goto LABEL_30;
        SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                       v9 | 0x30u,
                                       (__int64)v13,
                                       &v38,
                                       0LL,
                                       0LL,
                                       v41[0],
                                       v13[7],
                                       v40,
                                       1);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v19 = (int)v7;
          v20 = v38;
          *a5 = v37;
          v21 = LdrpConvertLangFallbackListToMultiSz(v20, (_DWORD)v13, v19, (_DWORD)a5, v9, v10, (__int64)&v36);
          SystemPreferredUILanguages = v21;
          if ( v21 >= 0 && *(_WORD *)(v20 + 4) || v21 == -1073741789 )
            goto LABEL_24;
          *a5 = v37;
          v25 = RtlGetSystemPreferredUILanguages(((v9 & 8) != 0 ? 8 : 4) | 0x8000u, a2, &v36, a4, a5);
          goto LABEL_64;
        }
      }
LABEL_83:
      v20 = v38;
      goto LABEL_24;
    }
    if ( v17 < 0 )
      goto LABEL_83;
    if ( !v38 )
      goto LABEL_30;
    v34 = 0;
    SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v9 | 0x20u, (__int64)v13, &v38, 0LL);
    if ( SystemPreferredUILanguages < 0 )
      goto LABEL_83;
    v22 = LdrpCreateLangFallbackList(&v39, v13, 25LL, 0LL);
    v8 = v39;
    SystemPreferredUILanguages = v22;
    if ( v22 < 0 || !v39 )
      goto LABEL_83;
    v23 = v10;
    v20 = v38;
    if ( a2 )
    {
      if ( v35[0] != -1 )
      {
        v24 = (_WORD *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * v35[0]);
        if ( v24 )
        {
          if ( (*(_BYTE *)v24 & 2) != 0 || (v43 = v10, v47) && (v43 = v10, (*(_BYTE *)v24 & 4) != 0) )
            v43 = 0;
          if ( *(_BYTE *)(v39 + 8) )
            v27 = v13[5];
          else
            v27 = v40;
          LdrpMergeParentBaseLanguagesToList(&v39, v24, (__int64)v13, v27, 0);
          v23 = v43;
          v8 = v39;
        }
      }
    }
    else
    {
      v29 = 0;
      v48 = 0;
      v44 = v10;
      if ( *(_WORD *)(v38 + 4) )
      {
        v23 = v10;
        v44 = v10;
        do
        {
          v30 = *(_QWORD *)(v20 + 24);
          if ( *(_WORD *)(v30 + 6LL * v29) == 2 )
          {
            v31 = (_WORD *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * *(__int16 *)(v30 + 6LL * v29 + 4));
            if ( (*(_BYTE *)v31 & 2) != 0 )
              v23 = 0;
            v44 = v23;
            if ( (*(_BYTE *)v31 & 6) != 0 )
            {
              v32 = *(_BYTE *)(v8 + 8) ? v13[5] : v40;
              v33 = LdrpMergeParentBaseLanguagesToList(&v39, v31, (__int64)v13, v32, v34);
              v8 = v39;
              v23 = v44;
              SystemPreferredUILanguages = v33;
              v29 = v48;
              if ( v33 >= 0 )
                break;
            }
          }
          v48 = ++v29;
        }
        while ( v29 < *(unsigned __int16 *)(v20 + 4) );
      }
      if ( !*(_WORD *)(*(_QWORD *)(v20 + 24) + 6LL * v29) || SystemPreferredUILanguages < 0 )
      {
        v28 = (int)a4;
        *a5 = v37;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages((v9 & 8) != 0 ? 4104 : 4100, 0LL, &v36, a4, a5);
        if ( SystemPreferredUILanguages >= 0 )
          goto LABEL_24;
        v23 = v44;
        goto LABEL_63;
      }
    }
    v28 = (int)a4;
LABEL_63:
    v25 = LdrpConvertLangFallbackListToMultiSz(v8, (_DWORD)v13, v28, (_DWORD)a5, v9, v23, (__int64)&v36);
LABEL_64:
    SystemPreferredUILanguages = v25;
LABEL_24:
    if ( v20 )
      RtlpMuiRegFreeLanguageList(v20);
    if ( v8 )
      RtlpMuiRegFreeLanguageList(v8);
    v7 = a4;
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
      return (unsigned int)SystemPreferredUILanguages;
    }
LABEL_30:
    *a3 = v36;
    return (unsigned int)SystemPreferredUILanguages;
  }
  return result;
}
