/*
 * XREFs of RtlEqualSid @ 0x180043DE0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1800438A0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpCompareAces @ 0x180043BE0 (RtlpCompareAces.c)
 *     RtlpValidOwnerSubjectContext @ 0x180045300 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCompareKnownObjectAces @ 0x18004C4E0 (RtlpCompareKnownObjectAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C4F18 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180137CD0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  return *(_WORD *)Sid1 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4LL * HIBYTE(*(_WORD *)Sid1) + 8) == 0;
}
