/*
 * XREFs of MiLockWorkingSetCoreExclusive @ 0x1402FE7B0
 * Callers:
 *     MiSetVaAgeListEx @ 0x14029D300 (MiSetVaAgeListEx.c)
 *     MiAgeWorkingSet @ 0x1402FD0D0 (MiAgeWorkingSet.c)
 *     MiComputeAgingAmount @ 0x1402FE6B0 (MiComputeAgingAmount.c)
 *     MiAgePte @ 0x1402FE880 (MiAgePte.c)
 *     MiLogPageAccess @ 0x140320930 (MiLogPageAccess.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403B9E10 (MiPeriodicTrimWorkingSet.c)
 *     MiDrainOldAccessBuffers @ 0x1403BAF90 (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x1403BB21C (MiDrainSystemAccessLog.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403BC3E8 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C9E74 (MmQuerySystemWorkingSetInformation.c)
 *     MiCopyWorkingSetFields @ 0x1406E43D8 (MiCopyWorkingSetFields.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall MiLockWorkingSetCoreExclusive(__int64 a1)
{
  int *v1; // rbx
  unsigned int v2; // edi
  int i; // edx

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v1 = (int *)&unk_140E37840;
  else
    v1 = (int *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v2 = 0;
    if ( _interlockedbittestandset(v1, 0x1Fu) )
      v2 = ExpWaitForSpinLockExclusiveAndAcquire(v1, 0xFFu);
    for ( i = *v1; (*v1 & 0xBFFFFFFF) != 0x80000000; i = *v1 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v1, 0x40000000u);
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v1, 0xFFu);
  }
}
