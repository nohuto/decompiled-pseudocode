/*
 * XREFs of MmInSwapProcess @ 0x140485F04
 * Callers:
 *     KiInSwapProcesses @ 0x140485E14 (KiInSwapProcesses.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiSetPageTablePfnBuddy @ 0x1402A4030 (MiSetPageTablePfnBuddy.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiCopyTopLevelMappings @ 0x140344208 (MiCopyTopLevelMappings.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiReturnWsToExpansionList @ 0x140476F90 (MiReturnWsToExpansionList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceInswapProcess @ 0x1406C85C8 (EtwTraceInswapProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E9508 (MiReAcquireOutSwappedProcessCommit.c)
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
    v2 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * Object[599]);
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36200);
    if ( (*((_DWORD *)Object + 125) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFF7FFFFF);
      MiCopyTopLevelMappings((__int64)Object, *((_QWORD *)Object + 5) >> 12);
    }
    _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFF7F);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36200);
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
