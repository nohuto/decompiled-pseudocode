/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x1402D6BD0
 * Callers:
 *     MiFillNoReservationCluster @ 0x1402D4A24 (MiFillNoReservationCluster.c)
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x14033FC88 (MiGetPageForWriteCluster.c)
 *     MiBuildMappedClusterFillMdl @ 0x14042AA84 (MiBuildMappedClusterFillMdl.c)
 *     MiAddToReservationCluster @ 0x14046BBE0 (MiAddToReservationCluster.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rbp
  int v5; // r12d
  __int64 v6; // r9
  int v7; // r13d
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v10; // ett
  unsigned __int64 v11; // rsi
  unsigned int v12; // r15d
  int v13; // eax
  int v14; // r10d
  char v16; // al
  struct _KPRCB *v17; // r8
  signed __int32 v18; // edx
  bool v19; // zf
  signed __int32 v20; // eax
  int PagePrivilege; // eax
  __int64 v22; // r9
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+78h] [rbp+10h]

  v4 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  if ( (a2 & 1) == 0 )
  {
    v5 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1;
    v6 = 4LL;
    v7 = a2 & 2;
    if ( (a2 & 2) == 0 )
      v6 = 8LL;
    v24 = v6;
    if ( (ULONG *)v4 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
      {
        v10 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v10 == CachedResidentAvailable )
        {
          v11 = 1LL;
          v12 = 1;
          goto LABEL_9;
        }
      }
    }
    v11 = 1LL;
    v12 = MiChargePartitionResidentAvailable(v4, 1LL, (unsigned int)-(v7 != 0));
    if ( v12 )
    {
      v6 = v24;
LABEL_9:
      v13 = v5 & 1;
      if ( !v7 )
        v13 = v5;
      if ( !v13 || (unsigned int)MiChargeCommit(v4, 1LL, (unsigned int)v6, v6) )
        goto LABEL_13;
      if ( (ULONG *)v4 != &MiSystemPartition )
        goto LABEL_36;
      v17 = KeGetCurrentPrcb();
      v18 = v17->CachedResidentAvailable;
      if ( v18 == -1 )
        goto LABEL_36;
      do
      {
        if ( (unsigned __int64)(v18 + 1LL) > 0x100 )
          break;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)&v17->CachedResidentAvailable, v18 + 1, v18);
        v19 = v18 == v20;
        v18 = v20;
        if ( v19 )
          return 0LL;
      }
      while ( v20 != -1 );
      if ( v18 > 192
        && v18 == _InterlockedCompareExchange((volatile signed __int32 *)&v17->CachedResidentAvailable, 192, v18) )
      {
        v11 = v18 - 192 + 1LL;
      }
      if ( v11 )
LABEL_36:
        _InterlockedAdd64((volatile signed __int64 *)(v4 + 22528), v11);
    }
    return 0LL;
  }
  v12 = 1;
LABEL_13:
  if ( (a2 & 4) == 0 )
  {
    MiUnlinkPageFromListEx(BugCheckParameter2);
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  }
  *(_DWORD *)(BugCheckParameter2 + 32) ^= (unsigned __int16)(*(_DWORD *)(BugCheckParameter2 + 32) ^ (*(_DWORD *)(BugCheckParameter2 + 32) + 1));
  if ( (a2 & 8) == 0 )
  {
    v14 = *(_DWORD *)(BugCheckParameter2 + 32);
    if ( (v14 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(BugCheckParameter2)
      && (*(_QWORD *)(BugCheckParameter2 + 16) & 8LL) != 0
      && (v14 & 0x100000) == 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~8uLL;
    }
    *(_DWORD *)(BugCheckParameter2 + 32) = v14 & 0xFFEFFFFF;
  }
  *(_DWORD *)(BugCheckParameter2 + 32) |= 0x80000u;
  if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(BugCheckParameter2) & 0x10) != 0 )
  {
    v16 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7;
    v23 = 0LL;
    if ( v16 == 3 )
    {
      PagePrivilege = MiGetPagePrivilege(BugCheckParameter2);
      if ( PagePrivilege )
      {
        v22 = 256LL;
        if ( (PagePrivilege & 0x20) == 0 )
          v22 = 32LL;
        if ( (int)KeSetPagePrivilege((__int64)(BugCheckParameter2 + 0x220000000000LL) / 48, 0LL, &v23, v22) < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48, 0LL, 0LL);
      }
      MiSetPfnIdentity(BugCheckParameter2, 0LL);
    }
  }
  return v12;
}
