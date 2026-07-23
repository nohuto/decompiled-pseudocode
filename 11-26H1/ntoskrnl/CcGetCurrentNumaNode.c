/*
 * XREFs of CcGetCurrentNumaNode @ 0x1404C70F0
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140387494 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcAdjustWriteBehindThreadPool @ 0x1405B34A4 (CcAdjustWriteBehindThreadPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetCurrentNumaNode(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] % (unsigned int)CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter )
    return *(_QWORD *)(*(_QWORD *)(a2 + 600) + 8 * v3 + 64);
  else
    return *(_QWORD *)(a1 + 8 * v3 + 128);
}
