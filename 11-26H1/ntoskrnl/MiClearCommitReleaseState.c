/*
 * XREFs of MiClearCommitReleaseState @ 0x1406E4244
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiClearCommitReleaseState(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v4; // al

  v4 = MiLockWorkingSetExclusive(a1, a2, a3);
  *(_BYTE *)(a1 + 187) = HIBYTE(*(_DWORD *)(a1 + 184)) & 0xCF;
  MiUnlockWorkingSetExclusive(a1, v4);
}
