/*
 * XREFs of RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180052280 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180052860 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpIsCustomLocale @ 0x18004C740 (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x18004C874 (RtlpMatchUserLanguage.c)
 *     RtlpMuiRegGetOrAddString @ 0x18004D7B0 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlpNlsGetNameIndex @ 0x180050060 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180050148 (RtlpLoadNlsData.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051900 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlUnicodeStringToInteger @ 0x180052020 (RtlUnicodeStringToInteger.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180056670 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800D89BC (RtlpMuiRegGrowLanguageList.c)
 *     RtlpMatchUILanguage @ 0x180112884 (RtlpMatchUILanguage.c)
 *     __report_rangecheckfailure @ 0x1801268D0 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
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
  __int64 i; // rdx
  wchar_t *v20; // rcx
  __int64 v21; // r8
  ULONG *v22; // r9
  unsigned __int64 v23; // rbx
  _QWORD *v24; // rsi
  __int64 v25; // r13
  __int64 v26; // rsi
  int v27; // ebx
  __int64 v28; // r15
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rbx
  int NameIndex; // eax
  unsigned __int8 v33; // si
  ULONG v34; // ebx
  __int64 v35; // r11
  __int64 v36; // rdx
  __int64 v37; // r9
  int InstalledLanguageIndexByLangId; // eax
  int j; // edx
  __int64 v40; // rdx
  int v41; // r8d
  int v42; // ecx
  __int64 v43; // r9
  __int16 v44; // r10
  __int64 *v45; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  _WORD *v49; // r8
  __int64 LanguageList; // rax
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rax
  const wchar_t *v54; // rcx
  size_t v55; // rax
  BOOLEAN v56; // al
  __int16 v57[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v58; // [rsp+24h] [rbp-DCh]
  __int16 v59[2]; // [rsp+28h] [rbp-D8h] BYREF
  ULONG Value; // [rsp+2Ch] [rbp-D4h] BYREF
  __int64 v61; // [rsp+30h] [rbp-D0h]
  int v62; // [rsp+38h] [rbp-C8h]
  int v63; // [rsp+3Ch] [rbp-C4h]
  __int64 *v64; // [rsp+40h] [rbp-C0h]
  void *Src[2]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Heap_0; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING String; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t String2[88]; // [rsp+70h] [rbp-90h] BYREF

  v7 = a7;
  v8 = 2 * a3;
  v9 = 0;
  v61 = a1;
  v64 = a7;
  v10 = a4;
  v58 = a4;
  v62 = 0;
  v63 = 2 * a3;
  v11 = a2;
  v57[0] = 0;
  v59[0] = -1;
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
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  v13 = Heap_0;
  if ( Heap_0 )
  {
    while ( 1 )
    {
      if ( !v11 || !*v11 || v8 <= 0 )
      {
LABEL_55:
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v13);
        return v9;
      }
      Value = 0;
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
        v23 = v18 >> 1;
        if ( v23 >= 85 )
          _report_rangecheckfailure();
        v24 = g_RegInfo;
        String2[v23] = 0;
        if ( v24 )
        {
          v25 = v24[3];
          if ( v25 )
          {
            if ( *(_QWORD *)(v25 + 16) && String2[0] )
            {
              v26 = v24[4];
              if ( v26 )
              {
                v27 = 0;
                v28 = 0LL;
                while ( v27 < *(unsigned __int16 *)(v26 + 6) )
                {
                  v20 = (wchar_t *)(*(_QWORD *)(v26 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v26 + 16) + v28));
                  if ( v20 == String2 || !wcsicmp(v20, String2) )
                  {
                    if ( v27 < 0 )
                      break;
                    goto LABEL_30;
                  }
                  ++v27;
                  v28 += 2LL;
                }
              }
              LOWORD(v27) = -1;
LABEL_30:
              if ( (v27 & 0x8000u) == 0 )
              {
                for ( i = 0LL; (unsigned __int16)i < *(_WORD *)(v25 + 6); LOWORD(i) = i + 1 )
                {
                  v21 = 28LL * (unsigned __int16)i;
                  v29 = *(_QWORD *)(v25 + 16);
                  if ( *(_WORD *)(v21 + v29 + 6) == (_WORD)v27 )
                  {
                    v30 = *(unsigned __int16 *)(v21 + v29 + 4);
                    goto LABEL_39;
                  }
                }
              }
            }
          }
        }
        v31 = pTblPtrs;
        if ( !pTblPtrs )
        {
          if ( RtlpLoadNlsData((__int64)v20, i, v21, v22) )
          {
            v31 = pTblPtrs;
            goto LABEL_37;
          }
          goto LABEL_63;
        }
LABEL_37:
        NameIndex = RtlpNlsGetNameIndex((__int64)String2);
        if ( NameIndex >= 0 )
        {
          v30 = *(_DWORD *)(*(_QWORD *)(v31 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
          goto LABEL_39;
        }
        if ( RtlpIsCustomLocale(String2) )
        {
          if ( (unsigned __int8)RtlpMatchUILanguage(String2) )
          {
            v30 = 5120;
          }
          else if ( RtlpMatchUserLanguage(String2) )
          {
            v30 = 3072;
          }
          else
          {
            v30 = 4096;
          }
LABEL_39:
          if ( ((v30 - 4096) & 0xFFFFFBFF) != 0 )
          {
            v33 = 1;
            v57[0] = v30;
            LOWORD(v34) = v30;
            goto LABEL_41;
          }
          v12 = a5;
          if ( (a5 & 2) != 0 && (int)RtlpMuiRegGetOrAddString(v61, (const wchar_t *)Src[1], 1, v57) >= 0 )
          {
            LOWORD(v34) = v57[0];
            v33 = 3;
LABEL_41:
            v7 = v64;
            v13 = Heap_0;
LABEL_42:
            v35 = v61;
            Value = 0;
            v36 = (unsigned __int16)v34;
            LOBYTE(v21) = 1;
            String = 0LL;
            if ( v61 )
            {
              v37 = *(_QWORD *)(v61 + 24);
              if ( v33 == 3 )
              {
                for ( j = 0; j < *(unsigned __int16 *)(v37 + 6); ++j )
                {
                  v49 = (_WORD *)(*(_QWORD *)(v37 + 16) + 28LL * j);
                  if ( (*v49 & 0x1020) == 0x20 && v49[3] == (_WORD)v34 )
                  {
                    v59[0] = j;
                    goto LABEL_46;
                  }
                }
                v51 = *(_QWORD *)(v61 + 32);
                if ( v51 )
                {
                  if ( (v34 & 0x8000u) == 0 && (__int16)v34 < (int)*(unsigned __int16 *)(v51 + 6) )
                  {
                    v52 = *(__int16 *)(*(_QWORD *)(v51 + 16) + 2LL * (__int16)v34);
                    v53 = *(_QWORD *)(v51 + 24);
                    v54 = (const wchar_t *)(v53 + 2 * v52);
                    if ( v54 )
                    {
                      String.Buffer = (wchar_t *)(v53 + 2 * v52);
                      v55 = 2 * wcslen(v54);
                      if ( v55 >= 0xFFFE )
                        LOWORD(v55) = -4;
                      String.Length = v55;
                      String.MaximumLength = v55 + 2;
                      v56 = RtlCultureNameToLCID(&String, &Value);
                      v35 = v61;
                      if ( v56 )
                      {
                        v36 = (unsigned __int16)Value;
                        LOBYTE(v21) = 0;
                        goto LABEL_44;
                      }
                    }
                  }
                }
              }
              else
              {
LABEL_44:
                InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v35, v36, v21, v59);
                v35 = v61;
                if ( InstalledLanguageIndexByLangId >= 0 )
                {
                  LOWORD(j) = v59[0];
LABEL_46:
                  if ( (v58 & 0x10) == 0 )
                  {
                    v33 = 2;
                    v57[0] = j;
                    LOWORD(v34) = j;
                  }
LABEL_48:
                  v40 = *v7;
                  if ( *v7
                    || (LanguageList = RtlpMuiRegCreateLanguageList(1LL, a5 & 1, v35),
                        *v7 = LanguageList,
                        (v40 = LanguageList) != 0) )
                  {
                    v41 = *(unsigned __int16 *)(v40 + 4);
                    v42 = 0;
                    v43 = 0LL;
                    v44 = v33;
                    while ( v42 < v41 )
                    {
                      v47 = *(_QWORD *)(v40 + 24);
                      v44 = v33;
                      if ( *(_WORD *)(v47 + v43) == v33 && *(_WORD *)(v47 + v43 + 4) == (_WORD)v34 )
                        goto LABEL_54;
                      ++v42;
                      v43 += 6LL;
                    }
                    if ( (unsigned __int16)v41 >= *(_WORD *)(v40 + 6) )
                    {
                      v48 = RtlpMuiRegGrowLanguageList(v40);
                      v45 = v64;
                      v40 = v48;
                      v44 = v33;
                      *v64 = v48;
                      if ( !v48 )
                        goto LABEL_69;
                    }
                    else
                    {
                      v45 = v64;
                    }
                    *(_WORD *)(*(_QWORD *)(v40 + 24) + 6LL * *(unsigned __int16 *)(v40 + 4)) = v44;
                    *(_WORD *)(*(_QWORD *)(*v45 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*v45 + 4))++ + 4) = v34;
LABEL_54:
                    if ( ++v62 < a6 )
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
            if ( (v58 & 2) != 0 )
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
      v13 = Heap_0;
      v7 = v64;
      v11 = (_WORD *)((char *)v11 + v16 + 2);
      v8 = -2 - v16 + v63;
      v63 = v8;
    }
    if ( RtlUnicodeStringToInteger((PUNICODE_STRING)Src, 0x10u, &Value) < 0 )
      goto LABEL_28;
    v34 = Value;
    if ( Value == 4096 || Value == 5120 || Value == 127 || Value == 3072 || Value == 1024 || Value == 2048 )
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
    if ( RtlLCIDToCultureName(Value, (PUNICODE_STRING)Src) && ((v12 & 2) != 0 || ((v34 - 4096) & 0xFFFFFBFF) != 0) )
    {
      v33 = 1;
      v57[0] = v34;
      goto LABEL_42;
    }
LABEL_64:
    v10 = v58;
    goto LABEL_28;
  }
  return 3221225495LL;
}
