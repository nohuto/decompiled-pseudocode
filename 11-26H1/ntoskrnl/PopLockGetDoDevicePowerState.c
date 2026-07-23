/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x1404EB730
 * Callers:
 *     PiControlGetDevicePowerData @ 0x140A93788 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x140B40E80 (NtGetDevicePowerState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopLockGetDoDevicePowerState(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.Header.WaitListHead.Blink);
  LODWORD(a1) = (*(_DWORD *)(a1 + 16) >> 4) & 0xF;
  KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.Header.WaitListHead.Blink, v2);
  return (unsigned int)a1;
}
