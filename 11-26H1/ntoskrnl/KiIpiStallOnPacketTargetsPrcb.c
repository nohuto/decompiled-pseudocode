/*
 * XREFs of KiIpiStallOnPacketTargetsPrcb @ 0x140253150
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14021C500 (KeQueryTotalCycleTimeThread.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     KiIpiStallOnPacketTargets @ 0x140253B6C (KiIpiStallOnPacketTargets.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KeChangeMemoryAttributes @ 0x140453D18 (KeChangeMemoryAttributes.c)
 *     KeSynchronizeAddressPolicy @ 0x1404C5F18 (KeSynchronizeAddressPolicy.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404CCE24 (KiAdjustUserIsolationDomainThread.c)
 *     KeSynchronizeSecurityDomain @ 0x1404D6B28 (KeSynchronizeSecurityDomain.c)
 *     KiRequestApcInterruptSynchronously @ 0x140522BEC (KiRequestApcInterruptSynchronously.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiIpiStallOnPacketTargetsPrcb(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int i; // ebx
  __int64 j; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx

  result = *(unsigned int *)(a2 + 11648);
  for ( i = 0; (_DWORD)result; result = *(unsigned int *)(a2 + 11648) )
  {
    if ( (++i & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
    {
      if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
      {
LABEL_15:
        HvlNotifyLongSpinWait(i);
        continue;
      }
      for ( j = 0LL; (unsigned int)j < (unsigned int)KeNumberProcessors_0; j = (unsigned int)(j + 1) )
      {
        v6 = KiProcessorBlock[j];
        if ( (*(_BYTE *)(v6 + 35) & 1) != 0 )
        {
          v7 = *(_QWORD *)(v6 + 36600);
          if ( !v7 || !*(_BYTE *)(v7 + 65) || !*(_BYTE *)(v7 + 64) )
            goto LABEL_15;
        }
      }
    }
    _mm_pause();
  }
  return result;
}
