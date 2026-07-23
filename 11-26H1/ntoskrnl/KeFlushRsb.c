/*
 * XREFs of KeFlushRsb @ 0x1405F4288
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargets @ 0x140253B6C (KiIpiStallOnPacketTargets.c)
 *     KiIpiSendPacket @ 0x140491944 (KiIpiSendPacket.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiFlushCurrentRsb @ 0x140741D80 (KiFlushCurrentRsb.c)
 */

__int64 KeFlushRsb()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v1; // rcx
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  KiIpiSendPacket(1u, 0LL, (__int64)KiFlushRsbTarget, 0LL, 0LL, 0LL);
  KiIpiStallOnPacketTargets(v1);
  KiFlushCurrentRsb(v3, v2, v4, v5);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
