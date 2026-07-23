/*
 * XREFs of MiZeroThreadStopZeroing @ 0x1404EF578
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 *     MiZeroThreadEnterWaitState @ 0x1404E6364 (MiZeroThreadEnterWaitState.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementZeroEngineThread @ 0x1402F5CAC (MiDecrementZeroEngineThread.c)
 *     MiZeroThreadContextSetExiting @ 0x140476960 (MiZeroThreadContextSetExiting.c)
 *     MiFlushZeroPageHeatBatch @ 0x14048697C (MiFlushZeroPageHeatBatch.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14049ABC4 (MiDereferenceAnyActiveHugeContext.c)
 *     MiFreeHardwareDescriptor @ 0x140713170 (MiFreeHardwareDescriptor.c)
 */

_BOOL8 __fastcall MiZeroThreadStopZeroing(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  volatile LONG *v4; // rsi
  __int64 v5; // rbx
  KIRQL v6; // bp
  BOOL v7; // ebx

  if ( *(_QWORD *)(a1 + 424) )
  {
    MiFreeHardwareDescriptor(*(_QWORD *)(a1 + 80));
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  MiFlushZeroPageHeatBatch(a1);
  *(_QWORD *)(a1 + 416) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x400u;
  MiDereferenceAnyActiveHugeContext(a1);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = (volatile LONG *)(*(_QWORD *)(v3 + 184) + 14200LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 136) + 48LL);
  v6 = ExAcquireSpinLockExclusive(v4);
  MiDecrementZeroEngineThread(a1);
  if ( (*(_DWORD *)(v5 + 92) || HIDWORD(stru_140E2ED08.Timer.Header.WaitListHead.Flink))
    && (*(_DWORD *)(a1 + 128) & 4) == 0 )
  {
    MiZeroThreadContextSetExiting(a1);
  }
  v7 = (*(_DWORD *)(a1 + 128) & 4) == 0;
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, v6);
  return v7;
}
