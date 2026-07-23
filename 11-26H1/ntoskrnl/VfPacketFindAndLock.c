/*
 * XREFs of VfPacketFindAndLock @ 0x140C4BAE8
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1406465F0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C4BF94 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPacketFindAndLock(__int64 a1)
{
  return VfIrpDatabaseEntryFindAndLock(a1);
}
