/*
 * XREFs of MiAddPageToFlushMdl @ 0x1402F5760
 * Callers:
 *     MiFlushSubsection @ 0x1403C1390 (MiFlushSubsection.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F60D0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiSetPfnIdentity @ 0x140369440 (MiSetPfnIdentity.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140408680 (MiCanPfnOriginalPteBeLost.c)
 *     KeSetPagePrivilege @ 0x1404B0F70 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAddPageToFlushMdl(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // r13d
  int v6; // r15d
  int v10; // r12d
  unsigned int v11; // ebp
  int i; // edx
  int v13; // r15d
  __int64 v14; // r13
  int v15; // eax
  unsigned int v16; // r12d
  __int64 v17; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v20; // ett
  unsigned __int64 v21; // r14
  int v22; // esi
  int v23; // ecx
  int v24; // r10d
  int v25; // r8d
  unsigned int v26; // edx
  char v28; // al
  struct _KPRCB *v29; // r8
  signed __int32 v30; // edx
  bool v31; // zf
  signed __int32 v32; // eax
  int PagePrivilege; // eax
  __int64 v34; // r9
  __int128 v35; // [rsp+30h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int v37; // [rsp+70h] [rbp+8h]
  __int64 v38; // [rsp+90h] [rbp+28h]

  v5 = 0;
  v6 = a4;
  v10 = 0;
  v11 = 2;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v10 = 2;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a3 + 72), 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a3 + 72), 0xFFu);
      for ( i = *(_DWORD *)(a3 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(a3 + 72) )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a3 + 72), 0x40000000u);
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(a3 + 72), 0xFFu);
    }
    ++*(_DWORD *)(a3 + 76);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *(_DWORD *)(a3 + 72) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a3 + 72), retaddr);
    *(_QWORD *)a1 = 0LL;
    *(_WORD *)(a1 + 10) = 0;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = v6;
  }
  v13 = (*(_DWORD *)(a2 + 16) >> 10) & 1;
  v38 = a5 & 1;
  v14 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v15 = v10 & 2;
  if ( !v38 )
    v15 = v10;
  v16 = 4;
  v37 = v15;
  if ( !v15 )
    v16 = 8;
  v17 = (unsigned int)-(v15 != 0);
  if ( (ULONG *)v14 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
    {
      v20 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v20 == CachedResidentAvailable )
      {
        v21 = 1LL;
        v22 = 1;
        goto LABEL_26;
      }
    }
  }
  v21 = 1LL;
  v22 = MiChargePartitionResidentAvailable(v14, 1LL, v17);
  if ( !v22 )
    goto LABEL_44;
LABEL_26:
  v23 = v13 & 1;
  if ( !v37 )
    v23 = v13;
  if ( v23 && !(unsigned int)MiChargeCommit(v14, 1LL, v16, a4) )
  {
    if ( (ULONG *)v14 != &MiSystemPartition )
      goto LABEL_58;
    v29 = KeGetCurrentPrcb();
    v30 = v29->CachedResidentAvailable;
    if ( v30 == -1 )
      goto LABEL_58;
    do
    {
      if ( (unsigned __int64)(v30 + 1LL) > 0x100 )
        break;
      v32 = _InterlockedCompareExchange((volatile signed __int32 *)&v29->CachedResidentAvailable, v30 + 1, v30);
      v31 = v30 == v32;
      v30 = v32;
      if ( v31 )
        goto LABEL_44;
    }
    while ( v32 != -1 );
    if ( v30 > 192
      && v30 == _InterlockedCompareExchange((volatile signed __int32 *)&v29->CachedResidentAvailable, 192, v30) )
    {
      v21 = v30 - 192 + 1LL;
    }
    if ( v21 )
LABEL_58:
      _InterlockedAdd64((volatile signed __int64 *)(v14 + 22528), v21);
LABEL_44:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3LL;
  }
  if ( !v38 )
  {
    MiUnlinkPageFromListEx(a2);
    *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
  }
  *(_DWORD *)(a2 + 32) ^= (unsigned __int16)(*(_DWORD *)(a2 + 32) ^ (*(_DWORD *)(a2 + 32) + 1));
  v24 = *(_DWORD *)(a2 + 32);
  if ( (v24 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(a2)
    && (*(_QWORD *)(a2 + 16) & 8LL) != 0
    && (v24 & 0x100000) == 0 )
  {
    *(_QWORD *)(a2 + 16) &= ~8uLL;
  }
  *(_DWORD *)(a2 + 32) = v24 & 0xFFEFFFFF;
  *(_DWORD *)(a2 + 32) |= 0x80000u;
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(a2) & 0x10) != 0 )
  {
    v28 = (*(_QWORD *)(a2 + 40) >> 60) & 7;
    v35 = 0LL;
    if ( v28 == 3 )
    {
      PagePrivilege = MiGetPagePrivilege(a2);
      if ( PagePrivilege )
      {
        v34 = 256LL;
        if ( (PagePrivilege & 0x20) == 0 )
          v34 = 32LL;
        if ( (int)KeSetPagePrivilege((__int64)(a2 + 0x220000000000LL) / 48, 0LL, &v35, v34) < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(a2 + 0x220000000000LL) / 48, 0LL, 0LL);
      }
      MiSetPfnIdentity(a2, 0LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 40) + 48) = (__int64)(a2 + 0x220000000000LL) / 48;
  v25 = *(_DWORD *)(a1 + 44);
  v26 = *(_DWORD *)(a1 + 40) + 1;
  *(_DWORD *)(a1 + 40) = v26;
  if ( v22 != 3 || v26 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return v26 == v25;
  return v11;
}
