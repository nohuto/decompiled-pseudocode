/*
 * XREFs of RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180006B50 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180007130 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlpIsCustomLocale @ 0x180001008 (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x18000113C (RtlpMatchUserLanguage.c)
 *     RtlpMuiRegGetOrAddString @ 0x180002080 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlpNlsGetNameIndex @ 0x180004930 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180004A18 (RtlpLoadNlsData.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800061D0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlUnicodeStringToInteger @ 0x1800068F0 (RtlUnicodeStringToInteger.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18000AF40 (RtlpMuiRegCreateLanguageList.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800DBADC (RtlpMuiRegGrowLanguageList.c)
 *     RtlpMatchUILanguage @ 0x180112DD4 (RtlpMatchUILanguage.c)
 *     __report_rangecheckfailure @ 0x180126B60 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegAddMultiSzToLangFallbackList(
        __int64 a1,
        _WORD *a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 *a7)
{
  __int64 *v7; // r15
  int v8; // r12d
  unsigned int v9; // r14d
  char v10; // bl
  _WORD *v11; // rdi
  char v12; // si
  void *v13; // r13
  __int64 v14; // rax
  unsigned int v16; // r12d
  size_t v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rsi
  int v23; // ebx
  __int64 v24; // r15
  wchar_t *v25; // rcx
  unsigned __int16 i; // dx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rbx
  int NameIndex; // eax
  unsigned __int8 v32; // si
  unsigned int v33; // ebx
  __int64 v34; // r11
  __int64 v35; // rdx
  __int64 v36; // r9
  int InstalledLanguageIndexByLangId; // eax
  int j; // edx
  __int64 v39; // rdx
  int v40; // r8d
  int v41; // ecx
  __int64 v42; // r9
  __int16 v43; // r10
  __int64 *v44; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  _WORD *v48; // r8
  __int64 LanguageList; // rax
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rax
  const wchar_t *v53; // rcx
  size_t v54; // rax
  char v55; // al
  __int16 v56[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v57; // [rsp+24h] [rbp-DCh]
  __int16 v58[2]; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v59; // [rsp+2Ch] [rbp-D4h] BYREF
  __int64 v60; // [rsp+30h] [rbp-D0h]
  int v61; // [rsp+38h] [rbp-C8h]
  int v62; // [rsp+3Ch] [rbp-C4h]
  __int64 *v63; // [rsp+40h] [rbp-C0h]
  void *Src[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 Heap_0; // [rsp+58h] [rbp-A8h]
  __int128 v66; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t String2[88]; // [rsp+70h] [rbp-90h] BYREF

  v7 = a7;
  v8 = 2 * a3;
  v9 = 0;
  v60 = a1;
  v63 = a7;
  v10 = a4;
  v57 = a4;
  v61 = 0;
  v62 = 2 * a3;
  v11 = a2;
  v56[0] = 0;
  v58[0] = -1;
  *(_OWORD *)Src = 0LL;
  if ( 2 * a3 <= 0 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a7 )
    return 3221225485LL;
  v12 = a5;
  if ( (a5 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 170LL);
  v13 = (void *)Heap_0;
  if ( Heap_0 )
  {
    while ( 1 )
    {
      if ( !v11 || !*v11 || v8 <= 0 )
      {
LABEL_55:
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v13);
        return v9;
      }
      v59 = 0;
      v14 = -1LL;
      while ( v11[++v14] != 0 )
        ;
      Src[0] = 0LL;
      v16 = 2 * v14;
      Src[1] = v11;
      v17 = 2 * wcslen(v11);
      if ( v17 >= 0xFFFE )
        LOWORD(v17) = -4;
      LOWORD(Src[0]) = v17;
      WORD1(Src[0]) = v17 + 2;
      if ( (v10 & 4) != 0 )
        break;
      if ( (_WORD)v17 && (unsigned int)(unsigned __int16)v17 + 2 <= 0x55 )
      {
        v18 = (unsigned __int16)v17;
        memmove(String2, Src[1], (unsigned __int16)v17);
        v19 = v18 >> 1;
        if ( v19 >= 85 )
          _report_rangecheckfailure();
        v20 = g_RegInfo;
        String2[v19] = 0;
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 24);
          if ( v21 )
          {
            if ( *(_QWORD *)(v21 + 16) && String2[0] )
            {
              v22 = *(_QWORD *)(v20 + 32);
              if ( v22 )
              {
                v23 = 0;
                v24 = 0LL;
                while ( v23 < *(unsigned __int16 *)(v22 + 6) )
                {
                  v25 = (wchar_t *)(*(_QWORD *)(v22 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v22 + 16) + v24));
                  if ( v25 == String2 || !wcsicmp(v25, String2) )
                  {
                    if ( v23 < 0 )
                      break;
                    goto LABEL_30;
                  }
                  ++v23;
                  v24 += 2LL;
                }
              }
              LOWORD(v23) = -1;
LABEL_30:
              if ( (v23 & 0x8000u) == 0 )
              {
                for ( i = 0; i < *(_WORD *)(v21 + 6); ++i )
                {
                  v27 = 28LL * i;
                  v28 = *(_QWORD *)(v21 + 16);
                  if ( *(_WORD *)(v27 + v28 + 6) == (_WORD)v23 )
                  {
                    v29 = *(unsigned __int16 *)(v27 + v28 + 4);
                    goto LABEL_39;
                  }
                }
              }
            }
          }
        }
        v30 = pTblPtrs;
        if ( !pTblPtrs )
        {
          if ( RtlpLoadNlsData() )
          {
            v30 = pTblPtrs;
            goto LABEL_37;
          }
          goto LABEL_63;
        }
LABEL_37:
        NameIndex = RtlpNlsGetNameIndex((__int64)String2);
        if ( NameIndex >= 0 )
        {
          v29 = *(_DWORD *)(*(_QWORD *)(v30 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
          goto LABEL_39;
        }
        if ( RtlpIsCustomLocale(String2) )
        {
          if ( (unsigned __int8)RtlpMatchUILanguage(String2) )
          {
            v29 = 5120;
          }
          else if ( RtlpMatchUserLanguage(String2) )
          {
            v29 = 3072;
          }
          else
          {
            v29 = 4096;
          }
LABEL_39:
          if ( ((v29 - 4096) & 0xFFFFFBFF) != 0 )
          {
            v32 = 1;
            v56[0] = v29;
            LOWORD(v33) = v29;
            goto LABEL_41;
          }
          v12 = a5;
          if ( (a5 & 2) != 0 && (int)RtlpMuiRegGetOrAddString(v60, (__int64)Src[1], 1, v56) >= 0 )
          {
            LOWORD(v33) = v56[0];
            v32 = 3;
LABEL_41:
            v7 = v63;
            v13 = (void *)Heap_0;
LABEL_42:
            v34 = v60;
            v59 = 0;
            v35 = (unsigned __int16)v33;
            LOBYTE(v27) = 1;
            v66 = 0LL;
            if ( v60 )
            {
              v36 = *(_QWORD *)(v60 + 24);
              if ( v32 == 3 )
              {
                for ( j = 0; j < *(unsigned __int16 *)(v36 + 6); ++j )
                {
                  v48 = (_WORD *)(*(_QWORD *)(v36 + 16) + 28LL * j);
                  if ( (*v48 & 0x1020) == 0x20 && v48[3] == (_WORD)v33 )
                  {
                    v58[0] = j;
                    goto LABEL_46;
                  }
                }
                v50 = *(_QWORD *)(v60 + 32);
                if ( v50 )
                {
                  if ( (v33 & 0x8000u) == 0 && (__int16)v33 < (int)*(unsigned __int16 *)(v50 + 6) )
                  {
                    v51 = *(__int16 *)(*(_QWORD *)(v50 + 16) + 2LL * (__int16)v33);
                    v52 = *(_QWORD *)(v50 + 24);
                    v53 = (const wchar_t *)(v52 + 2 * v51);
                    if ( v53 )
                    {
                      *((_QWORD *)&v66 + 1) = v52 + 2 * v51;
                      v54 = 2 * wcslen(v53);
                      if ( v54 >= 0xFFFE )
                        LOWORD(v54) = -4;
                      LOWORD(v66) = v54;
                      WORD1(v66) = v54 + 2;
                      v55 = RtlCultureNameToLCID((unsigned __int16 *)&v66, (int *)&v59);
                      v34 = v60;
                      if ( v55 )
                      {
                        v35 = (unsigned __int16)v59;
                        LOBYTE(v27) = 0;
                        goto LABEL_44;
                      }
                    }
                  }
                }
              }
              else
              {
LABEL_44:
                InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v34, v35, v27, v58);
                v34 = v60;
                if ( InstalledLanguageIndexByLangId >= 0 )
                {
                  LOWORD(j) = v58[0];
LABEL_46:
                  if ( (v57 & 0x10) == 0 )
                  {
                    v32 = 2;
                    v56[0] = j;
                    LOWORD(v33) = j;
                  }
LABEL_48:
                  v39 = *v7;
                  if ( *v7
                    || (LanguageList = RtlpMuiRegCreateLanguageList(1LL, a5 & 1, v34),
                        *v7 = LanguageList,
                        (v39 = LanguageList) != 0) )
                  {
                    v40 = *(unsigned __int16 *)(v39 + 4);
                    v41 = 0;
                    v42 = 0LL;
                    v43 = v32;
                    while ( v41 < v40 )
                    {
                      v46 = *(_QWORD *)(v39 + 24);
                      v43 = v32;
                      if ( *(_WORD *)(v46 + v42) == v32 && *(_WORD *)(v46 + v42 + 4) == (_WORD)v33 )
                        goto LABEL_54;
                      ++v41;
                      v42 += 6LL;
                    }
                    if ( (unsigned __int16)v40 >= *(_WORD *)(v39 + 6) )
                    {
                      v47 = RtlpMuiRegGrowLanguageList(v39);
                      v44 = v63;
                      v39 = v47;
                      v43 = v32;
                      *v63 = v47;
                      if ( !v47 )
                        goto LABEL_69;
                    }
                    else
                    {
                      v44 = v63;
                    }
                    *(_WORD *)(*(_QWORD *)(v39 + 24) + 6LL * *(unsigned __int16 *)(v39 + 4)) = v43;
                    *(_WORD *)(*(_QWORD *)(*v44 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*v44 + 4))++ + 4) = v33;
LABEL_54:
                    if ( ++v61 < a6 )
                      goto LABEL_63;
                  }
                  else
                  {
LABEL_69:
                    v9 = -1073741801;
                  }
                  goto LABEL_55;
                }
              }
            }
            if ( (v57 & 2) != 0 )
              goto LABEL_48;
            goto LABEL_63;
          }
        }
        else
        {
LABEL_63:
          v12 = a5;
        }
        goto LABEL_64;
      }
LABEL_28:
      v13 = (void *)Heap_0;
      v7 = v63;
      v11 = (_WORD *)((char *)v11 + v16 + 2);
      v8 = -2 - v16 + v62;
      v62 = v8;
    }
    if ( (int)RtlUnicodeStringToInteger(Src, 16LL, &v59) < 0 )
      goto LABEL_28;
    v33 = v59;
    if ( v59 == 4096 || v59 == 5120 || v59 == 127 || v59 == 3072 || v59 == 1024 || v59 == 2048 )
    {
      if ( (v12 & 4) != 0 )
        goto LABEL_64;
      if ( (v12 & 8) != 0 )
      {
        v9 = -1073741637;
        goto LABEL_55;
      }
    }
    Src[1] = v13;
    LODWORD(Src[0]) = 11141120;
    if ( (unsigned __int8)RtlLCIDToCultureName(v59, Src) && ((v12 & 2) != 0 || ((v33 - 4096) & 0xFFFFFBFF) != 0) )
    {
      v32 = 1;
      v56[0] = v33;
      goto LABEL_42;
    }
LABEL_64:
    v10 = v57;
    goto LABEL_28;
  }
  return 3221225495LL;
}
