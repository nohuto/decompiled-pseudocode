/*
 * XREFs of MiReleaseCachedPageLocks @ 0x1402CBF70
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiResolveCachedPageHardFault @ 0x14033BBFC (MiResolveCachedPageHardFault.c)
 *     MiAcquireCachedPageLocks @ 0x1403A3520 (MiAcquireCachedPageLocks.c)
 *     MiCachedPagesMakeHot @ 0x1406FA5F0 (MiCachedPagesMakeHot.c)
 * Callees:
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiMakeSystemCachePtesValid @ 0x1402C7F80 (MiMakeSystemCachePtesValid.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiReleaseCachedPageLocks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v5; // esi
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    v5 = 0;
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
    if ( (*(_QWORD *)v3 & 0xFFFFFFFFFFELL) != 0 )
    {
      v14 = *(_QWORD *)v3 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
      v15 = *(_QWORD *)(8 * v14);
      v6 = 8 * v14;
      if ( v15 == 8 * v14 )
      {
        *(_QWORD *)v3 &= 0xFFFFF00000000001uLL;
      }
      else
      {
        v16 = *(_QWORD *)v15;
        if ( *(_QWORD *)(v15 + 8) != v6 || *(_QWORD *)(v16 + 8) != v15 )
          __fastfail(3u);
        *(_QWORD *)v6 = v16;
        *(_QWORD *)(v16 + 8) = v6;
        if ( *(_QWORD *)v6 == v6 )
        {
          *(_QWORD *)v15 = v15;
          v17 = (_QWORD *)v15;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v6 + 8LL) = v15;
          v17 = *(_QWORD **)(v6 + 8);
          *v17 = v15;
        }
        *(_QWORD *)(v15 + 8) = v17;
        *(_QWORD *)v3 = (v15 >> 3) & 0x1FFFFFFFFFFFFFFELL ^ ((v15 >> 3) & 0x1FFFFFFFFFFFFFFELL ^ *(_QWORD *)v3) & 0xFFFFF00000000001uLL;
      }
    }
    else
    {
      v6 = 0LL;
      *(_DWORD *)(v3 + 32) &= ~0x200000u;
    }
    if ( (*(_QWORD *)(v3 + 40) & 0x10000000000LL) == 0 )
    {
      v7 = (__int64)(*(_QWORD *)(v3 + 8) << 25) >> 16;
      if ( v7 < 0xFFFF800000000000uLL || *((_BYTE *)&MiState + ((v7 >> 39) & 0x1FF) + 46064) != 4 )
        MiRemoveLockedPageChargeAndDecRef(v3);
    }
    if ( v6 )
      *(_DWORD *)(v6 + 16) = 1;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  MiMakeSystemCachePtesValid(a1);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    if ( *(_WORD *)(a1 + 50) )
    {
      v10 = *(_BYTE *)(a1 + 53) & 2;
      v11 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 48) << 12) + (v8 << 25 >> 16 << 25 >> 16);
      if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v10 = (unsigned int)v10 | 5;
      }
      else if ( (*(_DWORD *)(v9 + 184) & 0xF) == 0 )
      {
        v10 = (unsigned int)v10 | 4;
      }
      MiAddWorkingSetEntries(*(_QWORD *)(a1 + 40), v11, *(unsigned __int16 *)(a1 + 50), v10);
      *(_WORD *)(a1 + 50) = 0;
    }
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0
        || v12 < 0xFFFFF6FB7DBED000uLL
        || v12 > 0xFFFFF6FB7DBEDFFFuLL
        || (v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0 && v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v22 = 2 * (unsigned int)((__int64)(v12 + 0x90482413000LL) >> 3);
          _InterlockedAnd(
            (volatile signed __int32 *)&MiState + (v22 >> 5) + 1467,
            ~(2 << (v22 & 0x1F)) & ~(1 << (v22 & 0x1F)));
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v12, 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v21 + 4 * ((v12 >> 3) & 0x1FF)));
      }
      goto LABEL_25;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v19 = *(_DWORD *)(v9 + 184) & 0xF;
    if ( v19 )
    {
      if ( v19 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        goto LABEL_25;
      }
      v20 = 3LL;
      if ( v19 == 5 )
        v20 = 0LL;
    }
    else
    {
      v20 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v20]);
LABEL_25:
    *(_BYTE *)(a1 + 53) |= 4u;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 40), *(unsigned __int8 *)(a1 + 52));
}
