/*
 * XREFs of PopPepDeviceStarted @ 0x1404EADE4
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1404EAC40 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     PopPepInitializeVetoMasks @ 0x1404E1A2C (PopPepInitializeVetoMasks.c)
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
