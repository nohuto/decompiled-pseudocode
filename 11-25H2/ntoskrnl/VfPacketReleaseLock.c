/*
 * XREFs of VfPacketReleaseLock @ 0x140B8B530
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x140698EB0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140B94004 (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPacketReleaseLock(__int64 a1)
{
  return VfIrpDatabaseEntryReleaseLock(a1);
}
