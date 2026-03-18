/*
 * XREFs of _MuiRegAllocArray @ 0x14072028C
 * Callers:
 *     RtlpLoadInstallLanguageFallback @ 0x1408A7868 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1408A7E84 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1408A8798 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1408A8F74 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408AA5F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return ExAllocatePool2(0x100uLL);
  }
  return result;
}
