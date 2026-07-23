/*
 * XREFs of CcNotifyWriteBehind @ 0x1405B3550
 * Callers:
 *     MiInitializeMirrorPacket @ 0x14077A9F0 (MiInitializeMirrorPacket.c)
 *     MiShutdownSystem @ 0x140C0646C (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140259934 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64)CcNotifyWriteBehindHelper, 2LL, 0, 0);
}
