/*
 * XREFs of MiLockSectionControlArea @ 0x14044FAD0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     MmEnoughMemoryForWrite @ 0x1403841D0 (MmEnoughMemoryForWrite.c)
 *     MmFlushSection @ 0x14039AA40 (MmFlushSection.c)
 *     MmDisableModifiedWriteOfSection @ 0x1403E22F0 (MmDisableModifiedWriteOfSection.c)
 *     MmOnlySystemCacheViewsPresent @ 0x140465540 (MmOnlySystemCacheViewsPresent.c)
 *     MmChangeSectionBackingFile @ 0x1404816CC (MmChangeSectionBackingFile.c)
 *     MiReferenceExistingControlArea @ 0x1404A4A50 (MiReferenceExistingControlArea.c)
 *     MiForceSectionClosed @ 0x1404B0200 (MiForceSectionClosed.c)
 *     MmGetImageFileSignatureInformation @ 0x1404B1AE0 (MmGetImageFileSignatureInformation.c)
 *     MiCopyHeaderIfResident @ 0x1404B51A4 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x1404BD87C (MiFlushDataSection.c)
 *     MmIsFileSectionActive @ 0x1404C8270 (MmIsFileSectionActive.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140416FD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2C7C0);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        v7 = 0;
        if ( _interlockedbittestandset(&dword_140E2C7C0, 0x1Fu) )
          v7 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E2C7C0, CurrentIrql);
        for ( i = dword_140E2C7C0; (dword_140E2C7C0 & 0xBFFFFFFF) != 0x80000000; i = dword_140E2C7C0 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr(&dword_140E2C7C0, 0x40000000u);
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
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E2C7C0, CurrentIrql);
      }
      *a3 = CurrentIrql;
    }
    v9 = *v4;
    if ( !*v4 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v9 + 72)) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        dword_140E2C7C0 = 0;
        return v9;
      }
      else
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
        return v9;
      }
    }
    v10 = *a3;
    if ( (_BYTE)v10 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E2C7C0 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E2C7C0 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
      __writecr8(v10);
    }
  }
  v12 = *a3;
  if ( (_BYTE)v12 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      dword_140E2C7C0 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      dword_140E2C7C0 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v12);
  }
  return 0LL;
}
