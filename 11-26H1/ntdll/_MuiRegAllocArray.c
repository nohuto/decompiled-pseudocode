/*
 * XREFs of _MuiRegAllocArray @ 0x180002AB0
 * Callers:
 *     RtlpLoadInstallLanguageFallback @ 0x18000144C (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800028FC (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E0938 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E0C44 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E7F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax

  v2 = 2LL * a2;
  if ( v2 <= 0xFFFFFFFF && (_DWORD)v2 )
    return RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, (unsigned int)v2);
  else
    return 0LL;
}
