/*
 * XREFs of EtwpSendTraceEvent @ 0x1404A92C8
 * Callers:
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x140216BB0 (EtwTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1402176B0 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x14032CDC0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14041297C (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceRaw @ 0x140516B78 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     EtwpGetNextEventOffsetType @ 0x1404A94A8 (EtwpGetNextEventOffsetType.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpSendDbgId @ 0x14082C740 (EtwpSendDbgId.c)
 *     KdSendTraceData @ 0x140C13D0C (KdSendTraceData.c)
 */

unsigned __int64 __fastcall EtwpSendTraceEvent(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  __int128 *v7; // r10
  __int128 v8; // xmm0
  _OWORD *v9; // [rsp+20h] [rbp-19h] BYREF
  int v10; // [rsp+28h] [rbp-11h]
  __int64 v11; // [rsp+30h] [rbp-9h]
  unsigned int v12; // [rsp+38h] [rbp-1h]
  _OWORD v13[3]; // [rsp+40h] [rbp+7h] BYREF
  __int128 v14; // [rsp+70h] [rbp+37h]
  __int64 v15; // [rsp+80h] [rbp+47h]
  unsigned int v16; // [rsp+A0h] [rbp+67h] BYREF

  memset_0(v13, 0, 0x48uLL);
  v4 = *(_DWORD *)(a1 + 824);
  v16 = 0;
  if ( (v4 & 0x800) != 0 && KeGetEffectiveIrql() < 2u )
    EtwpSendDbgId(a1);
  result = EtwpGetNextEventOffsetType(*(_QWORD *)a2, *(unsigned int *)(a2 + 16), &v16);
  if ( (_DWORD)result )
  {
    result = v16 + 72LL;
    if ( result <= (unsigned int)(KdTransportMaxPacketSize - 64) )
    {
      v8 = *v7;
      v10 = 72;
      v12 = v16;
      v13[0] = v8;
      v13[1] = v7[1];
      v13[2] = v7[2];
      v14 = v7[3];
      *(_QWORD *)&v8 = *((_QWORD *)v7 + 8);
      LODWORD(v13[0]) = v16 + 72;
      LODWORD(v14) = v16 + 72;
      v9 = v13;
      v11 = (__int64)v7 + v6;
      v15 = v8;
      return KdSendTraceData(&v9, 2LL);
    }
  }
  return result;
}
