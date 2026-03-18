/*
 * XREFs of MiLockTransitionLeafPageEx @ 0x14033E050
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140296850 (MiOutSwapWorkingSetPte.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiGetPageProtection @ 0x1403061E4 (MiGetPageProtection.c)
 *     MiSharePagesLockPageTable @ 0x1403072AC (MiSharePagesLockPageTable.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiUpdatePrefetchPriority @ 0x1403149AC (MiUpdatePrefetchPriority.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiActOnTransitionPte @ 0x14033C8B0 (MiActOnTransitionPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033CED4 (MiSetProtectionOnTransitionPte.c)
 *     MiCopyPageTablePageContents @ 0x14033CFD0 (MiCopyPageTablePageContents.c)
 *     MiGetPageForWriteCluster @ 0x14033DC08 (MiGetPageForWriteCluster.c)
 *     MiDecommitHandleTransitionPte @ 0x14033DDD4 (MiDecommitHandleTransitionPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MiAccessCheck @ 0x1403A69D0 (MiAccessCheck.c)
 *     MiResolveTransitionFault @ 0x1403A6F04 (MiResolveTransitionFault.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MiProtectPagedPool @ 0x1404B84A4 (MiProtectPagedPool.c)
 *     MiMakeTransitionHeatBatch @ 0x14050A470 (MiMakeTransitionHeatBatch.c)
 *     MiDiscardPteTransitionPage @ 0x1405287F0 (MiDiscardPteTransitionPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E3E20 (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPte @ 0x1406E5400 (MiWalkResetCommitPte.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407004D4 (MiQueryVaPhysicalContiguity.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070A464 (MiStoreDiscardPoisonedPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14070B50C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402AA2EC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockTransitionLeafPageEx(ULONG_PTR BugCheckParameter2, char *a2, char a3)
{
  unsigned __int64 v6; // r11
  __int64 v7; // r9
  unsigned __int64 v8; // r8
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
        while ( (v10 & 1) != 0 || v10 && qword_140E2D740 && (qword_140E2D740 & v10) == 0 );
        v11 = v10;
        if ( qword_140E2D740 && (v10 & 0x10) == 0 )
          v11 = v10 & qword_140E2D748;
        v12 = v7 & (v11 >> 12);
        v13 = v8 + 48 * v12;
        if ( (unsigned __int64)a2 <= 1 )
          break;
        v21 = MiSafeLockPage(v12, 6 * v12);
        *a2 = v21;
        v7 = 0xFFFFFFFFFFLL;
        v8 = 0xFFFFDE0000000000uLL;
        v9 = 0xFFFFF6FB7DBED7F8uLL;
        v6 = 0xFFFFDE0000000028uLL;
        if ( v21 != 17 )
          goto LABEL_18;
      }
    }
    while ( v12 > qword_140E2D7A0 || (*(_QWORD *)(v6 + 48 * v12) & 0x40000000000000LL) == 0 );
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
  if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
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
