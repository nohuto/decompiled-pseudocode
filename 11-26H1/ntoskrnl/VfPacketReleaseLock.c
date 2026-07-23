/*
 * XREFs of VfPacketReleaseLock @ 0x140C3F3F4
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1406465F0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80 (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPacketReleaseLock(__int64 a1)
{
  return VfIrpDatabaseEntryReleaseLock(a1);
}
