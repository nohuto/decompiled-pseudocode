/*
 * XREFs of MmSetAccessLogging @ 0x140707EF0
 * Callers:
 *     PfTAccessTracingCleanup @ 0x140BFEDFC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140BFEEDC (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140BFEF54 (PfTSetTracingPriority.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 */

void __fastcall MmSetAccessLogging(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // rsi
  volatile LONG *v6; // rbp
  KIRQL v7; // al
  KIRQL v8; // r14
  int v9; // eax

  v3 = *a1;
  v6 = (volatile LONG *)(*a1 + 18240LL);
  v7 = ExAcquireSpinLockExclusive(v6);
  *(_DWORD *)(v3 + 18156) = a2;
  v8 = v7;
  *(_DWORD *)(v3 + 18160) = a3;
  if ( a2 )
  {
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    else
      ExReleaseSpinLockExclusive(v6, v7);
    if ( !*(_QWORD *)(v3 + 18168) )
      KiInsertQueueDpc(v3 + 18176, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v9 = *(_DWORD *)(v3 + 18152);
    if ( v9 )
    {
      if ( v9 == 2 )
        *(_DWORD *)(v3 + 18152) = 3;
    }
    else
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v3 + 256) + 40LL)) <= 1 )
        __fastfail(0xEu);
      *(_DWORD *)(v3 + 18152) = 1;
      ExQueueWorkItemToPartition((_QWORD *)(v3 + 18120), 1, 0xFFFFFFFF);
    }
    if ( v8 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    else
      ExReleaseSpinLockExclusive(v6, v8);
  }
}
