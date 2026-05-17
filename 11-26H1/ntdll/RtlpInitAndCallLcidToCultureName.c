/*
 * XREFs of RtlpInitAndCallLcidToCultureName @ 0x180004E70
 * Callers:
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E0938 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E0C44 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18010AC8C (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E7F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInitAndCallLcidToCultureName(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a1 )
  {
    *(_QWORD *)(a1 + 8) = a2;
    *(_DWORD *)a1 = 11141120;
  }
  return RtlLCIDToCultureName(a3, a1);
}
