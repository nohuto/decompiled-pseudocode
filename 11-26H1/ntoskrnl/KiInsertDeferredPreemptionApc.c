/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x14020A138
 * Callers:
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140209540 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiBeginThreadAccountingPeriod @ 0x140209DF0 (KiBeginThreadAccountingPeriod.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiInsertQueueApc @ 0x14020B150 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xBu);
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x400) != 0 )
  {
    return result;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xAu);
  v5 = a2 + 648;
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v8);
      result = *(_QWORD *)(a2 + 64);
    }
    while ( result );
  }
  if ( (*(_DWORD *)(a2 + 116) & 0x4000) != 0 && !*(_BYTE *)(v5 + 82) )
  {
    *(_BYTE *)(v5 + 82) = 1;
    KiInsertQueueApc(v5);
    LOBYTE(v6) = 2;
    result = KiSignalThreadForApc(a1, v5, v6, 0LL);
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  return result;
}
