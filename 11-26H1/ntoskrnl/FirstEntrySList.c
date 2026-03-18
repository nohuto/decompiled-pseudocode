/*
 * XREFs of FirstEntrySList @ 0x140730C80
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiSystemPeriodicTick @ 0x1402A6FA0 (MiSystemPeriodicTick.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MiCreateKernelStackFromNodeCache @ 0x1403D11D4 (MiCreateKernelStackFromNodeCache.c)
 *     MiDrainZeroLookasides @ 0x14045E180 (MiDrainZeroLookasides.c)
 *     MiZeroPageCalibrate @ 0x140710F80 (MiZeroPageCalibrate.c)
 *     PopMarkComponentsBootPhase @ 0x140BFAE30 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall FirstEntrySList(PSLIST_HEADER SListHead)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)SListHead->Region;
  LOBYTE(result) = (unsigned __int8)result & 0xF0;
  return result;
}
