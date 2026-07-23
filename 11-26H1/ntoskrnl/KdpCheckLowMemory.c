/*
 * XREFs of KdpCheckLowMemory @ 0x140C19E70
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysCheckLowMemory @ 0x140C1B2F4 (KdpSysCheckLowMemory.c)
 */

__int64 __fastcall KdpCheckLowMemory(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[0] = 56LL;
  v2[1] = a1;
  *(_DWORD *)(a1 + 8) = KdpSysCheckLowMemory(4LL);
  return KdSendPacket(2LL, v2, 0LL, &KdpContext);
}
