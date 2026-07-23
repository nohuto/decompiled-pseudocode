/*
 * XREFs of KdpQueryMemory @ 0x140C1A2FC
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 */

__int64 __fastcall KdpQueryMemory(__int64 a1)
{
  int v1; // edi
  bool IsUserAddress; // al
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
  {
    v1 = -1073741811;
  }
  else
  {
    IsUserAddress = MmIsUserAddress(*(_QWORD *)(a1 + 16));
    *(_DWORD *)(a1 + 36) = 7;
    *(_DWORD *)(a1 + 32) = !IsUserAddress ? 2 : 0;
  }
  *(_DWORD *)(a1 + 8) = v1;
  *(_QWORD *)(a1 + 24) = 0LL;
  LOWORD(v5) = 56;
  *((_QWORD *)&v5 + 1) = a1;
  return KdSendPacket(2LL, &v5, 0LL, &KdpContext);
}
