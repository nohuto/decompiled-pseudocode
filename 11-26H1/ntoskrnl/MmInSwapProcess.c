/*
 * XREFs of MmInSwapProcess @ 0x14048C3C4
 * Callers:
 *     KiInSwapProcesses @ 0x14048C2D4 (KiInSwapProcesses.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiSetPageTablePfnBuddy @ 0x1402A4AE0 (MiSetPageTablePfnBuddy.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSetPfnContainingFrame @ 0x14033BC10 (MiSetPfnContainingFrame.c)
 *     MiCopyTopLevelMappings @ 0x140342188 (MiCopyTopLevelMappings.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MiReturnWsToExpansionList @ 0x14047D620 (MiReturnWsToExpansionList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceInswapProcess @ 0x1406C4988 (EtwTraceInswapProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E4858 (MiReAcquireOutSwappedProcessCommit.c)
 */

char __fastcall MmInSwapProcess(unsigned __int16 *Object)
{
  __int64 v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  KIRQL CurrentIrql; // bp
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // r8
  __int64 v11; // rcx
  volatile LONG *v12; // rcx
  char result; // al
  int v14; // [rsp+50h] [rbp+8h] BYREF

  if ( (*((_DWORD *)Object + 125) & 0x80u) != 0 )
  {
    v2 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * Object[599]);
    v5 = (MiMakeOutswappedPageResident((__int64)Object, 0xFFFFF6FB7DBEDF68uLL, -1LL) >> 12) & 0xFFFFFFFFFFLL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = 2;
      LOBYTE(v4) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v4, v3);
    }
    v7 = 48 * v5 - 0x220000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    *(_QWORD *)(v7 + 24) = (*(_QWORD *)(v7 + 24) + 1LL) ^ (*(_QWORD *)(v7 + 24) ^ (*(_QWORD *)(v7 + 24) + 1LL)) & 0xC000000000000000uLL;
    MiSetPfnContainingFrame(48 * v5 - 0x220000000000LL, v5);
    MiSetPageTablePfnBuddy(48 * v5 - 0x220000000000LL, (unsigned __int64)Object, 1);
    *(_QWORD *)(v7 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_QWORD *)v7 & 1) == 0 )
      *(_QWORD *)v7 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = v5 << 12;
    v9 = KiFlushPcid == 0;
    *((_QWORD *)Object + 147) = 1LL;
    *((_QWORD *)Object + 148) = 1LL;
    if ( !v9 )
      v8 |= 2uLL;
    *((_QWORD *)Object + 5) = v8;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36080);
    if ( (*((_DWORD *)Object + 125) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFF7FFFFF);
      MiCopyTopLevelMappings((__int64)Object, *((_QWORD *)Object + 5) >> 12);
    }
    _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFF7F);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36080);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 21384));
    MiReturnWsToExpansionList((__int64)(Object + 512), 1);
    v11 = *(_QWORD *)(*((_QWORD *)Object + 130) + 72LL);
    if ( v11 )
      KeSignalGate(v11, 1LL, v10);
    _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFF7F);
    v12 = (volatile LONG *)(v2 + 21384);
    if ( CurrentIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    else
      ExReleaseSpinLockExclusive(v12, CurrentIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(Object);
  }
  _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFFBF);
  result = HIBYTE(*((_DWORD *)Object + 302)) & 0x30;
  if ( result == 32 )
    return MiReAcquireOutSwappedProcessCommit(Object);
  return result;
}
