/*
 * XREFs of PopCheckShutdownMarker @ 0x140CD620C
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PopReadRegKeyValue @ 0x1404E60C8 (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     ZwQuerySystemInformationEx @ 0x14072ADA0 (ZwQuerySystemInformationEx.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     PopRecordSleepCheckpointSource @ 0x1407CC278 (PopRecordSleepCheckpointSource.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x14080B390 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlGetSystemBootStatusEx @ 0x14080B440 (RtlGetSystemBootStatusEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x140A2F990 (ExGetFirmwareEnvironmentVariable.c)
 *     PopRecordSleepCheckpoint @ 0x140B3077C (PopRecordSleepCheckpoint.c)
 *     PopClearSystemSleepCheckpoint @ 0x140B417F0 (PopClearSystemSleepCheckpoint.c)
 *     PopReadWheaBootErrorCount @ 0x140CD690C (PopReadWheaBootErrorCount.c)
 *     PopDiagTraceDirtyTransition @ 0x140CD7F2C (PopDiagTraceDirtyTransition.c)
 *     PopDiagTraceInvalidBootStat @ 0x140CD8ACC (PopDiagTraceInvalidBootStat.c)
 */

char __fastcall PopCheckShutdownMarker(__int64 a1)
{
  __int64 v1; // rax
  char v3; // dl
  int SystemBootStatus; // ebx
  int *v5; // r8
  __int64 v6; // r9
  WNF_STATE_NAME *v7; // rdx
  unsigned int ULongFromUser; // eax
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  char v13; // cl
  char result; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  unsigned __int8 v18; // bl
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int8 v24; // [rsp+48h] [rbp-C0h] BYREF
  char v25; // [rsp+49h] [rbp-BFh] BYREF
  bool v26; // [rsp+4Ah] [rbp-BEh] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int SecureThreadCookie_low; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  int SecureThreadCookie_high; // [rsp+5Ch] [rbp-ACh] BYREF
  int v32; // [rsp+60h] [rbp-A8h] BYREF
  int Buffer; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  WNF_STATE_NAME StateName[3]; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  int *v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  int *v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  struct _LIST_ENTRY **p_Blink; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  int *p_SecureThreadCookie_low; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  int *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  int *p_SecureThreadCookie_high; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  int *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  char *v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+28h]
  bool *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  int v57; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int8 *p_ResourceIndex; // [rsp+150h] [rbp+48h]
  int v59; // [rsp+158h] [rbp+50h]
  int v60; // [rsp+160h] [rbp+58h]
  void *volatile *p_AbWaitObject; // [rsp+168h] [rbp+60h]
  int v62; // [rsp+170h] [rbp+68h]
  int v63; // [rsp+178h] [rbp+70h]
  unsigned __int64 *Spare35; // [rsp+180h] [rbp+78h]
  int v65; // [rsp+188h] [rbp+80h]
  int v66; // [rsp+190h] [rbp+88h]
  unsigned __int8 *v67; // [rsp+198h] [rbp+90h]
  int v68; // [rsp+1A0h] [rbp+98h]

  v1 = *(_QWORD *)(a1 + 240);
  v24 = 0;
  *(_OWORD *)StateName[1].Data = 0LL;
  v3 = *(_BYTE *)(v1 + 132);
  v57 = 14;
  p_ResourceIndex = &stru_140E67200.ResourceIndex;
  v59 = 64;
  p_AbWaitObject = &stru_140E67200.AbWaitObject;
  stru_140E67200.WaitBlock[3].WaitType = v3 & 1;
  Spare35 = stru_140E67200.Spare35;
  v67 = &stru_140E67200.WaitBlockFill11[172];
  v60 = 7;
  v62 = 32;
  v63 = 16;
  v65 = 32;
  v66 = 11;
  v68 = 4;
  RtlCheckSystemBootStatusIntegrity((__int64)&stru_140E67200.WaitBlockFill11[161]);
  SystemBootStatus = RtlGetSystemBootStatusEx((__int64)&v57, 4u);
  if ( SystemBootStatus < 0 )
  {
    v5 = &v57;
    v6 = 4LL;
    v7 = &StateName[1];
    do
    {
      if ( !v7->Data[0] )
        stru_140E67200.WaitBlock[3].SpareLong |= 1 << *(_BYTE *)v5;
      v7 = (WNF_STATE_NAME *)((char *)v7 + 4);
      v5 += 6;
      --v6;
    }
    while ( v6 );
    ULongFromUser = RtlReadULongFromUser((unsigned int *)0x7FFE02C4);
    LOBYTE(v9) = stru_140E67200.WaitBlock[3].BlockState;
    PopDiagTraceInvalidBootStat(ULongFromUser, stru_140E67200.CombinedApcDisable, (unsigned int)SystemBootStatus, v9);
  }
  *(_OWORD *)&stru_140E67200.SuspendEvent.Header.WaitListHead.Blink = *(_OWORD *)&stru_140E67200.ResourceIndex;
  *(_OWORD *)&stru_140E67200.ThreadListEntry.Blink = *(_OWORD *)&stru_140E67200.AutoBoostThreadState;
  *(_OWORD *)&stru_140E67200.MutantListHead.Blink = *(_OWORD *)&stru_140E67200.KcsanThread;
  *(_OWORD *)&stru_140E67200.SchedulerSharedSystemSlot = *(_OWORD *)&stru_140E67200.SchedulerAssistLastYieldBoostTime;
  if ( _mm_srli_si128(*(__m128i *)&stru_140E67200.ResourceIndex, 8).m128i_u32[0]
    && (unsigned int)dword_140E07560 > 5
    && tlgKeywordOn((__int64)&dword_140E07560, 0x200000000000LL) )
  {
    v28 = v10;
    v27 = WORD2(v10);
    v39 = &v27;
    v41 = &v28;
    p_Blink = &stru_140E67200.MutantListHead.Blink;
    SecureThreadCookie_low = LOWORD(stru_140E67200.SecureThreadCookie);
    p_SecureThreadCookie_low = &SecureThreadCookie_low;
    v47 = &v30;
    SecureThreadCookie_high = HIWORD(stru_140E67200.SecureThreadCookie);
    p_SecureThreadCookie_high = &SecureThreadCookie_high;
    v32 = BYTE6(v10);
    v51 = &v32;
    v30 = v10;
    v12 = HIBYTE(v10);
    v37 = v11;
    v25 = v12 & 1;
    v26 = (v12 & 2) != 0;
    v53 = &v25;
    v38 = 8LL;
    v55 = &v26;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 8LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 1LL;
    v56 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07560,
      (unsigned __int8 *)byte_140049DD1,
      0LL,
      0LL,
      0xCu,
      &v36);
  }
  stru_140E67200.880 = *($7CFE901BD4F68CA229DBA1D003ACF329 *)&stru_140E67200.AbWaitObject;
  *(_OWORD *)&stru_140E67200.ReadOperationCount = *(_OWORD *)&stru_140E67200.KernelWaitTime;
  *(_OWORD *)&stru_140E67200.InGlobalUpdateVpThreadPriorityList = *(_OWORD *)&stru_140E67200.AbWaitObject;
  *(_OWORD *)&stru_140E67200.KernelShadowStack = *(_OWORD *)&stru_140E67200.KernelWaitTime;
  *(_OWORD *)&stru_140E67200.IoSelfBoostsEntry.Next = *(_OWORD *)&stru_140E67200.ResourceIndex;
  *(_OWORD *)&stru_140E67200.PriorityFloorCounts[8] = *(_OWORD *)&stru_140E67200.AutoBoostThreadState;
  *(_OWORD *)&stru_140E67200.PriorityFloorCounts[24] = *(_OWORD *)&stru_140E67200.KcsanThread;
  *(_OWORD *)&stru_140E67200.AbCompletedIoQoSBoostCount = *(_OWORD *)&stru_140E67200.SchedulerAssistLastYieldBoostTime;
  *(_OWORD *)&stru_140E67200.SchedulerApcFill5[64] = *(_OWORD *)stru_140E67200.Spare35;
  *(_OWORD *)&stru_140E67200.SchedulerApcFill5[80] = *(_OWORD *)&stru_140E67200.Spare36;
  *(_OWORD *)&stru_140E67200.KernelShadowStackBase = *(_OWORD *)stru_140E67200.Spare35;
  *(_OWORD *)&stru_140E67200.ExtendedFeatureDisableMask = *(_OWORD *)&stru_140E67200.Spare36;
  if ( ((__int64)ExpSysDbgLock.MutantListHead.Flink & 4) != 0 )
    LOBYTE(stru_140E67200.InGlobalForegroundList) &= ~1u;
  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x200) != 0 )
    LOBYTE(stru_140E67200.InGlobalForegroundList) |= 1u;
  v13 = BYTE6(stru_140E67200.InGlobalForegroundList) & 0xDF;
  BYTE6(stru_140E67200.InGlobalForegroundList) &= ~0x20u;
  if ( LODWORD(stru_140E67200.ThreadListEntry.Flink) && (HIBYTE(stru_140E67200.ThreadListEntry.Flink) & 4) != 0 )
  {
    BYTE6(stru_140E67200.InGlobalForegroundList) = v13 | 0x20;
    stru_140E67200.GlobalForegroundListEntry.Flink = stru_140E67200.SuspendEvent.Header.WaitListHead.Blink;
  }
  stru_140E67200.SchedulerApcFill3[56] = (*((_BYTE *)&stru_140E67200.ReservedPreviousReadyTimeValue + 6) & 0x10) != 0;
  StateName[0] = (WNF_STATE_NAME)WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  Buffer = stru_140E67200.InGlobalForegroundList & 1;
  result = ZwUpdateWnfStateData(StateName, &Buffer, 4u, 0LL, 0LL, 0, 0);
  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x400) != 0 )
  {
    WORD2(stru_140E67200.InGlobalForegroundList) = 1;
    result = stru_140E67200.InGlobalForegroundList & 0xF | 0x50;
    LOBYTE(stru_140E67200.InGlobalForegroundList) = result;
  }
  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x20000000) != 0 )
  {
    LOBYTE(stru_140E67200.InGlobalForegroundList) |= 2u;
    *(_QWORD *)&stru_140E67200.SuspendEvent.Header.Lock = 1LL;
  }
  if ( (stru_140E67200.InGlobalForegroundList & 1) != 0 )
  {
    LODWORD(v34) = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable(
                (__int64)L"*,",
                (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
                (int)&v24,
                (int)&v34,
                0LL) < 0 )
    {
      v18 = stru_140E67200.SchedulerApcFill4[66];
      stru_140E67200.SchedulerApcFill4[65] = stru_140E67200.SchedulerApcFill4[65] & 0xF3 | 8;
      PopRecordSleepCheckpointSource(2, v15, v16, v17);
    }
    else
    {
      v18 = v24;
      stru_140E67200.SchedulerApcFill4[66] = v24;
      stru_140E67200.SchedulerApcFill4[65] = stru_140E67200.SchedulerApcFill4[65] & 0xF3 | 4;
      PopRecordSleepCheckpoint(v24, v15, v16, v17);
      PopRecordSleepCheckpointSource(1, v19, v20, v21);
      PopClearSystemSleepCheckpoint(1);
    }
    v22 = *(_QWORD *)(a1 + 240);
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 280);
      if ( v23 )
      {
        LODWORD(stru_140E67200.Spare18) = *(_DWORD *)(v23 + 56);
        stru_140E67200.LastXStateSaveDebugInfo = *(_QWORD *)(v23 + 64);
        *(_QWORD *)&stru_140E67200.ThreadFlags2 = *(_QWORD *)(v23 + 72);
        stru_140E67200.QueueListEntry = *(_LIST_ENTRY *)(v23 + 80);
      }
    }
    *(_DWORD *)&stru_140E67200.SavedApcStateFill[16] = 0;
    PopReadRegKeyValue(
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
      L"CrashDumpEnabled",
      4uLL,
      4,
      &stru_140E67200.SavedApcStateFill[16]);
    *(_DWORD *)&stru_140E67200.SavedApcStateFill[20] = 0;
    PopReadRegKeyValue(
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
      L"FilterPages",
      4uLL,
      4,
      &stru_140E67200.SavedApcStateFill[20]);
    if ( (int)PopReadRegKeyValue(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump",
                L"Info",
                0x30uLL,
                0,
                &stru_140E67200.SavedApcStateFill[24]) >= 0
      && !LODWORD(stru_140E67200.Spare18)
      && *(_DWORD *)&stru_140E67200.SavedApcStateFill[32] )
    {
      LODWORD(stru_140E67200.Spare18) = *(_DWORD *)&stru_140E67200.SavedApcStateFill[32];
      stru_140E67200.LastXStateSaveDebugInfo = *(_QWORD *)&stru_140E67200.SavedApcStateFill[40];
      stru_140E67200.NextProcessor = 1;
    }
    *(_DWORD *)&stru_140E67200.WaitBlockFill11[168] = RtlReadULongFromUser((unsigned int *)0x7FFE02C4);
    LOBYTE(stru_140E67200.UserAffinityPrimaryGroup) = v18;
    stru_140E67200.AffinityVersion = (unsigned __int64)&stru_140E67200.SuspendEvent.Header.WaitListHead.Blink;
    stru_140E67200.Process = (_KPROCESS *)&stru_140E67200.880;
    stru_140E67200.UserAffinity = (_KAFFINITY_EX *)&stru_140E67200.SchedulerApcFill5[64];
    stru_140E67200.Affinity = (_KAFFINITY_EX *)__PAIR64__(ExBootAppFailureStatus, ExBootAppErrorDiagCode);
    ZwQuerySystemInformation(SystemBootEnvironmentInformation, &stru_140E67200.AffinityPrimaryGroup, 0x20u, 0LL);
    *(_DWORD *)&stru_140E67200.SchedulerApcFill5[32] = 7;
    stru_140E67200.SchedulerApc.Reserved[1] = &stru_140E67200.WriteTransferCount;
    if ( ZwQuerySystemInformationEx(
           SystemWatchdogTimerInformation,
           &stru_140E67200.SchedulerApcFill5[32],
           4u,
           &stru_140E67200.SchedulerApcFill5[32],
           8u,
           0LL) >= 0 )
    {
      *(_DWORD *)&stru_140E67200.SchedulerApcFill5[24] = *(_DWORD *)&stru_140E67200.SchedulerApcFill5[36];
      if ( *(_DWORD *)&stru_140E67200.SchedulerApcFill5[36] )
      {
        *(_DWORD *)&stru_140E67200.SchedulerApcFill5[32] = 8;
        if ( ZwQuerySystemInformationEx(
               SystemWatchdogTimerInformation,
               &stru_140E67200.SchedulerApcFill5[32],
               4u,
               &stru_140E67200.SchedulerApcFill5[32],
               8u,
               0LL) >= 0 )
          *(_DWORD *)&stru_140E67200.SchedulerApcFill5[28] = *(_DWORD *)&stru_140E67200.SchedulerApcFill5[36];
      }
    }
    PopReadWheaBootErrorCount(&stru_140E67200.SchedulerApcFill5[48]);
    return PopDiagTraceDirtyTransition(&stru_140E67200.WaitBlockFill11[160]);
  }
  return result;
}
