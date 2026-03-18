/*
 * XREFs of MiPulseLowAvailableEvent @ 0x1404C73A4
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402A65A8 (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KePulseEvent @ 0x1404C7410 (KePulseEvent.c)
 */

void __fastcall MiPulseLowAvailableEvent(__int64 a1)
{
  volatile LONG *v2; // rdi

  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 352) + 4LL) )
  {
    v2 = (volatile LONG *)(a1 + 16576);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16576));
    if ( !*(_DWORD *)(*(_QWORD *)(a1 + 352) + 4LL) )
      KePulseEvent(*(PRKEVENT *)(a1 + 352), 0, 0);
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  }
}
