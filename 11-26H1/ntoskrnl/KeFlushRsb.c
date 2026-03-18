/*
 * XREFs of KeFlushRsb @ 0x1405F18C8
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargets @ 0x14025220C (KiIpiStallOnPacketTargets.c)
 *     KiIpiSendPacket @ 0x140497DF4 (KiIpiSendPacket.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiFlushCurrentRsb @ 0x14073D180 (KiFlushCurrentRsb.c)
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
