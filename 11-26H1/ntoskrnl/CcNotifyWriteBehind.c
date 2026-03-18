/*
 * XREFs of CcNotifyWriteBehind @ 0x1405B0D40
 * Callers:
 *     MiInitializeMirrorPacket @ 0x140777B50 (MiInitializeMirrorPacket.c)
 *     MiShutdownSystem @ 0x140C0025C (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140258154 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64)CcNotifyWriteBehindHelper, 2LL, 0, 0);
}
