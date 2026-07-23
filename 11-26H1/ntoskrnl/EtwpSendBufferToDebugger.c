/*
 * XREFs of EtwpSendBufferToDebugger @ 0x14083286C
 * Callers:
 *     EtwpSendDbgId @ 0x140832980 (EtwpSendDbgId.c)
 * Callees:
 *     EtwpGetNextEventOffsetType @ 0x1404A2B38 (EtwpGetNextEventOffsetType.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KdSendTraceData @ 0x140C19D0C (KdSendTraceData.c)
 */

__int64 __fastcall EtwpSendBufferToDebugger(__int128 *a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  unsigned int v7; // esi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // r10d
  int v11; // r14d
  _OWORD *v12; // [rsp+20h] [rbp-29h] BYREF
  int v13; // [rsp+28h] [rbp-21h]
  __int64 v14; // [rsp+30h] [rbp-19h]
  int v15; // [rsp+38h] [rbp-11h]
  _OWORD v16[3]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v17; // [rsp+70h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+37h]
  unsigned int v19; // [rsp+B0h] [rbp+67h] BYREF

  v2 = 72;
  memset_0(v16, 0, 0x48uLL);
  v3 = *((_DWORD *)a1 + 12);
  v19 = 0;
  if ( v3 > KdTransportMaxPacketSize - 64 )
  {
    v5 = *a1;
    v13 = 72;
    v6 = a1[1];
    v7 = KdTransportMaxPacketSize - 136;
    v12 = v16;
    v16[0] = v5;
    v8 = a1[2];
    v16[1] = v6;
    v9 = a1[3];
    v16[2] = v8;
    v18 = *((_QWORD *)a1 + 8);
    v17 = v9;
    do
    {
      v14 = (__int64)a1 + v2;
      while ( 1 )
      {
        result = EtwpGetNextEventOffsetType((unsigned int *)a1, v2, &v19);
        v11 = result;
        if ( !(_DWORD)result )
          break;
        if ( v10 + v19 > v7 )
        {
          if ( v19 > v7 )
            v2 += v19;
          break;
        }
        v2 += v19;
      }
      if ( v10 )
      {
        v15 = v10;
        LODWORD(v17) = v10 + 72;
        LODWORD(v16[0]) = v10 + 72;
        result = KdSendTraceData(&v12, 2LL);
      }
    }
    while ( v11 );
  }
  else
  {
    v13 = v3;
    v12 = a1;
    return KdSendTraceData(&v12, 1LL);
  }
  return result;
}
