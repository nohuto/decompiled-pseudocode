/*
 * XREFs of RtlpMuiRegDupLanguageList @ 0x18006F730
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180006B50 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006F580 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlpDupTebLanguageList @ 0x18006F7BC (RtlpDupTebLanguageList.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x18000AF40 (RtlpMuiRegCreateLanguageList.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegDupLanguageList(__int64 a1)
{
  __int64 v3; // rsi
  __int64 LanguageList; // rax
  __int64 v5; // rdi

  if ( !a1 )
    return 0LL;
  v3 = *(unsigned __int16 *)(a1 + 4);
  LanguageList = RtlpMuiRegCreateLanguageList(*(unsigned __int16 *)(a1 + 4), *(_BYTE *)(a1 + 8), *(_QWORD *)(a1 + 16));
  v5 = LanguageList;
  if ( !LanguageList )
    return 0LL;
  if ( (_DWORD)v3 )
  {
    memmove(*(void **)(LanguageList + 24), *(const void **)(a1 + 24), 6 * v3);
    *(_WORD *)(v5 + 4) = v3;
  }
  *(_BYTE *)(v5 + 8) = *(_BYTE *)(a1 + 8);
  *(_QWORD *)(v5 + 32) = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(v5 + 40) = *(_DWORD *)(a1 + 40);
  return v5;
}
