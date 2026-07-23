/*
 * XREFs of MiChargeForLockedPage @ 0x1402D7FE0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  __int64 v5; // rdi
  char v6; // si
  unsigned int v7; // edx
  __int64 v8; // rax
  ULONG *v9; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v12; // ett
  __int64 result; // rax

  v4 = a2 & 1;
  v5 = (unsigned int)-(v4 != 0);
  v6 = 0;
  v7 = 4 * (v4 ^ 1) + 4;
  if ( *(__int64 *)(a1 + 40) < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
    || (a4 = 0x3FFFFFFF78LL, (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL)
    && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
    && (*(_BYTE *)(a1 + 35) & 0x20) != 0 )
  {
    v6 = 1;
  }
  v8 = (*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL;
  v9 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v8);
  if ( !v6 || (result = MiChargeCommit(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v8), 1LL, v7, a4), (_DWORD)result) )
  {
    if ( v9 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
      {
        v12 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v12 == CachedResidentAvailable )
          return 1LL;
      }
    }
    result = MiChargePartitionResidentAvailable(v9, 1LL, v5);
    if ( !(_DWORD)result )
    {
      if ( v6 )
      {
        MiReturnCommit(v9, 1LL, 0LL);
        return 0LL;
      }
    }
  }
  return result;
}
