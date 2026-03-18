/*
 * XREFs of VfPacketFindAndLock @ 0x140C45AD8
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x140642A10 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C45F84 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPacketFindAndLock(__int64 a1)
{
  return VfIrpDatabaseEntryFindAndLock(a1);
}
