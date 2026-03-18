/*
 * XREFs of PpmIdleCsVetoAccountingDeviceUpdate @ 0x14042C7DC
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x14042C75C (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x14042C8CC (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

void __fastcall PpmIdleCsVetoAccountingDeviceUpdate(unsigned int a1, char a2)
{
  __int64 v2; // rbx
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // rdx
  KIRQL v7; // di

  v2 = a1;
  v4 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.KcsanThread);
  LOBYTE(v5) = a2;
  LOBYTE(v6) = 1;
  v7 = v4;
  PpmIdleCsVetoAccountingUpdateBlock(448 * v2 + PpmPlatformStates + 80, v6, v5);
  KeReleaseSpinLock(&stru_140F10070.KcsanThread, v7);
}
