/*
 * XREFs of MiClearCloneParentForkInProgress @ 0x140714AF4
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiLockAweVadsExclusive @ 0x1404F877C (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x140527850 (MiUnlockAweVadsExclusive.c)
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
