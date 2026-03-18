/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x1404F2150
 * Callers:
 *     PiControlGetDevicePowerData @ 0x140A8EAB8 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x140B3EE50 (NtGetDevicePowerState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopLockGetDoDevicePowerState(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F10070.ResourceIndex);
  LODWORD(a1) = (*(_DWORD *)(a1 + 16) >> 4) & 0xF;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F10070.ResourceIndex, v2);
  return (unsigned int)a1;
}
