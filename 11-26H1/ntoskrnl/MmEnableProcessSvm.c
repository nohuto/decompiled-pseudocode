/*
 * XREFs of MmEnableProcessSvm @ 0x1406E549C
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x1406D1A1C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MmEnableProcessSvm(__int64 a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  KIRQL v4; // al

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, a2, a3);
  BYTE3(Process[2].ContextSwitches) = HIBYTE(LODWORD(Process[2].ContextSwitches)) | 2;
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v4);
}
