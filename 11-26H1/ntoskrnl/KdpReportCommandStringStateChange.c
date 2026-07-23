/*
 * XREFs of KdpReportCommandStringStateChange @ 0x140C1A890
 * Callers:
 *     KdpCommandString @ 0x140C1BC54 (KdpCommandString.c)
 * Callees:
 *     KdpSetCommonState @ 0x140503B74 (KdpSetCommonState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 *     KdpSetContextState @ 0x140C1D4E8 (KdpSetContextState.c)
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReportCommandStringStateChange(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  int v6; // eax
  int v7; // r8d
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v13; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v14[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[208]; // [rsp+80h] [rbp-80h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  memset_0(v14, 0, 0xF0uLL);
  v11 = 0;
  do
  {
    KdpSetCommonState(12338, a3, (__int64)v14);
    KdpSetContextState(v14, a3);
    memset_0(v15, 0, 0x40uLL);
    v6 = *a1;
    v7 = 127;
    *((_QWORD *)&v12 + 1) = &KdpMessageBuffer;
    if ( (unsigned __int16)v6 <= 0x7Fu )
      v7 = v6;
    KdpCopyMemoryChunks(*((_QWORD *)a1 + 1), (unsigned int)&KdpMessageBuffer, v7, 0, 4, (__int64)&v11);
    LOWORD(v12) = v11 + 1;
    *(_BYTE *)((unsigned __int16)(v11 + 1) + *((_QWORD *)&v12 + 1) - 1LL) = 0;
    v8 = *a2;
    if ( v8 >= KdTransportMaxPacketSize - (unsigned int)(unsigned __int16)v12 - 240 )
      v8 = KdTransportMaxPacketSize - (unsigned __int16)v12 - 240;
    KdpCopyMemoryChunks(*((_QWORD *)a2 + 1), DWORD2(v12) + (unsigned __int16)v12, v8, 0, 4, (__int64)&v11);
    LOWORD(v12) = v11 + 1 + v12;
    v9 = (unsigned __int16)v12;
    *(_BYTE *)((unsigned __int16)v12 + *((_QWORD *)&v12 + 1) - 1LL) = 0;
    *((_QWORD *)&v13 + 1) = v14;
    LOWORD(v13) = 240;
    result = KdpSendWaitContinue(v9, &v13, &v12, a3);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
