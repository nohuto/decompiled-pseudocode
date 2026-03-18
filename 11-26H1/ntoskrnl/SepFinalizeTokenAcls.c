/*
 * XREFs of SepFinalizeTokenAcls @ 0x140926FDC
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     SeFilterToken @ 0x1408109E0 (SeFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     NtDuplicateToken @ 0x1408EB8C0 (NtDuplicateToken.c)
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x14092A140 (SepCreateClientSecurityEx.c)
 *     SeSubProcessToken @ 0x140A2B26C (SeSubProcessToken.c)
 *     NtFilterToken @ 0x140A45140 (NtFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB2F6C (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x140260160 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140927020 (SepAppendAceToTokenObjectAcl.c)
 */

NTSTATUS __fastcall SepFinalizeTokenAcls(_QWORD *Object)
{
  NTSTATUS result; // eax

  result = SepAppendAceToTokenObjectAcl(Object, 8LL, SeAliasAdminsSid);
  if ( result >= 0 )
    return SepSetProcessTrustLabelAceForToken(Object);
  return result;
}
