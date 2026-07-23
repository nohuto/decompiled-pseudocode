/*
 * XREFs of SepFinalizeTokenAcls @ 0x140902AEC
 * Callers:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     SeFilterToken @ 0x140816470 (SeFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     NtDuplicateToken @ 0x1408F1E80 (NtDuplicateToken.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     NtFilterToken @ 0x1409E32D0 (NtFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB430C (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x140406340 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140902B30 (SepAppendAceToTokenObjectAcl.c)
 */

NTSTATUS __fastcall SepFinalizeTokenAcls(_QWORD *Object)
{
  NTSTATUS result; // eax

  result = SepAppendAceToTokenObjectAcl(Object, 8LL, SeAliasAdminsSid);
  if ( result >= 0 )
    return SepSetProcessTrustLabelAceForToken(Object);
  return result;
}
