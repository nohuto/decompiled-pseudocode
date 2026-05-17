/*
 * XREFs of RtlEqualSid @ 0x180059860
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x180059320 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpCompareAces @ 0x180059660 (RtlpCompareAces.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005AD80 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCompareKnownObjectAces @ 0x180061F60 (RtlpCompareKnownObjectAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C7758 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180137F60 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

bool __fastcall RtlEqualSid(_WORD *a1, _WORD *a2)
{
  return *a1 == *a2 && memcmp(a1, a2, 4LL * HIBYTE(*a1) + 8) == 0;
}
