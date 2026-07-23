/*
 * XREFs of EtwTraceContextSwap @ 0x140407410
 * Callers:
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 *     EtwpCoverageSamplerContextSwap @ 0x140534A54 (EtwpCoverageSamplerContextSwap.c)
 */

__int64 __fastcall EtwTraceContextSwap(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v2 = *(_QWORD *)(a1 + 1688);
  v3 = 0LL;
  if ( v2 == -3 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL);
  }
  else if ( v2 )
  {
    if ( !PsIsServerSilo(*(_QWORD *)(a1 + 1688)) )
    {
      do
        v2 = *(_QWORD *)(v2 + 1304);
      while ( !PsIsServerSilo(v2) );
    }
  }
  else
  {
    v2 = 0LL;
  }
  v6 = *(_QWORD *)(a2 + 1688);
  if ( v6 == -3 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 544) + 1520LL);
  }
  else if ( v6 )
  {
    if ( !PsIsServerSilo(v6) )
    {
      while ( !PsIsServerSilo(*(_QWORD *)(v14 + 1304)) )
        ;
    }
    v3 = v14;
  }
  v7 = &PspHostSiloGlobals;
  if ( v2 )
    v8 = *(_QWORD **)(v2 + 1504);
  else
    v8 = &PspHostSiloGlobals;
  v9 = v8[104];
  if ( v3 )
    v7 = *(_QWORD **)(v3 + 1504);
  v10 = v7[104];
  if ( EtwpHostSiloState != -4844 && (*(_DWORD *)(EtwpHostSiloState + 4848) & 4) != 0 )
    EtwpCoverageSamplerContextSwap(a2);
  result = EtwpLogContextSwapEvent(EtwpHostSiloState, a1, a2);
  if ( v2 == v3 )
  {
    if ( v2 && v9 )
    {
      v12 = a1;
      v13 = v9;
      return EtwpLogContextSwapEvent(v13, v12, a2);
    }
  }
  else if ( v2 && v9 )
  {
    result = EtwpLogContextSwapEvent(v9, a1, 0LL);
  }
  if ( v3 && v10 )
  {
    v12 = 0LL;
    v13 = v10;
    return EtwpLogContextSwapEvent(v13, v12, a2);
  }
  return result;
}
