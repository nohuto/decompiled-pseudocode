/*
 * XREFs of MiSetZeroPageThreadPriority @ 0x14047D034
 * Callers:
 *     MiZeroThreadContextSetExiting @ 0x14047CFF0 (MiZeroThreadContextSetExiting.c)
 *     MiFlushZeroPageHeatBatch @ 0x14048CE3C (MiFlushZeroPageHeatBatch.c)
 *     MiBackgroundZeroNodePages @ 0x1404976C0 (MiBackgroundZeroNodePages.c)
 *     MiZeroPageMakeHot @ 0x14070EEF0 (MiZeroPageMakeHot.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiSetZeroPageThreadPriority(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  int v4; // ebp
  KIRQL v7; // di
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rax
  volatile LONG *v11; // rbx
  unsigned int v12; // esi

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v7 = 17;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 136LL);
  v9 = 56320LL * *(unsigned int *)(v8 + 56);
  v10 = *(_QWORD *)(v8 + 48);
  v11 = (volatile LONG *)(v9 + *(_QWORD *)(v10 + 16) + 14200LL);
  if ( !(_DWORD)a3 )
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + *(_QWORD *)(v10 + 16) + 14200LL));
  if ( (*(_DWORD *)(a1 + 128) & 8) != 0 )
    v12 = 32;
  else
    v12 = KeSetActualBasePriorityThread((__int64)CurrentThread, a2, a3);
  if ( !v4 )
  {
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    else
      ExReleaseSpinLockExclusive(v11, v7);
  }
  return v12;
}
