/*
 * XREFs of MiProbeLockFrame @ 0x1402D0680
 * Callers:
 *     MiProbeAndLockPacket @ 0x1402D0300 (MiProbeAndLockPacket.c)
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402D25C0 (ExAcquireRundownProtectionCacheAware.c)
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockPageTablePage @ 0x14031C910 (MiLockPageTablePage.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // r9
  int v9; // r8d
  int v10; // ecx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // edi
  char v14; // di
  __int64 v15; // rax
  ULONG *v16; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v19; // ett
  int v20; // edx
  ULONG_PTR v21; // rcx
  int v22; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 144);
  if ( v5 > qword_140E2D920 || (v6 = 48 * v5 - 0x220000000000LL, (*(_QWORD *)(v6 + 40) & 0x40000000000000LL) == 0) )
  {
    result = MiReferenceIoPages(0, v5, a2, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
    ++stru_140E2ED08.NextProcessor;
    return result;
  }
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v13 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, v5, a3) )
      {
        HvlNotifyLongSpinWait(v13);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v6 + 34) & 7u) <= 1 || !(unsigned __int16)*(_DWORD *)(v6 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++HIDWORD(stru_140E2ED08.QueueListEntry.Flink);
    return 3221225477LL;
  }
  if ( (unsigned __int16)*(_DWORD *)(v6 + 32) >= 0x7FFFu )
    goto LABEL_52;
  v8 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(v6 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(v6 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_19;
  v9 = *(_DWORD *)(v6 + 32);
  v10 = 0;
  v11 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)v9 )
  {
    if ( (_WORD)v9 == 1 )
    {
      if ( v11 || (*(_BYTE *)(v6 + 34) & 8) != 0 )
        v10 = 1;
      if ( !v10 )
        goto LABEL_19;
    }
    else if ( (_WORD)v9 != 2 || !v11 || (*(_BYTE *)(v6 + 34) & 8) == 0 )
    {
      goto LABEL_19;
    }
  }
  v14 = 0;
  if ( *(__int64 *)(v6 + 40) < 0 && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
  {
    v14 = 1;
  }
  else
  {
    v8 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
      && (*(_BYTE *)(v6 + 35) & 0x20) != 0 )
    {
      v14 = 1;
    }
  }
  v15 = (*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL;
  v16 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v15);
  if ( v14 )
  {
    if ( !(unsigned int)MiChargeCommit(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v15), 1LL, 8LL, v8) )
      goto LABEL_52;
  }
  if ( v16 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
    {
      v19 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v19 == CachedResidentAvailable )
      {
        v20 = 1;
        goto LABEL_49;
      }
    }
  }
  v20 = MiChargePartitionResidentAvailable(v16, 1LL, 0LL);
  if ( !v20 && v14 )
  {
    MiReturnCommit(v16, 1LL, 0LL);
    v20 = 0;
  }
LABEL_49:
  if ( !v20 )
  {
LABEL_52:
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++LODWORD(stru_140E2ED08.QueueListEntry.Blink);
    return 3221225633LL;
  }
LABEL_19:
  *(_DWORD *)(v6 + 32) = (*(_DWORD *)(v6 + 32) + 1) ^ ((*(_DWORD *)(v6 + 32) + 1) ^ *(_DWORD *)(v6 + 32)) & 0xFFFF0000;
  if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && (*(_QWORD *)(v6 + 16) & 8LL) != 0
    && (*(_QWORD *)(v6 + 16) & 0x400LL) == 0 )
  {
    *(_BYTE *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL)) + 803LL) = 1;
  }
  v12 = *(_DWORD *)(v6 + 32);
  if ( (v12 & 0x200000) != 0 && (v12 & 0x80000) == 0 && (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v6 + 232LL));
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(a1 + 104) & 0x1E) == 2
    && (*(_QWORD *)(v6 + 40) & 0x10000000000LL) == 0
    && ((*(_QWORD *)(v6 + 40) >> 60) & 7) != 1
    && (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
    && *(_QWORD *)(a1 + 152) != (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) )
  {
    if ( *(__int64 *)(v6 + 40) < 0 )
      v21 = v6;
    else
      v21 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( !(unsigned int)MiLockPageTablePage(v21) )
    {
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v22);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(v6);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++HIDWORD(stru_140E2ED08.QueueListEntry.Blink);
      return 3221225633LL;
    }
    if ( !_bittest64((const signed __int64 *)(a1 + 96), 0x39u) )
      *(_QWORD *)(a1 + 152) = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL;
    *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) |= 0x100u;
  }
  if ( *(char *)(*(_QWORD *)(a1 + 64) + 10LL) < 0 && *(__int64 *)(v6 + 40) < 0 && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v6 + 16)) + 112LL));
  if ( ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FF) != 0 )
    ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(stru_140E2ED08.ThreadLock
                                                                                    + 8
                                                                                    * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL))
                                                                        + 3176LL));
  return 0LL;
}
