/*
 * XREFs of KiProcessScbTracingList @ 0x14045BDA0
 * Callers:
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140332850 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x1403346DC (KiParkCurrentProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     EtwTraceScbRankChange @ 0x1406C4D3C (EtwTraceScbRankChange.c)
 */

void __fastcall KiProcessScbTracingList(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD **v5; // rax
  _QWORD *v6; // rcx
  _QWORD **v7; // rdx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      EtwTraceScbRankChange(
        (char *)v2 - *(unsigned int *)(a1 + 216) - 456,
        *(unsigned int *)(a1 + 36),
        *((unsigned int *)v2 - 79),
        (*(_BYTE *)(v2 - 41) & 2) != 0);
      v2 = (_QWORD *)*v2;
    }
    while ( v2 );
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(_QWORD *)(a1 + 48) );
    }
    v5 = (_QWORD **)*a2;
    if ( *a2 )
    {
      v6 = *v5;
      while ( 1 )
      {
        *((_WORD *)v5 - 164) &= ~0x100u;
        v7 = (_QWORD **)v6;
        *a2 = v6;
        *v5 = 0LL;
        if ( !v6 )
          break;
        v6 = (_QWORD *)*v6;
        v5 = v7;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
}
