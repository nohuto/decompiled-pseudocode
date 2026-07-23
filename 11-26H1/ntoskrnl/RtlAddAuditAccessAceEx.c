/*
 * XREFs of RtlAddAuditAccessAceEx @ 0x140808E00
 * Callers:
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  ULONG v7; // eax
  int v8; // r8d

  v7 = AceFlags | 0x40;
  if ( !AuditSuccess )
    v7 = AceFlags;
  v8 = v7 | 0x80;
  if ( !AuditFailure )
    v8 = v7;
  return RtlpAddKnownAce((int)Acl, AceRevision, v8, AccessMask, Sid, 2);
}
