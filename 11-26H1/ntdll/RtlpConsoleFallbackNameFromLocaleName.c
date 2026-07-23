/*
 * XREFs of RtlpConsoleFallbackNameFromLocaleName @ 0x18004CECC
 * Callers:
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18004D21C (RtlpFilterandReplaceConsoleLanguages.c)
 * Callees:
 *     RtlpGetAlternateCodePage @ 0x18004CAC4 (RtlpGetAlternateCodePage.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlpNlsGetNameIndex @ 0x180050060 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180050148 (RtlpLoadNlsData.c)
 *     RtlpNlsGetLcidIndex @ 0x180051BC0 (RtlpNlsGetLcidIndex.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 */

__int64 __fastcall RtlpConsoleFallbackNameFromLocaleName(
        wchar_t *String2,
        char a2,
        bool *a3,
        _UNICODE_STRING *a4,
        __int64 a5,
        unsigned __int16 a6)
{
  bool v6; // bl
  bool v11; // zf
  int LcidIndex; // eax
  __int64 v13; // rdi
  int v14; // r14d
  __int64 v15; // rax
  int NameIndex; // eax
  __int64 v17; // rdx
  int v18; // r14d
  int v19; // r12d
  const WCHAR *v20; // rdx
  __int16 i; // cx
  const wchar_t *v23; // rdi
  const wchar_t *v24; // rbp
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  __int64 v29; // rax
  int AlternateCodePage; // edx
  int v31; // r8d
  int v32; // [rsp+20h] [rbp-38h]
  _QWORD v33[6]; // [rsp+28h] [rbp-30h] BYREF
  int v34; // [rsp+60h] [rbp+8h]

  v6 = 0;
  v33[0] = 0LL;
  if ( !String2 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  v11 = pTblPtrs == 0;
  *a3 = 0;
  if ( !v11 || (unsigned __int8)RtlpLoadNlsData() )
  {
    LcidIndex = RtlpNlsGetLcidIndex(gSystemLocale);
    if ( LcidIndex >= 0 )
    {
      _mm_lfence();
      v13 = *(_QWORD *)(pTblPtrs + 8);
      v14 = *(unsigned __int16 *)(pTblPtrs + 48);
      v15 = v14 * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 4);
      v34 = *(unsigned __int16 *)(v15 + v13 + 110);
      v32 = *(unsigned __int16 *)(v15 + v13 + 112);
      NameIndex = RtlpNlsGetNameIndex(String2);
      if ( NameIndex >= 0 )
      {
        _mm_lfence();
        v17 = v14 * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2);
        v18 = *(unsigned __int16 *)(v17 + v13 + 110);
        v19 = *(unsigned __int16 *)(v17 + v13 + 112);
        if ( v18 == 1250
          || (v25 = (unsigned __int16)v18, (unsigned __int16)(v18 - 1252) <= 5u)
          && (v26 = 37, LOWORD(v25) = v18 - 1252, _bittest(&v26, v25)) )
        {
          v20 = String2;
LABEL_23:
          *a3 = v6;
          RtlInitUnicodeString(a4, v20);
          return 0LL;
        }
        v23 = (const wchar_t *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2LL * *(unsigned int *)(v17 + v13 + 276));
        if ( a2 && !wcsicmp(v23, String2) )
        {
          v24 = String2;
LABEL_22:
          v20 = v24;
          goto LABEL_23;
        }
        v24 = L"en-US";
        if ( !wcsicmp(v23, L"en") || !wcsicmp(v23, L"en-US") )
          goto LABEL_19;
        if ( wcsicmp(v23, String2) )
        {
          v27 = RtlpNlsGetNameIndex(v23);
          if ( v27 < 0 )
            goto LABEL_18;
          _mm_lfence();
          v28 = *(unsigned __int16 *)(pTblPtrs + 48) * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * v27 + 2);
          v29 = *(_QWORD *)(pTblPtrs + 8);
          v18 = *(unsigned __int16 *)(v28 + v29 + 110);
          v19 = *(unsigned __int16 *)(v28 + v29 + 112);
        }
        AlternateCodePage = RtlpGetAlternateCodePage(a5, (__int64)v23, v33);
        if ( !a6 || AlternateCodePage || a6 == v18 || a6 == v19 )
        {
          if ( v18 == v34 || v18 == v32 || v19 == v34 || v19 == v32 )
            goto LABEL_19;
          if ( AlternateCodePage )
          {
            if ( AlternateCodePage != -1 )
            {
              for ( i = 0; i < AlternateCodePage; ++i )
              {
                if ( *(__int16 *)(v33[0] + 2LL * i) > 0 )
                {
                  v31 = *(__int16 *)(v33[0] + 2LL * i);
                  if ( v31 == v34 || v31 == v32 )
                    goto LABEL_19;
                }
              }
              goto LABEL_18;
            }
LABEL_19:
            if ( wcsicmp(v23, L"en") )
              v24 = v23;
            v6 = wcsicmp(v24, String2) != 0;
            goto LABEL_22;
          }
        }
LABEL_18:
        v23 = L"en-US";
        goto LABEL_19;
      }
      return 3221225711LL;
    }
  }
  return 3221225473LL;
}
