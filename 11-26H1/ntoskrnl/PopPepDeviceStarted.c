/*
 * XREFs of PopPepDeviceStarted @ 0x1404E4194
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1404E3FF0 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     PopPepInitializeVetoMasks @ 0x1404DB10C (PopPepInitializeVetoMasks.c)
 */

void __fastcall PopPepDeviceStarted(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_DWORD *)(a1 + 172) = 1;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64), v2);
  if ( PopPepPlatformState )
    PopPepInitializeVetoMasks(a1, *(_DWORD *)PpmPlatformStates);
}
