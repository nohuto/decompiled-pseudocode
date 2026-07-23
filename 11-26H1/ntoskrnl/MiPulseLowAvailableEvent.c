/*
 * XREFs of MiPulseLowAvailableEvent @ 0x1404C0C58
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402A59C4 (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KePulseEvent @ 0x1404C0CC0 (KePulseEvent.c)
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
