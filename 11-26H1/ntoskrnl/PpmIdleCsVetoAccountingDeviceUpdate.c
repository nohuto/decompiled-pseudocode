/*
 * XREFs of PpmIdleCsVetoAccountingDeviceUpdate @ 0x140420EAC
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x140420E2C (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140420F9C (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

void __fastcall PpmIdleCsVetoAccountingDeviceUpdate(unsigned int a1, char a2)
{
  __int64 v2; // rbx
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // rdx
  KIRQL v7; // di

  v2 = a1;
  v4 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  LOBYTE(v5) = a2;
  LOBYTE(v6) = 1;
  v7 = v4;
  PpmIdleCsVetoAccountingUpdateBlock(448 * v2 + PpmPlatformStates + 80, v6, v5);
  KeReleaseSpinLock(&PpmIdleVetoLock, v7);
}
