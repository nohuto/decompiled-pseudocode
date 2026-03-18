/*
 * XREFs of MiClearCloneParentForkInProgress @ 0x14070FDF8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140961614 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiLockAweVadsExclusive @ 0x1404FEF8C (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1405251E0 (MiUnlockAweVadsExclusive.c)
 */

void __fastcall MiClearCloneParentForkInProgress(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  KIRQL v5; // al

  CurrentThread = KeGetCurrentThread();
  MiLockAweVadsExclusive((__int64)CurrentThread);
  v5 = MiLockWorkingSetExclusive(a1[4], v3, v4);
  *(_QWORD *)(*a1 + 624) = 0LL;
  MiUnlockWorkingSetExclusive(a1[4], v5);
  MiUnlockAweVadsExclusive((__int64)CurrentThread);
}
