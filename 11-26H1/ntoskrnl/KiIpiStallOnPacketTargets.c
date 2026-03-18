/*
 * XREFs of KiIpiStallOnPacketTargets @ 0x14025220C
 * Callers:
 *     KeIpiGenericCall @ 0x1404AAD60 (KeIpiGenericCall.c)
 *     KeFlushRsb @ 0x1405F18C8 (KeFlushRsb.c)
 *     KiSrcuReadUnlockRemote @ 0x1405F5A1C (KiSrcuReadUnlockRemote.c)
 *     KiIpiTargetCall @ 0x1405FB790 (KiIpiTargetCall.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140BF5030 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1402517F0 (KiIpiStallOnPacketTargetsPrcb.c)
 */

__int64 __fastcall KiIpiStallOnPacketTargets(__int64 a1)
{
  return KiIpiStallOnPacketTargetsPrcb(a1, (__int64)KeGetCurrentPrcb());
}
