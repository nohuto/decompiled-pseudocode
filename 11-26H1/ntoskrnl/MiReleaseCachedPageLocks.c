/*
 * XREFs of MiReleaseCachedPageLocks @ 0x1402E9F30
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiResolveCachedPageHardFault @ 0x140339B7C (MiResolveCachedPageHardFault.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     MiCachedPagesMakeHot @ 0x1406F5980 (MiCachedPagesMakeHot.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E5E00 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiMakeSystemCachePtesValid @ 0x1402E5F40 (MiMakeSystemCachePtesValid.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiAddWorkingSetEntries @ 0x1402EBAC0 (MiAddWorkingSetEntries.c)
 */

__int64 __fastcall MiReleaseCachedPageLocks(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    v3 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v3);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v1 + 24) < 0 );
    }
    if ( (*(_QWORD *)v1 & 0xFFFFFFFFFFELL) != 0 )
    {
      v12 = *(_QWORD *)v1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
      v13 = *(_QWORD *)(8 * v12);
      v4 = 8 * v12;
      if ( v13 == 8 * v12 )
      {
        *(_QWORD *)v1 &= 0xFFFFF00000000001uLL;
      }
      else
      {
        v14 = *(_QWORD *)v13;
        if ( *(_QWORD *)(v13 + 8) != v4 || *(_QWORD *)(v14 + 8) != v13 )
          __fastfail(3u);
        *(_QWORD *)v4 = v14;
        *(_QWORD *)(v14 + 8) = v4;
        if ( *(_QWORD *)v4 == v4 )
        {
          *(_QWORD *)v13 = v13;
          v15 = (_QWORD *)v13;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v13;
          v15 = *(_QWORD **)(v4 + 8);
          *v15 = v13;
        }
        *(_QWORD *)(v13 + 8) = v15;
        *(_QWORD *)v1 = (v13 >> 3) & 0x1FFFFFFFFFFFFFFELL ^ ((v13 >> 3) & 0x1FFFFFFFFFFFFFFELL ^ *(_QWORD *)v1) & 0xFFFFF00000000001uLL;
      }
    }
    else
    {
      v4 = 0LL;
      *(_DWORD *)(v1 + 32) &= ~0x200000u;
    }
    if ( (*(_QWORD *)(v1 + 40) & 0x10000000000LL) == 0 )
    {
      v5 = (__int64)(*(_QWORD *)(v1 + 8) << 25) >> 16;
      if ( v5 < 0xFFFF800000000000uLL || *((_BYTE *)&MiState + ((v5 >> 39) & 0x1FF) + 46064) != 4 )
        MiRemoveLockedPageChargeAndDecRef(v1);
    }
    if ( v4 )
      *(_DWORD *)(v4 + 16) = 1;
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  MiMakeSystemCachePtesValid(a1);
  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 50) )
    {
      v8 = *(_BYTE *)(a1 + 53) & 2;
      v9 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 48) << 12) + (v6 << 25 >> 16 << 25 >> 16);
      if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v8 = (unsigned int)v8 | 5;
      }
      else if ( (*(_DWORD *)(v7 + 184) & 0xF) == 0 )
      {
        v8 = (unsigned int)v8 | 4;
      }
      MiAddWorkingSetEntries(*(_QWORD *)(a1 + 40), v9, *(unsigned __int16 *)(a1 + 50), v8);
      *(_WORD *)(a1 + 50) = 0;
    }
    v10 = *(_QWORD *)(a1 + 56);
    if ( v10 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0
        || v10 < 0xFFFFF6FB7DBED000uLL
        || v10 > 0xFFFFF6FB7DBEDFFFuLL
        || (v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0 && v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v20 = 2 * (unsigned int)((__int64)(v10 + 0x90482413000LL) >> 3);
          _InterlockedAnd(
            (volatile signed __int32 *)&MiState + (v20 >> 5) + 1467,
            ~(2 << (v20 & 0x1F)) & ~(1 << (v20 & 0x1F)));
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v10, 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v19 + 4 * ((v10 >> 3) & 0x1FF)));
      }
      goto LABEL_25;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = *(_DWORD *)(v7 + 184) & 0xF;
    if ( v17 )
    {
      if ( v17 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        goto LABEL_25;
      }
      v18 = 3LL;
      if ( v17 == 5 )
        v18 = 0LL;
    }
    else
    {
      v18 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v18]);
LABEL_25:
    *(_BYTE *)(a1 + 53) |= 4u;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 40), *(unsigned __int8 *)(a1 + 52));
}
