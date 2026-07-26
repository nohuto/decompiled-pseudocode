/*
 * XREFs of NdisWaitEvent @ 0x1400522A0
 * Callers:
 *     ?ndisLegacyProtocolPauseRestartHandler@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT@@@Z @ 0x1400BB2E8 (-ndisLegacyProtocolPauseRestartHandler@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall NdisWaitEvent(PNDIS_EVENT Event, UINT MsToWait)
{
  LARGE_INTEGER *Timeout; // rbx
  __int64 v3; // rdi
  KIRQL CurrentIrql; // al
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  Timeout = 0LL;
  v3 = (int)MsToWait;
  v7 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    KeBugCheckEx(0x7Cu, 0x14uLL, CurrentIrql, 0LL, 0LL);
  if ( (_DWORD)v3 )
  {
    Timeout = (LARGE_INTEGER *)&v7;
    v7 = -10000 * v3;
  }
  return KeWaitForSingleObject(Event, Executive, 0, 0, Timeout) == 0;
}
