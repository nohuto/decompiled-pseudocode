/*
 * XREFs of PopEnableSystemSleepCheckpoint @ 0x140B3CC20
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     PopTraceSleepCheckpointInitFailure @ 0x1407D5DDC (PopTraceSleepCheckpointInitFailure.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x14083DD80 (NtQueryEnvironmentVariableInfoEx.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140B3CD68 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140BFE178 (PopCheckpointSystemSleepUnsafe.c)
 */

__int64 PopEnableSystemSleepCheckpoint()
{
  char v0; // si
  __int32 v1; // eax
  int v2; // edi
  __int32 v3; // eax
  __int64 InterruptTimePrecise; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  PDEVICE_OBJECT v9; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v0 = 0;
  v7 = 0LL;
  unk_140F10F18 = 0;
  _InterlockedExchange((volatile __int32 *)stru_140F10070.Spare35, 0);
  if ( unk_140F10F0C )
    goto LABEL_2;
  if ( (unsigned __int8)PopIsDetailedSleepReliabilityDiagEnabled() )
  {
    v0 = 1;
LABEL_2:
    v1 = 4;
    goto LABEL_8;
  }
  if ( !stru_140F10828.WaitBlockFill5[44] || ((__int64)stru_140E66FF0.QueueListEntry.Flink & 0xF0) == 0 )
    return (unsigned int)-1073741271;
  v1 = 1;
LABEL_8:
  _InterlockedExchange((volatile __int32 *)stru_140F10070.Spare35, v1);
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] != 2 )
  {
    v2 = -1073741822;
    v3 = 8;
LABEL_15:
    _InterlockedExchange((volatile __int32 *)stru_140F10070.Spare35, v3);
    PopTraceSleepCheckpointInitFailure();
    return (unsigned int)v2;
  }
  v2 = NtQueryEnvironmentVariableInfoEx(1, &v9, (__int64 *)&v7, &v8);
  if ( v2 < 0 )
    goto LABEL_14;
  if ( v7 <= 0x400 )
  {
    v2 = -1073740716;
    v3 = 9;
    goto LABEL_15;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v10);
  v2 = PopCheckpointSystemSleepUnsafe(0LL);
  if ( v2 < 0 )
  {
LABEL_14:
    v3 = 15;
    goto LABEL_15;
  }
  v5 = RtlGetInterruptTimePrecise(&v10) - InterruptTimePrecise;
  if ( v0 && v5 > 0x186A0 )
  {
    v2 = 258;
    _InterlockedExchange((volatile __int32 *)stru_140F10070.Spare35, 10);
  }
  else
  {
    unk_140F10F18 = 1;
    return 0;
  }
  return (unsigned int)v2;
}
