/*
 * XREFs of _MuiRegAllocArray @ 0x18004E1E0
 * Callers:
 *     RtlpLoadInstallLanguageFallback @ 0x18004CB84 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18004E02C (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DE1D8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800DE4E4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E6A8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax

  v2 = 2LL * a2;
  if ( v2 <= 0xFFFFFFFF && (_DWORD)v2 )
    return RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v2);
  else
    return 0LL;
}
