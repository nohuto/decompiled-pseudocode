/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x140808B40
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x140CCBA74 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedAceEx(PACL Acl, ULONG AceRevision, ULONG AceFlags, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce((int)Acl, AceRevision, AceFlags, AccessMask, Sid, 1);
}
