/*
 * XREFs of KdpWriteBreakpoint @ 0x140C1B6B8
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpAddBreakpoint @ 0x140C1C5CC (KdpAddBreakpoint.c)
 */

__int64 __fastcall KdpWriteBreakpoint(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v6 = 0LL;
  LOBYTE(a3) = 1;
  v4 = KdpAddBreakpoint(*(_QWORD *)(a1 + 16), 204LL, a3, 0LL, 56LL, a1);
  *(_DWORD *)(a1 + 24) = v4;
  *(_DWORD *)(a1 + 8) = v4 == 0 ? 0xC0000001 : 0;
  return KdSendPacket(2LL, &v6, 0LL, &KdpContext);
}
