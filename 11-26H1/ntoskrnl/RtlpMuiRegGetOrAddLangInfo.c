/*
 * XREFs of RtlpMuiRegGetOrAddLangInfo @ 0x140779488
 * Callers:
 *     _RtlpMuiRegAddBaseLanguage @ 0x1408AFCF4 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408B0A68 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegAddLanguageByName @ 0x140B2FCBC (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlpMuiRegGetLangInfoIndex @ 0x1408AEE38 (RtlpMuiRegGetLangInfoIndex.c)
 *     RtlpMuiRegGrowLanguages @ 0x1408AF34C (RtlpMuiRegGrowLanguages.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddLangInfo(__int64 *a1, __int64 a2, __int16 *a3)
{
  __int64 v6; // rbx
  __int16 LangInfoIndex; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx

  if ( !a1 )
    return 3221225485LL;
  v6 = *a1;
  if ( !*a1 || !a2 || !*(_WORD *)(a2 + 4) && *(__int16 *)(a2 + 6) < 0 )
    return 3221225485LL;
  LangInfoIndex = RtlpMuiRegGetLangInfoIndex(*a1);
  if ( LangInfoIndex < 0 )
  {
    if ( *(_WORD *)(v6 + 6) >= *(_WORD *)(v6 + 4) )
    {
      v8 = RtlpMuiRegGrowLanguages((void *)v6);
      v6 = v8;
      if ( !v8 )
        return 3221225495LL;
      *a1 = v8;
    }
    LangInfoIndex = *(_WORD *)(v6 + 6);
    v9 = *(_QWORD *)(v6 + 16);
    v10 = 28LL * LangInfoIndex;
    *(_WORD *)(v6 + 6) = LangInfoIndex + 1;
    *(_OWORD *)(v10 + v9) = *(_OWORD *)a2;
    *(_QWORD *)(v10 + v9 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v10 + v9 + 24) = *(_DWORD *)(a2 + 24);
  }
  if ( a3 )
    *a3 = LangInfoIndex;
  return 0LL;
}
