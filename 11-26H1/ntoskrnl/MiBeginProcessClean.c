/*
 * XREFs of MiBeginProcessClean @ 0x140313D2C
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E4858 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiOutlawInswaps @ 0x140313C94 (MiOutlawInswaps.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403155B4 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockVadTree @ 0x140326440 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403265D0 (MiLockVadTree.c)
 *     MiFreeWorkingSetSwapContext @ 0x140AC1D44 (MiFreeWorkingSetSwapContext.c)
 */

_BOOL8 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  KIRQL v7; // bp
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi

  v2 = a2 + 1024;
  if ( (*(_DWORD *)(a2 + 500) & 0x20) != 0 )
    return 1LL;
  LOCK_ADDRESS_SPACE();
  v7 = MiLockWorkingSetExclusive(v2, v5, v6);
  MiLockVadTree(3LL);
  _InterlockedOr((volatile signed __int32 *)(a2 + 500), 0x20u);
  LOBYTE(v8) = 17;
  MiUnlockVadTree(3LL, v8);
  if ( (HIBYTE(*(_DWORD *)(a2 + 1208)) & 0x30) != 0x30 )
    *(_BYTE *)(a2 + 1211) = HIBYTE(*(_DWORD *)(a2 + 1208)) & 0xCF;
  MiUnlockWorkingSetExclusive(v2, v7);
  UNLOCK_ADDRESS_SPACE_UNORDERED(a1, a2);
  v9 = MiOutlawInswaps(a2);
  v10 = v9;
  if ( v9 > 2 )
    MiFreeWorkingSetSwapContext(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a2 + 1198)), v9);
  return v10 != 0;
}
