/*
 * XREFs of KiIntPartGetLowestClassProcessorInMask @ 0x140256D68
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140255B30 (PpmParkSteerInterrupts.c)
 *     KiIntSteerCalculateDistribution @ 0x140256910 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14043217C (KiIntSteerChooseInitialTargetProcessors.c)
 *     KiIntSteerCalculateUniformDistribution @ 0x1404C4608 (KiIntSteerCalculateUniformDistribution.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntPartGetLowestClassProcessorInMask(__int64 a1)
{
  int v1; // r11d
  __int64 result; // rax
  int v3; // r8d
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int i; // r8d

  v1 = *(unsigned __int16 *)(a1 + 8);
  if ( (_WORD)v1 || KiIntPartProcessorPriority != 1 && (unsigned int)(KiIntPartProcessorPriority - 2) >= 2 )
    goto LABEL_24;
  if ( KiIntPartProcessorPriority == 3 )
  {
    v3 = *(unsigned __int8 *)KiInterruptEfficiencyClassGroup;
    while ( v3 )
    {
      v4 = *(_QWORD *)a1 & *(_QWORD *)(KiInterruptEfficiencyClassGroup + 8LL * (unsigned int)--v3 + 8);
      if ( v4 )
        goto LABEL_10;
    }
  }
  else
  {
    for ( i = 0; i < *(unsigned __int8 *)KiInterruptEfficiencyClassGroup; ++i )
    {
      v4 = *(_QWORD *)a1 & *(_QWORD *)(KiInterruptEfficiencyClassGroup + 8LL * i + 8);
      if ( v4 )
        goto LABEL_10;
    }
  }
  v4 = 0LL;
LABEL_10:
  if ( !v4 )
    goto LABEL_24;
  if ( KiIntPartProcessorPriority == 2 )
    _BitScanReverse64((unsigned __int64 *)&v5, v4);
  else
    _BitScanForward64((unsigned __int64 *)&v5, v4);
  result = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
           + (unsigned int)(v5 + (v1 << 6)));
  if ( (_DWORD)result == -1 )
  {
LABEL_24:
    if ( *(_QWORD *)a1 )
    {
      _BitScanForward64((unsigned __int64 *)&a1, *(_QWORD *)a1);
      return *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
             + (unsigned int)((v1 << 6) + a1));
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
