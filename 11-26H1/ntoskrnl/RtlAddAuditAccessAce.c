/*
 * XREFs of RtlAddAuditAccessAce @ 0x140808DC0
 * Callers:
 *     SepInitProcessAuditSd @ 0x14063DADC (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessAce(
        PACL Acl,
        ULONG AceRevision,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  return RtlpAddKnownAce((int)Acl, 2, 192, AccessMask, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 2);
}
