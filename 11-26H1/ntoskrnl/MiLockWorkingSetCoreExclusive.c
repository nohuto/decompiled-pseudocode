/*
 * XREFs of MiLockWorkingSetCoreExclusive @ 0x1402E0830
 * Callers:
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiAgeWorkingSet @ 0x1402DF150 (MiAgeWorkingSet.c)
 *     MiComputeAgingAmount @ 0x1402E0730 (MiComputeAgingAmount.c)
 *     MiAgePte @ 0x1402E0900 (MiAgePte.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403C3C80 (MiPeriodicTrimWorkingSet.c)
 *     MiDrainOldAccessBuffers @ 0x1403C4E00 (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x1403C508C (MiDrainSystemAccessLog.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C38A4 (MmQuerySystemWorkingSetInformation.c)
 *     MiCopyWorkingSetFields @ 0x1406E9088 (MiCopyWorkingSetFields.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall MiLockWorkingSetCoreExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v3 = (int *)&unk_140E379C0;
  else
    v3 = (int *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v4 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(v3, 0xFFu);
    v5 = (unsigned int)*v3;
    v6 = v5 & 0xFFFFFFFFBFFFFFFFuLL;
    if ( (v5 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v5 & 0x40000000) == 0 )
          _InterlockedOr(v3, 0x40000000u);
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6, v5, a3) )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
        v5 = (unsigned int)*v3;
      }
      while ( (*v3 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3, 0xFFu);
  }
}
