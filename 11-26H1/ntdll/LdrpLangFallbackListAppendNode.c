/*
 * XREFs of LdrpLangFallbackListAppendNode @ 0x1800505C0
 * Callers:
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18004D21C (RtlpFilterandReplaceConsoleLanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18004EB30 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x180050260 (RtlpAddNeutralsToMergedList.c)
 * Callees:
 *     RtlpIsCustomLocale @ 0x18004C740 (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x18004C874 (RtlpMatchUserLanguage.c)
 *     RtlpNlsGetNameIndex @ 0x180050060 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180050148 (RtlpLoadNlsData.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMatchUILanguage @ 0x180112884 (RtlpMatchUILanguage.c)
 *     __report_rangecheckfailure @ 0x1801268D0 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpLangFallbackListAppendNode(__int64 *a1, __int64 a2, char a3, _WORD *a4, wchar_t *String)
{
  _WORD *v5; // rdi
  __int64 v6; // r10
  __int64 v8; // rbx
  unsigned int v9; // r15d
  size_t v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 i; // rdx
  wchar_t *v13; // rcx
  __int64 v14; // r8
  ULONG *v15; // r9
  unsigned __int64 v16; // rdi
  _QWORD *v17; // r14
  __int64 v18; // r13
  __int64 v19; // r14
  int v20; // edi
  __int64 v21; // rbp
  __int64 v22; // rax
  int v23; // r13d
  __int64 v24; // rdi
  int NameIndex; // eax
  int v26; // r13d
  char v27; // al
  __int64 v28; // r14
  int v29; // edi
  __int64 j; // rbp
  wchar_t *v31; // rcx
  __int16 k; // r8
  __int64 result; // rax
  __int16 v34; // dx
  unsigned __int16 *v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // zf
  int v40; // eax
  __int64 v44; // [rsp+60h] [rbp-108h]
  wchar_t String2[88]; // [rsp+70h] [rbp-F8h] BYREF

  v5 = a4;
  v6 = a2;
  if ( !a1 || !*a1 || !String || !a4 )
    return 3221225485LL;
  v8 = -1LL;
  v9 = 0;
  *a4 = -1;
  v44 = *a1;
  if ( a2 && *a1 )
  {
    v10 = 2 * wcslen(String);
    if ( v10 >= 0xFFFE )
      LOWORD(v10) = -4;
    if ( !(_WORD)v10 || (unsigned int)(unsigned __int16)v10 + 2 > 0x55 )
    {
LABEL_47:
      v6 = a2;
      goto LABEL_48;
    }
    v11 = (unsigned __int16)v10;
    memmove(String2, String, (unsigned __int16)v10);
    v16 = v11 >> 1;
    if ( v16 >= 85 )
      _report_rangecheckfailure();
    v17 = g_RegInfo;
    String2[v16] = 0;
    if ( v17 )
    {
      v18 = v17[3];
      if ( v18 )
      {
        if ( *(_QWORD *)(v18 + 16) && String2[0] )
        {
          v19 = v17[4];
          if ( v19 )
          {
            v20 = 0;
            v21 = 0LL;
            while ( v20 < *(unsigned __int16 *)(v19 + 6) )
            {
              v13 = (wchar_t *)(*(_QWORD *)(v19 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v19 + 16) + v21));
              if ( v13 == String2 || !wcsicmp(v13, String2) )
              {
                if ( v20 < 0 )
                  break;
                goto LABEL_23;
              }
              ++v20;
              v21 += 2LL;
            }
          }
          LOWORD(v20) = -1;
LABEL_23:
          if ( (v20 & 0x8000u) == 0 )
          {
            for ( i = 0LL; ; LOWORD(i) = i + 1 )
            {
              if ( (unsigned __int16)i >= *(_WORD *)(v18 + 6) )
                goto LABEL_29;
              v14 = 28LL * (unsigned __int16)i;
              v22 = *(_QWORD *)(v18 + 16);
              if ( *(_WORD *)(v14 + v22 + 6) == (_WORD)v20 )
                break;
            }
            v23 = *(unsigned __int16 *)(v14 + v22 + 4);
            goto LABEL_33;
          }
        }
      }
    }
LABEL_29:
    v24 = pTblPtrs;
    if ( !pTblPtrs )
    {
      if ( !RtlpLoadNlsData((__int64)v13, i, v14, v15) )
        goto LABEL_67;
      v24 = pTblPtrs;
    }
    NameIndex = RtlpNlsGetNameIndex((__int64)String2);
    if ( NameIndex >= 0 )
    {
      v26 = *(_DWORD *)(*(_QWORD *)(v24 + 24) + 8LL * NameIndex + 4);
      v27 = 1;
      v23 = v26 & 0x7FFFFFFF;
LABEL_32:
      if ( v27 )
      {
LABEL_33:
        if ( ((v23 - 4096) & 0xFFFFFBFF) == 0 )
          v23 = 0;
        if ( !*String )
          goto LABEL_72;
        v28 = *(_QWORD *)(a2 + 32);
        if ( !v28 )
          goto LABEL_62;
        v29 = 0;
        for ( j = 0LL; ; j += 2LL )
        {
          if ( v29 >= *(unsigned __int16 *)(v28 + 6) )
            goto LABEL_62;
          v31 = (wchar_t *)(*(_QWORD *)(v28 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v28 + 16) + j));
          if ( v31 == String || !wcsicmp(v31, String) )
            break;
          ++v29;
        }
        if ( v29 < 0 )
LABEL_62:
          LOWORD(v29) = -1;
        if ( (v29 & 0x8000u) != 0 )
LABEL_72:
          LOWORD(v29) = -1;
        for ( k = 0; ; ++k )
        {
          if ( k >= (int)*(unsigned __int16 *)(v44 + 4) )
            goto LABEL_46;
          v35 = (unsigned __int16 *)(*(_QWORD *)(v44 + 24) + 6LL * k);
          v36 = *v35;
          if ( v36 != 2 )
            break;
          v37 = 28LL * (__int16)v35[2];
          v38 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
          if ( (__int16)v29 > 0 && (_WORD)v29 == *(_WORD *)(v37 + v38 + 6) )
          {
LABEL_64:
            v5 = a4;
            result = 0LL;
            *a4 = k;
            if ( (__int16)*a4 < 0 )
              goto LABEL_47;
            return result;
          }
          if ( v23 )
          {
            v39 = v23 == *(unsigned __int16 *)(v37 + v38 + 4);
LABEL_60:
            if ( v39 )
              goto LABEL_64;
            continue;
          }
LABEL_61:
          ;
        }
        v40 = v36 - 1;
        if ( v40 )
        {
          if ( v40 != 2 || (_WORD)v29 == 0xFFFF )
            goto LABEL_61;
          v39 = v35[2] == (unsigned __int16)v29;
        }
        else
        {
          if ( !v23 )
            goto LABEL_61;
          v39 = (__int16)v35[2] == v23;
        }
        goto LABEL_60;
      }
LABEL_46:
      v5 = a4;
      goto LABEL_47;
    }
    if ( RtlpIsCustomLocale(String2) )
    {
      if ( (unsigned __int8)RtlpMatchUILanguage(String2) )
      {
        v23 = 5120;
        v27 = 1;
      }
      else
      {
        v39 = !RtlpMatchUserLanguage(String2);
        v27 = 1;
        if ( v39 )
          v23 = 4096;
        else
          v23 = 3072;
      }
      goto LABEL_32;
    }
LABEL_67:
    v23 = 0;
    v27 = 0;
    goto LABEL_32;
  }
LABEL_48:
  if ( !a3 )
    v9 = 2;
  do
    v39 = String[++v8] == 0;
  while ( !v39 );
  result = RtlpMuiRegAddMultiSzToLangFallbackList(v6, String, (unsigned int)(v8 + 1), v9, 2, 1, a1);
  if ( (int)result >= 0 )
  {
    v34 = *(_WORD *)(*a1 + 4);
    if ( v34 )
      *v5 = v34 - 1;
  }
  return result;
}
