/*
 * XREFs of RtlAddAuditAccessAce @ 0x140803320
 * Callers:
 *     SepInitProcessAuditSd @ 0x14063AA70 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(int a1, __int64 a2, int a3)
{
  return RtlpAddKnownAce(a1, 2, 192, a3, RtlpBootStatHandleLock.StateSaveArea, 2);
}
