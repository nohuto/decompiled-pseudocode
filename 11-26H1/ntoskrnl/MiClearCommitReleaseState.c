/*
 * XREFs of MiClearCommitReleaseState @ 0x1406E8EF4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiClearCommitReleaseState(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v4; // al

  v4 = MiLockWorkingSetExclusive(a1, a2, a3);
  *(_BYTE *)(a1 + 187) = HIBYTE(*(_DWORD *)(a1 + 184)) & 0xCF;
  MiUnlockWorkingSetExclusive(a1, v4);
}
