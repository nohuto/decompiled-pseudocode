/*
 * XREFs of KiIpiStallOnPacketTargets @ 0x140253B6C
 * Callers:
 *     KeIpiGenericCall @ 0x1404A43F0 (KeIpiGenericCall.c)
 *     KeFlushRsb @ 0x1405F4288 (KeFlushRsb.c)
 *     KiSrcuReadUnlockRemote @ 0x1405F83DC (KiSrcuReadUnlockRemote.c)
 *     KiIpiTargetCall @ 0x1405FE1E0 (KiIpiTargetCall.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140BFB030 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140253150 (KiIpiStallOnPacketTargetsPrcb.c)
 */

__int64 __fastcall KiIpiStallOnPacketTargets(__int64 a1)
{
  return KiIpiStallOnPacketTargetsPrcb(a1, (__int64)KeGetCurrentPrcb());
}
