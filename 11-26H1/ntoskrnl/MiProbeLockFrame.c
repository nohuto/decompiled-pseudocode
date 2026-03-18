/*
 * XREFs of MiProbeLockFrame @ 0x1402EE600
 * Callers:
 *     MiProbeAndLockPacket @ 0x1402EE280 (MiProbeAndLockPacket.c)
 *     MmProbeAndLockSelectedPages @ 0x14039F2E0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReferenceIoPages @ 0x1402EFF98 (MiReferenceIoPages.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402F0540 (ExAcquireRundownProtectionCacheAware.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F60D0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiLockPageTablePage @ 0x14031A8E0 (MiLockPageTablePage.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 a1, int a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // r9
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  char v13; // di
  __int64 v14; // rax
  ULONG *v15; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v18; // ett
  int v19; // edx
  ULONG_PTR v20; // rcx
  int v21; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 > qword_140E2D7A0 || (v5 = 48 * v4 - 0x220000000000LL, (*(_QWORD *)(v5 + 40) & 0x40000000000000LL) == 0) )
  {
    result = MiReferenceIoPages(0, v4, a2, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
    ++stru_140E2EB88.NextProcessor;
    return result;
  }
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v5 + 34) & 7u) <= 1 || !(unsigned __int16)*(_DWORD *)(v5 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++HIDWORD(stru_140E2EB88.QueueListEntry.Flink);
    return 3221225477LL;
  }
  if ( (unsigned __int16)*(_DWORD *)(v5 + 32) >= 0x7FFFu )
    goto LABEL_52;
  v7 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(v5 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(v5 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_19;
  v8 = *(_DWORD *)(v5 + 32);
  v9 = 0;
  v10 = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)v8 )
  {
    if ( (_WORD)v8 == 1 )
    {
      if ( v10 || (*(_BYTE *)(v5 + 34) & 8) != 0 )
        v9 = 1;
      if ( !v9 )
        goto LABEL_19;
    }
    else if ( (_WORD)v8 != 2 || !v10 || (*(_BYTE *)(v5 + 34) & 8) == 0 )
    {
      goto LABEL_19;
    }
  }
  v13 = 0;
  if ( *(__int64 *)(v5 + 40) < 0 && (*(_DWORD *)(v5 + 16) & 0x400LL) != 0 )
  {
    v13 = 1;
  }
  else
  {
    v7 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)(v5 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v5 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
      && (*(_BYTE *)(v5 + 35) & 0x20) != 0 )
    {
      v13 = 1;
    }
  }
  v14 = (*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL;
  v15 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8 * v14);
  if ( v13 )
  {
    if ( !(unsigned int)MiChargeCommit(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * v14), 1LL, 8LL, v7) )
      goto LABEL_52;
  }
  if ( v15 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
    {
      v18 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v18 == CachedResidentAvailable )
      {
        v19 = 1;
        goto LABEL_49;
      }
    }
  }
  v19 = MiChargePartitionResidentAvailable(v15, 1LL, 0LL);
  if ( !v19 && v13 )
  {
    MiReturnCommit(v15, 1LL, 0LL);
    v19 = 0;
  }
LABEL_49:
  if ( !v19 )
  {
LABEL_52:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++LODWORD(stru_140E2EB88.QueueListEntry.Blink);
    return 3221225633LL;
  }
LABEL_19:
  *(_DWORD *)(v5 + 32) = (*(_DWORD *)(v5 + 32) + 1) ^ ((*(_DWORD *)(v5 + 32) + 1) ^ *(_DWORD *)(v5 + 32)) & 0xFFFF0000;
  if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && (*(_QWORD *)(v5 + 16) & 8LL) != 0
    && (*(_QWORD *)(v5 + 16) & 0x400LL) == 0 )
  {
    *(_BYTE *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL)) + 803LL) = 1;
  }
  v11 = *(_DWORD *)(v5 + 32);
  if ( (v11 & 0x200000) != 0 && (v11 & 0x80000) == 0 && (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v5 + 232LL));
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(a1 + 104) & 0x1E) == 2
    && (*(_QWORD *)(v5 + 40) & 0x10000000000LL) == 0
    && ((*(_QWORD *)(v5 + 40) >> 60) & 7) != 1
    && (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
    && *(_QWORD *)(a1 + 152) != (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) )
  {
    if ( *(__int64 *)(v5 + 40) < 0 )
      v20 = v5;
    else
      v20 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( !(unsigned int)MiLockPageTablePage(v20) )
    {
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(v5);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++HIDWORD(stru_140E2EB88.QueueListEntry.Blink);
      return 3221225633LL;
    }
    if ( !_bittest64((const signed __int64 *)(a1 + 96), 0x39u) )
      *(_QWORD *)(a1 + 152) = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL;
    *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) |= 0x100u;
  }
  if ( *(char *)(*(_QWORD *)(a1 + 64) + 10LL) < 0 && *(__int64 *)(v5 + 40) < 0 && (*(_DWORD *)(v5 + 16) & 0x400LL) != 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v5 + 16)) + 112LL));
  if ( ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FF) != 0 )
    ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(stru_140E2EB88.ThreadLock
                                                                                    + 8
                                                                                    * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL))
                                                                        + 3176LL));
  return 0LL;
}
