/*
 * XREFs of PoFxCompleteIdleState @ 0x1404732B0
 * Callers:
 *     DifPoFxCompleteIdleStateWrapper @ 0x140696D60 (DifPoFxCompleteIdleStateWrapper.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403B7B74 (PopDiagTraceFxComponentIdleState.c)
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopPluginComponentIdleState @ 0x140473350 (PopPluginComponentIdleState.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PoFxCompleteIdleState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // r8
  _BYTE v6[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  memset_0(v6, 0, 0x40uLL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 872) + 8 * v2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 140), 0xFFFFFFFF) == 1 )
  {
    PopFxAddLogEntry(*(_QWORD *)(a1 + 48), v2, 14, 1LL);
    PopDiagTraceFxComponentIdleState(*(_QWORD *)(a1 + 48), v2, *(_DWORD *)(v4 + 152));
    if ( (unsigned __int8)PopPluginComponentIdleState(a1, (unsigned int)v2, v5, v6) )
      PopFxProcessWork(0LL, (__int64)v6);
  }
}
