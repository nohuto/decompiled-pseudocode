/*
 * XREFs of MiSyncCommitSignals @ 0x140479400
 * Callers:
 *     MiComputeCommitThresholds @ 0x1404F38EC (MiComputeCommitThresholds.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 */

void __fastcall MiSyncCommitSignals(__int64 a1, int a2)
{
  volatile LONG *v4; // rcx
  KIRQL v5; // di
  unsigned __int64 v6; // rcx
  struct _KEVENT *v7; // rcx
  int v8; // eax
  volatile LONG *v9; // rcx

  if ( a2 )
  {
    v5 = 17;
  }
  else
  {
    v4 = (volatile LONG *)(a1 + 17272);
    if ( KeGetCurrentIrql() == 2 )
    {
      v5 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v4);
    }
    else
    {
      v5 = ExAcquireSpinLockExclusive(v4);
    }
  }
  v6 = *(_QWORD *)(a1 + 23104);
  if ( v6 >= *(_QWORD *)(a1 + 17240) )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 376) + 4LL);
    if ( v6 < *(_QWORD *)(a1 + 17248) )
    {
      if ( v8 == 1 )
      {
        KeResetEvent(*(PRKEVENT *)(a1 + 376));
        KeResetEvent(*(PRKEVENT *)(a1 + 384));
      }
    }
    else
    {
      if ( !v8 )
        KeSetEvent(*(PRKEVENT *)(a1 + 376), 0, 0);
      if ( *(_QWORD *)(a1 + 23448) == *(_QWORD *)(a1 + 17224) )
        KeSetEvent(*(PRKEVENT *)(a1 + 384), 0, 0);
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 368) + 4LL) == 1 )
    {
      v7 = *(struct _KEVENT **)(a1 + 368);
      goto LABEL_20;
    }
  }
  else
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a1 + 368) + 4LL) )
      KeSetEvent(*(PRKEVENT *)(a1 + 368), 0, 0);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 376) + 4LL) == 1 )
    {
      KeResetEvent(*(PRKEVENT *)(a1 + 376));
      v7 = *(struct _KEVENT **)(a1 + 384);
LABEL_20:
      KeResetEvent(v7);
    }
  }
  if ( !a2 )
  {
    v9 = (volatile LONG *)(a1 + 17272);
    if ( v5 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    else
      ExReleaseSpinLockExclusive(v9, v5);
  }
}
