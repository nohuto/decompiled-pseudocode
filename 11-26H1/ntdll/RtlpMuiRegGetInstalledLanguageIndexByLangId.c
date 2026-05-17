/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800061D0
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180005A20 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlGetUILanguageInfo @ 0x18000A1D0 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpRefreshCachedUILanguage @ 0x18014DB60 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E7F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByLangId(__int64 a1, unsigned __int16 a2, char a3, _WORD *a4)
{
  char v4; // r13
  unsigned int v5; // ebx
  unsigned int v9; // edi
  __int64 v10; // r9
  int i; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  wchar_t *Heap_0; // rax
  wchar_t *v15; // rbp
  __int16 v17; // r10
  const wchar_t *v18; // r14
  char v19; // r12
  __int64 v20; // r13
  __int64 v21; // rsi
  int v22; // ebx
  __int64 v23; // rdi
  const wchar_t *v24; // rcx
  int j; // edx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int16 v28; // r9
  wchar_t *String2[2]; // [rsp+20h] [rbp-38h] BYREF
  char v30; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  v30 = 0;
  v9 = -1073741772;
  *(_OWORD *)String2 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 == 4096 )
    return 3221225524LL;
  v10 = *(_QWORD *)(a1 + 24);
  for ( i = 0; ; ++i )
  {
    if ( i >= *(unsigned __int16 *)(v10 + 6) )
    {
      Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 170LL);
      v15 = Heap_0;
      if ( Heap_0 )
      {
        String2[1] = Heap_0;
        LODWORD(String2[0]) = 11141120;
        if ( a3 && (unsigned __int8)RtlLCIDToCultureName(v5, (__int64)String2) )
        {
          v18 = String2[1];
          v19 = 0;
          if ( String2[1] )
          {
            v20 = *(_QWORD *)(a1 + 24);
            if ( !*String2[1] )
              goto LABEL_43;
            v21 = *(_QWORD *)(a1 + 32);
            if ( v21 )
            {
              v22 = 0;
              v23 = 0LL;
              while ( v22 < *(unsigned __int16 *)(v21 + 6) )
              {
                v24 = (const wchar_t *)(*(_QWORD *)(v21 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v21 + 16) + v23));
                if ( v24 == v18 || !wcsicmp(v24, v18) )
                {
                  if ( v22 < 0 )
                    break;
                  goto LABEL_32;
                }
                ++v22;
                v23 += 2LL;
              }
            }
            LOWORD(v22) = -1;
LABEL_32:
            if ( (v22 & 0x8000u) != 0 )
              goto LABEL_43;
            for ( j = 0; j < *(unsigned __int16 *)(v20 + 6); ++j )
            {
              v26 = 28LL * j;
              v27 = *(_QWORD *)(v20 + 16);
              if ( *(_WORD *)(v26 + v27 + 6) == (_WORD)v22 )
              {
                v28 = *(_WORD *)(v26 + v27);
                if ( (v28 & 0x1020) == 0x20 )
                {
                  if ( a4 )
                  {
                    v4 = v30;
                    v9 = 0;
                    *a4 = j;
                    goto LABEL_10;
                  }
                }
                else if ( (v28 & 0x1000) != 0 )
                {
                  v19 = 1;
                }
              }
            }
            if ( v19 )
            {
              v4 = v30;
              v9 = -1073741637;
            }
            else
            {
LABEL_43:
              v4 = v30;
              v9 = -1073741772;
            }
          }
          else
          {
            v9 = -1073741811;
          }
        }
LABEL_10:
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v15);
        if ( v4 && v9 == -1073741772 )
          return 3221225659LL;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return v9;
    }
    v12 = 28LL * i;
    v13 = *(_QWORD *)(v10 + 16);
    if ( *(_WORD *)(v12 + v13 + 4) == (_WORD)v5 )
      break;
LABEL_7:
    ;
  }
  v17 = *(_WORD *)(v12 + v13);
  if ( (v17 & 0x1020) != 0x20 )
  {
    if ( (v17 & 0x1000) != 0 )
      v4 = 1;
    v30 = v4;
    goto LABEL_7;
  }
  if ( a4 )
    *a4 = i;
  return 0LL;
}
