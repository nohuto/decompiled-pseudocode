/*
 * XREFs of MiDoubleLockMdlPage @ 0x1402E5914
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAreChargesNeededToLockPage @ 0x1402E5D80 (MiAreChargesNeededToLockPage.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F60D0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDoubleLockMdlPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned __int64 v6; // r9
  bool v8; // si
  __int64 v9; // rax
  ULONG *v10; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v13; // ett
  int v14; // eax

  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v4 = 0;
  v5 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v2 + 24) < 0 );
  }
  if ( (unsigned __int16)*(_DWORD *)(v2 + 32) >= 0x7FFFu )
    goto LABEL_33;
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v2) )
    goto LABEL_9;
  v8 = 0;
  if ( *(__int64 *)(v2 + 40) < 0 && (*(_DWORD *)(v2 + 16) & 0x400LL) != 0 )
  {
    v8 = 1;
  }
  else
  {
    v6 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)(v2 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v2 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
    {
      v8 = (*(_BYTE *)(v2 + 35) & 0x20) != 0;
    }
  }
  v9 = (*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL;
  v10 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8 * v9);
  if ( v8 && !(unsigned int)MiChargeCommit(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * v9), 1LL, 8LL, v6) )
    goto LABEL_33;
  if ( v10 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
    {
      v13 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v13 == CachedResidentAvailable )
      {
        v14 = 1;
        goto LABEL_28;
      }
    }
  }
  v14 = MiChargePartitionResidentAvailable(v10, 1LL, 0LL);
  if ( !v14 && v8 )
  {
    MiReturnCommit(v10, 1LL, 0LL);
    v14 = 0;
  }
LABEL_28:
  v5 = v14;
  if ( v14 )
LABEL_9:
    *(_DWORD *)(v2 + 32) = (*(_DWORD *)(v2 + 32) + 1) ^ (*(_DWORD *)(v2 + 32) ^ (*(_DWORD *)(v2 + 32) + 1)) & 0xFFFF0000;
  else
LABEL_33:
    v5 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v5;
}
