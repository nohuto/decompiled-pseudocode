/*
 * XREFs of KdSendTraceData @ 0x140C19D0C
 * Callers:
 *     EtwpSendTraceEvent @ 0x1404A2958 (EtwpSendTraceEvent.c)
 *     EtwpSendBufferToDebugger @ 0x14083286C (EtwpSendBufferToDebugger.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 */

__int64 __fastcall KdSendTraceData(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  unsigned int *v5; // rbx
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  char v9; // r15
  char *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int128 v14; // [rsp+28h] [rbp-39h] BYREF
  __int128 v15; // [rsp+38h] [rbp-29h] BYREF
  int v16; // [rsp+48h] [rbp-19h] BYREF
  __int16 v17; // [rsp+4Ch] [rbp-15h]
  __int16 Number; // [rsp+4Eh] [rbp-13h]
  unsigned int v19; // [rsp+50h] [rbp-11h]

  v2 = a2;
  v14 = 0LL;
  v15 = 0LL;
  memset_0(&v16, 0, 0x40uLL);
  v4 = 0;
  v5 = (unsigned int *)(a1 + 8);
  if ( (_DWORD)v2 )
  {
    v6 = v5;
    v7 = (unsigned int)v2;
    do
    {
      v4 += *v6;
      v6 += 4;
      --v7;
    }
    while ( v7 );
  }
  result = (unsigned int)(KdTransportMaxPacketSize - 64);
  if ( v4 <= (unsigned int)result )
  {
    v9 = KdEnterDebugger(0LL, 0LL);
    v10 = (char *)&KdpMessageBuffer;
    if ( (_DWORD)v2 )
    {
      do
      {
        memmove(v10, *((const void **)v5 - 1), *v5);
        v11 = *v5;
        v5 += 4;
        v10 += v11;
        --v2;
      }
      while ( v2 );
    }
    v17 = KeProcessorLevel;
    v16 = 13104;
    Number = KeGetPcr()->Prcb.Number;
    *((_QWORD *)&v15 + 1) = &v16;
    v19 = v4;
    LOWORD(v15) = 64;
    LOWORD(v14) = v4;
    *((_QWORD *)&v14 + 1) = &KdpMessageBuffer;
    KdSendPacket(9LL, &v15, &v14, &KdpContext);
    LOBYTE(v12) = v9;
    return KdExitDebugger(v12, v13);
  }
  return result;
}
