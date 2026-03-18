/*
 * XREFs of VfPacketFindAndLock @ 0x140B96770
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x140698EB0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140B970A4 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPacketFindAndLock(__int64 a1)
{
  return VfIrpDatabaseEntryFindAndLock(a1);
}
