/*
 * XREFs of MiQueuePageFileExtension @ 0x1404DFC08
 * Callers:
 *     MiIssuePageExtendRequest @ 0x14049E560 (MiIssuePageExtendRequest.c)
 *     MiContractPagingFiles @ 0x1404E1D30 (MiContractPagingFiles.c)
 *     MiContractWsSwapPageFileWorker @ 0x140708F20 (MiContractWsSwapPageFileWorker.c)
 *     MiUpdateExistingPageFile @ 0x140872760 (MiUpdateExistingPageFile.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

LONG __fastcall MiQueuePageFileExtension(__int64 a1, KIRQL a2)
{
  __int64 v2; // rbx
  KIRQL v3; // si
  volatile LONG *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rdx
  volatile LONG *v9; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2;
  if ( a2 == 17 )
  {
    v5 = (volatile LONG *)(v2 + 2112);
    if ( KeGetCurrentIrql() == 2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      v3 = ExAcquireSpinLockExclusive(v5);
  }
  v6 = (_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 87) & 8) != 0 )
  {
    v7 = *(_QWORD **)(v2 + 2328);
    if ( *v7 != v2 + 2320 )
      __fastfail(3u);
    *v6 = v2 + 2320;
    *(_QWORD *)(a1 + 16) = v7;
    *v7 = v6;
    *(_QWORD *)(v2 + 2328) = v6;
  }
  else
  {
    v8 = *(_QWORD **)(v2 + 2344);
    if ( *v8 != v2 + 2336 )
      __fastfail(3u);
    *v6 = v2 + 2336;
    *(_QWORD *)(a1 + 16) = v8;
    *v8 = v6;
    *(_QWORD *)(v2 + 2344) = v6;
    if ( *(_QWORD *)(a1 + 32) != -1LL )
      ++*(_DWORD *)(v2 + 2804);
  }
  v9 = (volatile LONG *)(v2 + 2112);
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  else
    ExReleaseSpinLockExclusive(v9, v3);
  return KeSetEvent((PRKEVENT)(v2 + 2296), 0, 0);
}
