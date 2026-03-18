/*
 * XREFs of MiPulseCommitSignal @ 0x1405098B4
 * Callers:
 *     MiChargeCommitSlow @ 0x1402F4DE8 (MiChargeCommitSlow.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KePulseEvent @ 0x1404C7410 (KePulseEvent.c)
 */

void __fastcall MiPulseCommitSignal(__int64 a1)
{
  volatile LONG *v2; // rdi
  volatile LONG *v3; // rcx
  KIRQL v4; // si

  v2 = (volatile LONG *)(a1 + 17272);
  v3 = (volatile LONG *)(a1 + 17272);
  if ( KeGetCurrentIrql() == 2 )
  {
    v4 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  }
  else
  {
    v4 = ExAcquireSpinLockExclusive(v3);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 376) + 4LL) )
    KePulseEvent(*(PRKEVENT *)(a1 + 376), 0, 0);
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 384) + 4LL) && *(_QWORD *)(a1 + 23448) == *(_QWORD *)(a1 + 17224) )
    KePulseEvent(*(PRKEVENT *)(a1 + 384), 0, 0);
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v4);
}
