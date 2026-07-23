/*
 * XREFs of KdpReadMachineSpecificRegister @ 0x140C1A544
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysReadMsr @ 0x1405E6D0C (KdpSysReadMsr.c)
 */

__int64 __fastcall KdpReadMachineSpecificRegister(__int64 a1)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v3[0] = 56LL;
  v3[1] = a1;
  *(_DWORD *)(a1 + 8) = KdpSysReadMsr(*(_DWORD *)(a1 + 16), &v4);
  *(_QWORD *)(a1 + 20) = v4;
  return KdSendPacket(2LL, v3, 0LL, &KdpContext);
}
