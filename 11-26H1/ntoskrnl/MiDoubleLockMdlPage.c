/*
 * XREFs of MiDoubleLockMdlPage @ 0x1402C7954
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiAreChargesNeededToLockPage @ 0x1402C7DC0 (MiAreChargesNeededToLockPage.c)
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDoubleLockMdlPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned __int64 v7; // r9
  bool v9; // si
  __int64 v10; // rax
  ULONG *v11; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v14; // ett
  int v15; // eax

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v5 = 0;
  v6 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v3 + 24) < 0 );
  }
  if ( (unsigned __int16)*(_DWORD *)(v3 + 32) >= 0x7FFFu )
    goto LABEL_33;
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v3) )
    goto LABEL_9;
  v9 = 0;
  if ( *(__int64 *)(v3 + 40) < 0 && (*(_DWORD *)(v3 + 16) & 0x400LL) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v7 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)(v3 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v3 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
    {
      v9 = (*(_BYTE *)(v3 + 35) & 0x20) != 0;
    }
  }
  v10 = (*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL;
  v11 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v10);
  if ( v9 && !(unsigned int)MiChargeCommit(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v10), 1LL, 8LL, v7) )
    goto LABEL_33;
  if ( v11 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
    {
      v14 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v14 == CachedResidentAvailable )
      {
        v15 = 1;
        goto LABEL_28;
      }
    }
  }
  v15 = MiChargePartitionResidentAvailable(v11, 1LL, 0LL);
  if ( !v15 && v9 )
  {
    MiReturnCommit(v11, 1LL, 0LL);
    v15 = 0;
  }
LABEL_28:
  v6 = v15;
  if ( v15 )
LABEL_9:
    *(_DWORD *)(v3 + 32) = (*(_DWORD *)(v3 + 32) + 1) ^ (*(_DWORD *)(v3 + 32) ^ (*(_DWORD *)(v3 + 32) + 1)) & 0xFFFF0000;
  else
LABEL_33:
    v6 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v6;
}
