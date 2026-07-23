/*
 * XREFs of KiHaltOnAddress @ 0x1403E89D8
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1402FF620 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeSignalCallDpcSynchronize @ 0x140307790 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x140307A60 (ExpGetPoolTagInfoTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140307D60 (KiSwapDirectoryTableBaseTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x140308810 (MiDemoteSlabEntriesDpc.c)
 *     MiUpdatePageThresholdsDpc @ 0x1403E7A10 (MiUpdatePageThresholdsDpc.c)
 *     MiJumpStackTarget @ 0x1403E7E30 (MiJumpStackTarget.c)
 *     KiSetSystemTimeDpc @ 0x1403E8090 (KiSetSystemTimeDpc.c)
 *     KeHaltOnAddress @ 0x1403E89C0 (KeHaltOnAddress.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F4E30 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     ExpLimitInsertDpc @ 0x1406D0510 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x1406D8150 (ExpAeThresholdInitWorker.c)
 *     MiAddMemoryDpcTarget @ 0x1406EC7F0 (MiAddMemoryDpcTarget.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1406ED600 (MiFreeUnusedPfnPagesDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1406F79F0 (MiWritePteHighLevelIsr.c)
 *     MiMakeIoRangePermanentDpc @ 0x1406F9690 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationIsr @ 0x140700340 (MiReapplyImportOptimizationIsr.c)
 *     MiDbgCopyMemoryTarget @ 0x140702750 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x14070A9B0 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x140711A80 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 * Callees:
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     HalProcessorIdle @ 0x140727660 (HalProcessorIdle.c)
 */

__int64 __fastcall KiHaltOnAddress(unsigned __int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r9
  __int64 v4; // r11
  signed __int64 *v5; // roff
  signed __int64 v6; // rax
  _QWORD *v7; // rcx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  bool v13; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v17; // eax
  __int64 v18; // rdx
  unsigned __int32 v19; // ett
  _QWORD v20[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-18h]
  int v22; // [rsp+38h] [rbp-10h]
  int v23; // [rsp+3Ch] [rbp-Ch]

  v23 = 0;
  v3 = (_QWORD *)a1;
  if ( (unsigned __int64)(a3 - 1) > 7 || ((a3 - 1) & a3) != 0 )
    return 3221225485LL;
  v20[0] = a1;
  v22 = 0;
  v4 = (a1 >> 5) & 0x7F;
  v20[1] = KeGetCurrentPrcb();
  v5 = &KiHaltOnAddressHashTable[v4];
  _m_prefetchw(v5);
  v6 = *v5;
  v21 = *v5 & 0xFFFFFFFFFFFFFFFCuLL;
  v7 = v20;
  v9 = v6;
  v8 = _InterlockedCompareExchange64(v5, (signed __int64)v20, v6);
  if ( v9 != v8 )
  {
    do
    {
      v7 = (_QWORD *)v8;
      v21 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
      v8 = _InterlockedCompareExchange64(&KiHaltOnAddressHashTable[v4], (signed __int64)v20, v8);
    }
    while ( (_QWORD *)v8 != v7 );
  }
  v10 = a3 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        if ( v12 != 4 )
        {
LABEL_11:
          KiWakeAddressAll();
          goto LABEL_13;
        }
        v13 = *v3 == *a2;
      }
      else
      {
        v13 = *(_DWORD *)v3 == *(_DWORD *)a2;
      }
    }
    else
    {
      v13 = *(_WORD *)v3 == *(_WORD *)a2;
    }
  }
  else
  {
    v13 = *(_BYTE *)v3 == *(_BYTE *)a2;
  }
  if ( !v13 )
    goto LABEL_11;
LABEL_13:
  while ( 1 )
  {
    _disable();
    if ( v22 == 1 )
      break;
    HalProcessorIdle(v7);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v17 = *SchedulerAssist;
    do
    {
      v18 = v17;
      LODWORD(v18) = v17 & 0xFFDFFFFF;
      v19 = v17;
      v17 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v17 & 0xFFDFFFFF, v17);
    }
    while ( v19 != v17 );
    if ( (v17 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v18, SchedulerAssist, v3);
  }
  _enable();
  return 0LL;
}
