/*
 * XREFs of KdpWriteMachineSpecificRegister @ 0x140C1B8B4
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysWriteMsr @ 0x1405E6E04 (KdpSysWriteMsr.c)
 */

__int64 __fastcall KdpWriteMachineSpecificRegister(_DWORD *a1, __int64 a2, unsigned __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ecx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v7 = 0LL;
  LOWORD(v7) = 56;
  HIDWORD(v8) = a1[6];
  v4 = a1[5];
  *((_QWORD *)&v7 + 1) = a1;
  v5 = a1[4];
  LODWORD(v8) = v4;
  a1[2] = KdpSysWriteMsr(v5, &v8);
  return KdSendPacket(2LL, &v7, 0LL, &KdpContext);
}
