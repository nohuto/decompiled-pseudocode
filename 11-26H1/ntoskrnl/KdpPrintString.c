/*
 * XREFs of KdpPrintString @ 0x140C1CAD8
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1404E9CA0 (KdRefreshDebuggerNotPresent.c)
 *     KdpPrint @ 0x140C1BD30 (KdpPrint.c)
 * Callees:
 *     KdpPollBreakInWithPortLock @ 0x1405E6BE4 (KdpPollBreakInWithPortLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 */

bool __fastcall KdpPrintString(unsigned __int16 *a1)
{
  int v1; // r8d
  __int64 v2; // rcx
  int v3; // edx
  unsigned int v5; // [rsp+30h] [rbp-40h] BYREF
  __int128 v6; // [rsp+38h] [rbp-38h] BYREF
  __int128 v7; // [rsp+48h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp-18h] BYREF
  __int16 v9; // [rsp+5Ch] [rbp-14h]
  __int16 Number; // [rsp+5Eh] [rbp-12h]
  int v11; // [rsp+60h] [rbp-10h]
  int v12; // [rsp+64h] [rbp-Ch]

  v1 = *a1;
  v2 = *((_QWORD *)a1 + 1);
  v5 = 0;
  v12 = 0;
  v6 = 0LL;
  v7 = 0LL;
  KdpCopyMemoryChunks(v2, (unsigned int)&KdpMessageBuffer, v1, 0, 4, (__int64)&v5);
  v3 = v5;
  if ( (unsigned __int64)v5 + 16 > (unsigned int)KdTransportMaxPacketSize )
    v3 = KdTransportMaxPacketSize - 16;
  v9 = KeProcessorLevel;
  v8 = 12848;
  Number = KeGetPcr()->Prcb.Number;
  v11 = v3;
  LOWORD(v7) = 16;
  LOWORD(v6) = v3;
  *((_QWORD *)&v7 + 1) = &v8;
  *((_QWORD *)&v6 + 1) = &KdpMessageBuffer;
  KdSendPacket(3LL, &v7, &v6, &KdpContext);
  return KdpPollBreakInWithPortLock();
}
