/*
 * XREFs of MiLockTransitionLeafPageEx @ 0x1403400D0
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140295DB0 (MiOutSwapWorkingSetPte.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiSharePagesLockPageTable @ 0x1402E932C (MiSharePagesLockPageTable.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiUpdatePrefetchPriority @ 0x1403169DC (MiUpdatePrefetchPriority.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033EF54 (MiSetProtectionOnTransitionPte.c)
 *     MiCopyPageTablePageContents @ 0x14033F050 (MiCopyPageTablePageContents.c)
 *     MiGetPageForWriteCluster @ 0x14033FC88 (MiGetPageForWriteCluster.c)
 *     MiDecommitHandleTransitionPte @ 0x14033FE54 (MiDecommitHandleTransitionPte.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiAccessCheck @ 0x1403A8730 (MiAccessCheck.c)
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiProtectPagedPool @ 0x1404B1CD4 (MiProtectPagedPool.c)
 *     MiMakeTransitionHeatBatch @ 0x140503EE0 (MiMakeTransitionHeatBatch.c)
 *     MiDiscardPteTransitionPage @ 0x14052AE60 (MiDiscardPteTransitionPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E8AD0 (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x1406EA0B0 (MiWalkResetCommitPte.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407051A4 (MiQueryVaPhysicalContiguity.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1407101BC (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402A96FC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockTransitionLeafPageEx(ULONG_PTR BugCheckParameter2, char *a2, char a3)
{
  unsigned __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // r8
  ULONG_PTR v9; // r10
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rcx
  ULONG_PTR v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // ebp
  __int64 v15; // rdx
  _KPROCESS *v17; // rax
  ULONG_PTR v18; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v20; // rax
  char v21; // al
  _KPROCESS *v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  char v26; // dl
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rbx

LABEL_1:
  v6 = 0xFFFFDE0000000028uLL;
  v7 = 0xFFFFFFFFFFLL;
  v8 = 0xFFFFDE0000000000uLL;
  v9 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        do
        {
          v10 = *(_QWORD *)BugCheckParameter2;
          if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
            && BugCheckParameter2 <= v9
            && (v10 & 1) != 0
            && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
          {
            v17 = MiPteHasShadow();
            if ( v17 )
            {
              KernelWaitTime = v17[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v20 = *(_QWORD *)(KernelWaitTime + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
                if ( (v20 & 0x20) != 0 )
                  v18 |= 0x20uLL;
                v10 = v18 | 0x42;
                if ( (v20 & 0x42) == 0 )
                  v10 = v18;
              }
            }
          }
          if ( (unsigned __int64)a2 > 1 && ((v10 & 1) != 0 || (v10 & 0x400) != 0) || (v10 & 0x800) == 0 )
            return 0LL;
        }
        while ( (v10 & 1) != 0 || v10 && qword_140E2D8C0 && (qword_140E2D8C0 & v10) == 0 );
        v11 = v10;
        if ( qword_140E2D8C0 && (v10 & 0x10) == 0 )
          v11 = v10 & qword_140E2D8C8;
        v12 = v7 & (v11 >> 12);
        v13 = v8 + 48 * v12;
        if ( (unsigned __int64)a2 <= 1 )
          break;
        v21 = MiSafeLockPage(v12, 6 * v12, v8);
        *a2 = v21;
        v7 = 0xFFFFFFFFFFLL;
        v8 = 0xFFFFDE0000000000uLL;
        v9 = 0xFFFFF6FB7DBED7F8uLL;
        v6 = 0xFFFFDE0000000028uLL;
        if ( v21 != 17 )
          goto LABEL_18;
      }
    }
    while ( v12 > qword_140E2D920 || (*(_QWORD *)(v6 + 48 * v12) & 0x40000000000000LL) == 0 );
    if ( a2 != (char *)1 )
    {
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      v7 = 0xFFFFFFFFFFLL;
LABEL_18:
      v6 = 0xFFFFDE0000000028uLL;
      v9 = 0xFFFFF6FB7DBED7F8uLL;
      goto LABEL_19;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      return 0LL;
LABEL_19:
    v15 = *(_QWORD *)BugCheckParameter2;
    if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
      && BugCheckParameter2 <= v9
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v22 = MiPteHasShadow();
      if ( v22 )
      {
        v24 = v22[2].KernelWaitTime;
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
          if ( (v25 & 0x20) != 0 )
            v23 |= 0x20uLL;
          v15 = v23 | 0x42;
          if ( (v25 & 0x42) == 0 )
            v15 = v23;
        }
      }
    }
    if ( v15 == v10 )
      break;
    v8 = 0xFFFFDE0000000000uLL;
    if ( (unsigned __int64)a2 > 1 )
    {
      v27 = (unsigned __int8)*a2;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v27 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
        __writecr8(v27);
        goto LABEL_1;
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
  {
    v26 = (a2 == (char *)1) | 2;
    if ( (a3 & 1) == 0 )
      v26 = a2 == (char *)1;
    v13 = MiLockSpecialPurposeMemoryCachedPage(v13, v26);
    if ( !v13 )
    {
      if ( (unsigned __int64)a2 > 1 )
      {
        v28 = (unsigned __int8)*a2;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
        __writecr8(v28);
      }
      return 0LL;
    }
  }
  if ( (unsigned __int64)a2 <= 1
    && (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
    && (*(_QWORD *)(v13 + 40) & 0x10000000000LL) == 0 )
  {
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v10, *(_QWORD *)(v13 + 8));
  }
  return v13;
}
