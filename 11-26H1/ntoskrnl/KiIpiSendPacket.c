/*
 * XREFs of KiIpiSendPacket @ 0x140491944
 * Callers:
 *     KeFlushRsb @ 0x1405F4288 (KeFlushRsb.c)
 *     KiSrcuReadUnlockRemote @ 0x1405F83DC (KiSrcuReadUnlockRemote.c)
 *     KiIpiTargetCall @ 0x1405FE1E0 (KiIpiTargetCall.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140BFB030 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendPacket(unsigned int a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  *((_QWORD *)&v7 + 1) = a5;
  v9 = a3;
  *(_QWORD *)&v7 = a4;
  v8 = a6;
  return KiIpiSendRequest((__int64)KeGetCurrentPrcb(), a1, a2, &v7, 5LL);
}
