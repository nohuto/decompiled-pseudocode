/*
 * XREFs of MiAddPageToFlushMdl @ 0x1402D77E0
 * Callers:
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAddPageToFlushMdl(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // r13d
  int v6; // r15d
  int v10; // r12d
  unsigned int v11; // ebp
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // r15d
  __int64 v15; // r13
  int v16; // eax
  unsigned int v17; // r12d
  __int64 v18; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v21; // ett
  unsigned __int64 v22; // r14
  int v23; // esi
  int v24; // ecx
  int v25; // r10d
  int v26; // r8d
  unsigned int v27; // edx
  char v29; // al
  struct _KPRCB *v30; // r8
  signed __int32 v31; // edx
  bool v32; // zf
  signed __int32 v33; // eax
  int PagePrivilege; // eax
  __int64 v35; // r9
  __int128 v36; // [rsp+30h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int v38; // [rsp+70h] [rbp+8h]
  __int64 v39; // [rsp+90h] [rbp+28h]

  v5 = 0;
  v6 = a4;
  v10 = 0;
  v11 = 2;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v10 = 2;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a3 + 72), 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a3 + 72), 0xFFu);
      v12 = *(unsigned int *)(a3 + 72);
      v13 = v12 & 0xFFFFFFFFBFFFFFFFuLL;
      if ( (v12 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v12 & 0x40000000) == 0 )
            _InterlockedOr((volatile signed __int32 *)(a3 + 72), 0x40000000u);
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v12, a3) )
          {
            HvlNotifyLongSpinWait(v5);
          }
          else
          {
            _mm_pause();
          }
          v12 = *(unsigned int *)(a3 + 72);
        }
        while ( (*(_DWORD *)(a3 + 72) & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(a3 + 72), 0xFFu);
    }
    ++*(_DWORD *)(a3 + 76);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(a3 + 72) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a3 + 72), retaddr);
    *(_QWORD *)a1 = 0LL;
    *(_WORD *)(a1 + 10) = 0;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = v6;
  }
  v14 = (*(_DWORD *)(a2 + 16) >> 10) & 1;
  v39 = a5 & 1;
  v15 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v16 = v10 & 2;
  if ( !v39 )
    v16 = v10;
  v17 = 4;
  v38 = v16;
  if ( !v16 )
    v17 = 8;
  v18 = (unsigned int)-(v16 != 0);
  if ( (ULONG *)v15 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
    {
      v21 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v21 == CachedResidentAvailable )
      {
        v22 = 1LL;
        v23 = 1;
        goto LABEL_26;
      }
    }
  }
  v22 = 1LL;
  v23 = MiChargePartitionResidentAvailable(v15, 1LL, v18);
  if ( !v23 )
    goto LABEL_44;
LABEL_26:
  v24 = v14 & 1;
  if ( !v38 )
    v24 = v14;
  if ( v24 && !(unsigned int)MiChargeCommit(v15, 1LL, v17, a4) )
  {
    if ( (ULONG *)v15 != &MiSystemPartition )
      goto LABEL_58;
    v30 = KeGetCurrentPrcb();
    v31 = v30->CachedResidentAvailable;
    if ( v31 == -1 )
      goto LABEL_58;
    do
    {
      if ( (unsigned __int64)(v31 + 1LL) > 0x100 )
        break;
      v33 = _InterlockedCompareExchange((volatile signed __int32 *)&v30->CachedResidentAvailable, v31 + 1, v31);
      v32 = v31 == v33;
      v31 = v33;
      if ( v32 )
        goto LABEL_44;
    }
    while ( v33 != -1 );
    if ( v31 > 192
      && v31 == _InterlockedCompareExchange((volatile signed __int32 *)&v30->CachedResidentAvailable, 192, v31) )
    {
      v22 = v31 - 192 + 1LL;
    }
    if ( v22 )
LABEL_58:
      _InterlockedAdd64((volatile signed __int64 *)(v15 + 22528), v22);
LABEL_44:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3LL;
  }
  if ( !v39 )
  {
    MiUnlinkPageFromListEx(a2);
    *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
  }
  *(_DWORD *)(a2 + 32) ^= (unsigned __int16)(*(_DWORD *)(a2 + 32) ^ (*(_DWORD *)(a2 + 32) + 1));
  v25 = *(_DWORD *)(a2 + 32);
  if ( (v25 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(a2)
    && (*(_QWORD *)(a2 + 16) & 8LL) != 0
    && (v25 & 0x100000) == 0 )
  {
    *(_QWORD *)(a2 + 16) &= ~8uLL;
  }
  *(_DWORD *)(a2 + 32) = v25 & 0xFFEFFFFF;
  *(_DWORD *)(a2 + 32) |= 0x80000u;
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(a2) & 0x10) != 0 )
  {
    v29 = (*(_QWORD *)(a2 + 40) >> 60) & 7;
    v36 = 0LL;
    if ( v29 == 3 )
    {
      PagePrivilege = MiGetPagePrivilege(a2);
      if ( PagePrivilege )
      {
        v35 = 256LL;
        if ( (PagePrivilege & 0x20) == 0 )
          v35 = 32LL;
        if ( (int)KeSetPagePrivilege((__int64)(a2 + 0x220000000000LL) / 48, 0LL, &v36, v35) < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(a2 + 0x220000000000LL) / 48, 0LL, 0LL);
      }
      MiSetPfnIdentity(a2, 0LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 40) + 48) = (__int64)(a2 + 0x220000000000LL) / 48;
  v26 = *(_DWORD *)(a1 + 44);
  v27 = *(_DWORD *)(a1 + 40) + 1;
  *(_DWORD *)(a1 + 40) = v27;
  if ( v23 != 3 || v27 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return v27 == v26;
  return v11;
}
