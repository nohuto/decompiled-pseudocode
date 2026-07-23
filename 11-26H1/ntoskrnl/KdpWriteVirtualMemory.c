/*
 * XREFs of KdpWriteVirtualMemory @ 0x140C1B9C4
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpWriteVirtualMemory(__int64 a1, unsigned __int16 *a2)
{
  int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *a2;
  v3 = a1 + 28;
  v4 = *((_QWORD *)a2 + 1);
  v6 = *(_QWORD *)(a1 + 16);
  v8[0] = 0LL;
  *(_DWORD *)(a1 + 8) = KdpCopyMemoryChunks(v6, v4, v2, 0, 5, v3);
  v8[1] = a1;
  LOWORD(v8[0]) = 56;
  return KdSendPacket(2LL, v8, 0LL, &KdpContext);
}
