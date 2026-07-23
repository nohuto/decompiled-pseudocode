/*
 * XREFs of MiClearZeroContextForceCalibration @ 0x140713030
 * Callers:
 *     MiInitializeZeroEngines @ 0x140B2A06C (MiInitializeZeroEngines.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiClearZeroContextForceCalibration(__int64 a1)
{
  volatile LONG *v2; // rdi
  KIRQL v3; // al

  v2 = (volatile LONG *)(56320LL * *(unsigned int *)(a1 + 56) + 14200 + *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL));
  v3 = ExAcquireSpinLockExclusive(v2);
  *(_BYTE *)(a1 + 163) = 0;
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v3);
}
