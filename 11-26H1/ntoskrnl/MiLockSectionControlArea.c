/*
 * XREFs of MiLockSectionControlArea @ 0x140447C00
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     MmEnoughMemoryForWrite @ 0x140385F80 (MmEnoughMemoryForWrite.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     MmDisableModifiedWriteOfSection @ 0x1403E54E0 (MmDisableModifiedWriteOfSection.c)
 *     MmOnlySystemCacheViewsPresent @ 0x14045E500 (MmOnlySystemCacheViewsPresent.c)
 *     MmChangeSectionBackingFile @ 0x14047B03C (MmChangeSectionBackingFile.c)
 *     MiReferenceExistingControlArea @ 0x14049E0E0 (MiReferenceExistingControlArea.c)
 *     MiForceSectionClosed @ 0x1404A9890 (MiForceSectionClosed.c)
 *     MmGetImageFileSignatureInformation @ 0x1404AB170 (MmGetImageFileSignatureInformation.c)
 *     MiCopyHeaderIfResident @ 0x1404AE5F4 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x1404B705C (MiFlushDataSection.c)
 *     MmIsFileSectionActive @ 0x1404C1FB0 (MmIsFileSectionActive.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockSectionControlArea(__int64 *a1, char a2, unsigned __int8 *a3)
{
  int v3; // ebp
  __int64 *v4; // r14
  unsigned __int8 CurrentIrql; // di
  unsigned int v7; // ebx
  LONG i; // edx
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v12; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2 & 2;
  v4 = a1;
  if ( (a2 & 1) == 0 )
    v4 = a1 + 2;
  while ( 1 )
  {
    if ( v3 )
    {
      *a3 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2C940);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v7 = 0;
        if ( _interlockedbittestandset(&dword_140E2C940, 0x1Fu) )
          v7 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E2C940, CurrentIrql);
        for ( i = dword_140E2C940; (dword_140E2C940 & 0xBFFFFFFF) != 0x80000000; i = dword_140E2C940 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr(&dword_140E2C940, 0x40000000u);
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
        }
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E2C940, CurrentIrql);
      }
      *a3 = CurrentIrql;
    }
    v9 = *v4;
    if ( !*v4 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v9 + 72)) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        dword_140E2C940 = 0;
        return v9;
      }
      else
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
        return v9;
      }
    }
    v10 = *a3;
    if ( (_BYTE)v10 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2C940 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2C940 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
      __writecr8(v10);
    }
  }
  v12 = *a3;
  if ( (_BYTE)v12 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      dword_140E2C940 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      dword_140E2C940 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C940, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v12);
  }
  return 0LL;
}
