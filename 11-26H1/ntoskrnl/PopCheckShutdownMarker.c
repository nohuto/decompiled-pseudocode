/*
 * XREFs of PopCheckShutdownMarker @ 0x140CD0064
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     PopReadRegKeyValue @ 0x1404ECAE8 (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 *     ZwQuerySystemInformationEx @ 0x1407261D0 (ZwQuerySystemInformationEx.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     PopRecordSleepCheckpointSource @ 0x1407C91D8 (PopRecordSleepCheckpointSource.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1408058F0 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlGetSystemBootStatusEx @ 0x1408059A0 (RtlGetSystemBootStatusEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x140907830 (ExGetFirmwareEnvironmentVariable.c)
 *     PopRecordSleepCheckpoint @ 0x140B2E82C (PopRecordSleepCheckpoint.c)
 *     PopClearSystemSleepCheckpoint @ 0x140B3F7C0 (PopClearSystemSleepCheckpoint.c)
 *     PopReadWheaBootErrorCount @ 0x140CD0764 (PopReadWheaBootErrorCount.c)
 *     PopDiagTraceDirtyTransition @ 0x140CD1D84 (PopDiagTraceDirtyTransition.c)
 *     PopDiagTraceInvalidBootStat @ 0x140CD2924 (PopDiagTraceInvalidBootStat.c)
 */

char __fastcall PopCheckShutdownMarker(__int64 a1)
{
  __int64 v1; // rax
  char v3; // dl
  int SystemBootStatus; // ebx
  int *v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rdx
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
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+5Ch] [rbp-ACh] BYREF
  int v32; // [rsp+60h] [rbp-A8h] BYREF
  int v33; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v35[3]; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  int *v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  int *v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  PVOID *p_Object; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  int *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  int *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  int *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  int *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  char *v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+28h]
  bool *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  int v57; // [rsp+148h] [rbp+40h] BYREF
  struct _LIST_ENTRY **p_Blink; // [rsp+150h] [rbp+48h]
  int v59; // [rsp+158h] [rbp+50h]
  int v60; // [rsp+160h] [rbp+58h]
  struct _LIST_ENTRY **v61; // [rsp+168h] [rbp+60h]
  int v62; // [rsp+170h] [rbp+68h]
  int v63; // [rsp+178h] [rbp+70h]
  unsigned __int8 *v64; // [rsp+180h] [rbp+78h]
  int v65; // [rsp+188h] [rbp+80h]
  int v66; // [rsp+190h] [rbp+88h]
  char *v67; // [rsp+198h] [rbp+90h]
  int v68; // [rsp+1A0h] [rbp+98h]

  v1 = *(_QWORD *)(a1 + 240);
  v24 = 0;
  *(_OWORD *)&v35[1] = 0LL;
  v3 = *(_BYTE *)(v1 + 132);
  v57 = 14;
  p_Blink = &stru_140E66FF0.MutantListHead.Blink;
  v59 = 64;
  v61 = &stru_140E66FF0.SavedApcState.ApcListHead[1].Blink;
  LOBYTE(stru_140E66FF0.GlobalForegroundListEntry.Flink) = v3 & 1;
  v64 = &stru_140E66FF0.PriorityFloorCounts[24];
  v67 = (char *)&stru_140E66FF0.InGlobalForegroundList + 4;
  v60 = 7;
  v62 = 32;
  v63 = 16;
  v65 = 32;
  v66 = 11;
  v68 = 4;
  RtlCheckSystemBootStatusIntegrity((__int64)&stru_140E66FF0.GlobalForegroundListEntry.Flink + 1);
  SystemBootStatus = RtlGetSystemBootStatusEx((__int64)&v57, 4u);
  if ( SystemBootStatus < 0 )
  {
    v5 = &v57;
    v6 = 4LL;
    v7 = &v35[1];
    do
    {
      if ( !*v7 )
        HIDWORD(stru_140E66FF0.ForegroundDpcStackListEntry.Next) |= 1 << *(_BYTE *)v5;
      ++v7;
      v5 += 6;
      --v6;
    }
    while ( v6 );
    ULongFromUser = RtlReadULongFromUser((unsigned int *)0x7FFE02C4);
    LOBYTE(v9) = BYTE1(stru_140E66FF0.GlobalForegroundListEntry.Flink);
    PopDiagTraceInvalidBootStat(
      ULongFromUser,
      HIDWORD(stru_140E66FF0.ForegroundDpcStackListEntry.Next),
      (unsigned int)SystemBootStatus,
      v9);
  }
  stru_140E66FF0.WaitBlock[2] = *(_KWAIT_BLOCK *)&stru_140E66FF0.MutantListHead.Blink;
  *(_OWORD *)&stru_140E66FF0.WaitBlockFill11[144] = *(_OWORD *)&stru_140E66FF0.PriorityFloorCounts[8];
  if ( _mm_srli_si128(*(__m128i *)&stru_140E66FF0.MutantListHead.Blink, 8).m128i_u32[0]
    && (unsigned int)dword_140E07598 > 5
    && tlgKeywordOn((__int64)&dword_140E07598, 0x200000000000LL) )
  {
    v28 = v10;
    v27 = WORD2(v10);
    v39 = &v27;
    v41 = &v28;
    p_Object = &stru_140E66FF0.WaitBlock[2].Object;
    v29 = *(unsigned __int16 *)&stru_140E66FF0.WaitBlockFill11[140];
    v45 = &v29;
    v47 = &v30;
    v31 = *(unsigned __int16 *)&stru_140E66FF0.WaitBlockFill11[142];
    v49 = &v31;
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
      (__int64)&dword_140E07598,
      (unsigned __int8 *)byte_1400497D1,
      0LL,
      0LL,
      0xCu,
      &v36);
  }
  *(_OWORD *)&stru_140E66FF0.ThreadFlags2 = *(_OWORD *)&stru_140E66FF0.SavedApcStateFill[24];
  *(_OWORD *)&stru_140E66FF0.QueueListEntry.Blink = *(_OWORD *)&stru_140E66FF0.SavedApcStateFill[40];
  stru_140E66FF0.SuspendEvent.Header.WaitListHead = *(LIST_ENTRY *)&stru_140E66FF0.SavedApcStateFill[24];
  stru_140E66FF0.ThreadListEntry = *(_LIST_ENTRY *)&stru_140E66FF0.SavedApcStateFill[40];
  *(_OWORD *)&stru_140E66FF0.Process = *(_OWORD *)&stru_140E66FF0.MutantListHead.Blink;
  *(_OWORD *)&stru_140E66FF0.UserAffinityPrimaryGroup = *(_OWORD *)&stru_140E66FF0.SchedulerSharedSystemSlot;
  *(_OWORD *)&stru_140E66FF0.Affinity = *(_OWORD *)&stru_140E66FF0.IoSelfBoostsEntry.Next;
  *(_OWORD *)&stru_140E66FF0.NpxState = *(_OWORD *)&stru_140E66FF0.PriorityFloorCounts[8];
  *(_OWORD *)&stru_140E66FF0.WaitBlockFill11[160] = *(_OWORD *)&stru_140E66FF0.PriorityFloorCounts[24];
  *(_OWORD *)&stru_140E66FF0.Spare18 = *(_OWORD *)&stru_140E66FF0.AbCompletedIoQoSBoostCount;
  *(_OWORD *)&stru_140E66FF0.SchedulerApcFill5[64] = *(_OWORD *)&stru_140E66FF0.PriorityFloorCounts[24];
  *(_OWORD *)&stru_140E66FF0.SchedulerApcFill5[80] = *(_OWORD *)&stru_140E66FF0.AbCompletedIoQoSBoostCount;
  if ( (ExpSysDbgLock.SchedulerApcFill5[72] & 4) != 0 )
    LOBYTE(stru_140E66FF0.QueueListEntry.Flink) &= ~1u;
  if ( (*(_WORD *)&stru_140F10828.WaitBlockFill11[100] & 0x200) != 0 )
    LOBYTE(stru_140E66FF0.QueueListEntry.Flink) |= 1u;
  v13 = BYTE6(stru_140E66FF0.QueueListEntry.Flink) & 0xDF;
  BYTE6(stru_140E66FF0.QueueListEntry.Flink) &= ~0x20u;
  if ( *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[104] && (stru_140E66FF0.WaitBlockFill6[111] & 4) != 0 )
  {
    BYTE6(stru_140E66FF0.QueueListEntry.Flink) = v13 | 0x20;
    *(_QWORD *)&stru_140E66FF0.ThreadFlags2 = stru_140E66FF0.WaitBlock[2].WaitListEntry.Flink;
  }
  LOBYTE(stru_140E66FF0.SystemAffinityTokenListHead.Next) = (stru_140E66FF0.SavedApcStateFill[38] & 0x10) != 0;
  v35[0] = WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  v33 = (__int64)stru_140E66FF0.QueueListEntry.Flink & 1;
  result = ZwUpdateWnfStateData((__int64)v35, (__int64)&v33);
  if ( (*(_WORD *)&stru_140F10828.WaitBlockFill11[100] & 0x400) != 0 )
  {
    WORD2(stru_140E66FF0.QueueListEntry.Flink) = 1;
    result = (__int64)stru_140E66FF0.QueueListEntry.Flink & 0xF | 0x50;
    LOBYTE(stru_140E66FF0.QueueListEntry.Flink) = result;
  }
  if ( (*(_DWORD *)&stru_140F10828.WaitBlockFill11[100] & 0x20000000) != 0 )
  {
    LOBYTE(stru_140E66FF0.QueueListEntry.Flink) |= 2u;
    stru_140E66FF0.LastXStateSaveDebugInfo = 1LL;
  }
  if ( ((__int64)stru_140E66FF0.QueueListEntry.Flink & 1) != 0 )
  {
    LODWORD(v34) = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable(
                (__int64)L"*,",
                (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
                (int)&v24,
                (int)&v34,
                0LL) < 0 )
    {
      v18 = stru_140E66FF0.WaitBlockFill7[162];
      stru_140E66FF0.WaitBlockFill7[161] = stru_140E66FF0.WaitBlockFill7[161] & 0xF3 | 8;
      PopRecordSleepCheckpointSource(2, v15, v16, v17);
    }
    else
    {
      v18 = v24;
      stru_140E66FF0.WaitBlockFill7[162] = v24;
      stru_140E66FF0.WaitBlockFill7[161] = stru_140E66FF0.WaitBlockFill7[161] & 0xF3 | 4;
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
        LODWORD(stru_140E66FF0.ReadOperationCount) = *(_DWORD *)(v23 + 56);
        stru_140E66FF0.WriteOperationCount = *(_QWORD *)(v23 + 64);
        stru_140E66FF0.OtherOperationCount = *(_QWORD *)(v23 + 72);
        stru_140E66FF0.ReadTransferCount = *(_QWORD *)(v23 + 80);
        stru_140E66FF0.WriteTransferCount = *(_QWORD *)(v23 + 88);
      }
    }
    LODWORD(stru_140E66FF0.InGlobalUpdateVpThreadPriorityList) = 0;
    PopReadRegKeyValue(
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
      L"CrashDumpEnabled",
      4uLL,
      4,
      &stru_140E66FF0.InGlobalUpdateVpThreadPriorityList);
    HIDWORD(stru_140E66FF0.InGlobalUpdateVpThreadPriorityList) = 0;
    PopReadRegKeyValue(
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
      L"FilterPages",
      4uLL,
      4,
      (char *)&stru_140E66FF0.InGlobalUpdateVpThreadPriorityList + 4);
    if ( (int)PopReadRegKeyValue(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump",
                L"Info",
                0x30uLL,
                0,
                &stru_140E66FF0.SchedulerAssistPriorityFloor) >= 0
      && !LODWORD(stru_140E66FF0.ReadOperationCount)
      && LODWORD(stru_140E66FF0.KernelShadowStack) )
    {
      LODWORD(stru_140E66FF0.ReadOperationCount) = stru_140E66FF0.KernelShadowStack;
      stru_140E66FF0.WriteOperationCount = (__int64)stru_140E66FF0.KernelShadowStackInitial;
      LODWORD(stru_140E66FF0.OtherTransferCount) = 1;
    }
    LODWORD(stru_140E66FF0.InGlobalForegroundList) = RtlReadULongFromUser((unsigned int *)0x7FFE02C4);
    LOBYTE(stru_140E66FF0.TracingPrivate[0]) = v18;
    stru_140E66FF0.SchedulerAssist = &stru_140E66FF0.WaitBlockFill11[96];
    stru_140E66FF0.QueuedScb = (_KSCB *)&stru_140E66FF0.512;
    *(_QWORD *)&stru_140E66FF0.ThreadTimerDelay = &stru_140E66FF0.WaitBlockFill11[160];
    LODWORD(stru_140E66FF0.AbWaitObject) = ExBootAppErrorDiagCode;
    HIDWORD(stru_140E66FF0.AbWaitObject) = ExBootAppFailureStatus;
    ZwQuerySystemInformation(90LL, (__int64)&stru_140E66FF0.ReservedPreviousReadyTimeValue);
    LODWORD(stru_140E66FF0.Spare35[0]) = 7;
    stru_140E66FF0.Spare35[1] = (unsigned __int64)&stru_140E66FF0.SchedulerApc.Thread;
    if ( (int)ZwQuerySystemInformationEx(72LL, (__int64)stru_140E66FF0.Spare35) >= 0 )
    {
      LODWORD(stru_140E66FF0.WpsFeedback) = HIDWORD(stru_140E66FF0.Spare35[0]);
      if ( HIDWORD(stru_140E66FF0.Spare35[0]) )
      {
        LODWORD(stru_140E66FF0.Spare35[0]) = 8;
        if ( (int)ZwQuerySystemInformationEx(72LL, (__int64)stru_140E66FF0.Spare35) >= 0 )
          HIDWORD(stru_140E66FF0.WpsFeedback) = HIDWORD(stru_140E66FF0.Spare35[0]);
      }
    }
    PopReadWheaBootErrorCount(&stru_140E66FF0.Spare36);
    return PopDiagTraceDirtyTransition(&stru_140E66FF0.880);
  }
  return result;
}
