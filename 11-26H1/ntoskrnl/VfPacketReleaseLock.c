/*
 * XREFs of VfPacketReleaseLock @ 0x140C393E4
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x140642A10 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C39D70 (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPacketReleaseLock(__int64 a1)
{
  return VfIrpDatabaseEntryReleaseLock(a1);
}
