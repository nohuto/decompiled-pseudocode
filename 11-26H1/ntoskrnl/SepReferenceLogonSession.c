/*
 * XREFs of SepReferenceLogonSession @ 0x140AB6FB0
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x1404704C0 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x1404E0EFC (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x14063AEE8 (SepOneWayLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessionsEx @ 0x14063B1C0 (SepOneWayLinkLogonSessionsEx.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x140AB6FE8 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
