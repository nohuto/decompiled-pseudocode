/*
 * XREFs of CmpLockKeyBodyIntoMemory @ 0x14085F780
 * Callers:
 *     CmOpenKeyForBugCheckRecovery @ 0x140854980 (CmOpenKeyForBugCheckRecovery.c)
 * Callees:
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 */

__int64 __fastcall CmpLockKeyBodyIntoMemory(__int64 a1)
{
  __int64 v1; // r14
  __int64 Pool; // rax
  __int64 v4; // rdi
  int v5; // ebp

  v1 = *(_QWORD *)(a1 + 8);
  Pool = CmpAllocatePool(0x40uLL);
  v4 = Pool;
  if ( Pool )
  {
    *(_QWORD *)Pool = 0LL;
    *(_WORD *)(Pool + 10) = 0;
    *(_DWORD *)(Pool + 40) = 112;
    *(_WORD *)(Pool + 8) = 8 * (((unsigned __int16)((a1 & 0xFFF) + 4207) >> 12) + 6);
    *(_QWORD *)(Pool + 32) = a1 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(Pool + 44) = a1 & 0xFFF;
    v5 = MmProbeAndLockPagesEx(Pool, 4uLL);
    if ( v5 >= 0 )
    {
      *(_QWORD *)(v4 + 64) = 0LL;
      *(_WORD *)(v4 + 74) = 0;
      *(_DWORD *)(v4 + 104) = 312;
      *(_WORD *)(v4 + 72) = 8 * (((unsigned __int16)((v1 & 0xFFF) + 4407) >> 12) + 6);
      *(_QWORD *)(v4 + 96) = v1 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v4 + 108) = v1 & 0xFFF;
      v5 = MmProbeAndLockPagesEx(v4 + 64, 4uLL);
      if ( v5 >= 0 )
      {
        *(_WORD *)(a1 + 48) |= 0x20u;
        v5 = 0;
        *(_QWORD *)(a1 + 104) = v4;
        return (unsigned int)v5;
      }
      MmUnlockPages((PMDL)v4);
    }
    CmSiFreeMemory((PPRIVILEGE_SET)v4);
    return (unsigned int)v5;
  }
  return (unsigned int)-1073741670;
}
