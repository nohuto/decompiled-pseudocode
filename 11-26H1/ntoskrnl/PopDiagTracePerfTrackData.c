/*
 * XREFs of PopDiagTracePerfTrackData @ 0x140AF4FB0
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PopReadRegKeyValue @ 0x1404ECAE8 (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopComputeDerivedHiberStats @ 0x140AF5758 (PopComputeDerivedHiberStats.c)
 *     PopQpcTimeInMs @ 0x140C06CF0 (PopQpcTimeInMs.c)
 */

char __fastcall PopDiagTracePerfTrackData(__int16 a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int64 v3; // rsi
  int v4; // ecx
  int v5; // eax
  unsigned __int64 v6; // rax
  __int16 v7; // cx
  int v8; // r8d
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // r8d
  int v12; // r8d
  unsigned __int64 v13; // rax
  ULONG v14; // r9d
  ULONG *v15; // rax
  __int64 v16; // rdx
  int *v17; // rcx
  const EVENT_DESCRIPTOR *v18; // rdx
  int v19; // eax
  unsigned int v20; // r14d
  unsigned __int64 v21; // rax
  __int16 v22; // cx
  int v23; // r8d
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  int v26; // r8d
  int v27; // r8d
  unsigned __int64 v28; // rax
  __int16 v29; // cx
  ULONG *p_Size; // rax
  __int64 v31; // rdx
  int *v32; // rcx
  int v34; // [rsp+38h] [rbp-89h] BYREF
  int v35; // [rsp+3Ch] [rbp-85h] BYREF
  int v36; // [rsp+40h] [rbp-81h] BYREF
  int v37; // [rsp+44h] [rbp-7Dh] BYREF
  int v38; // [rsp+48h] [rbp-79h] BYREF
  __int64 v39; // [rsp+50h] [rbp-71h] BYREF
  int v40; // [rsp+58h] [rbp-69h] BYREF
  int v41; // [rsp+5Ch] [rbp-65h] BYREF
  int v42; // [rsp+60h] [rbp-61h] BYREF
  int v43; // [rsp+64h] [rbp-5Dh] BYREF
  __int128 v44; // [rsp+68h] [rbp-59h] BYREF
  int v45; // [rsp+78h] [rbp-49h] BYREF
  __int16 v46; // [rsp+7Ch] [rbp-45h]
  __int16 v47; // [rsp+7Eh] [rbp-43h]
  __int16 v48; // [rsp+80h] [rbp-41h]
  __int16 v49; // [rsp+82h] [rbp-3Fh]
  __int16 v50; // [rsp+84h] [rbp-3Dh]
  __int16 Lock; // [rsp+86h] [rbp-3Bh]
  int v52; // [rsp+88h] [rbp-39h]
  __int16 v53; // [rsp+8Ch] [rbp-35h]
  __int16 v54; // [rsp+8Eh] [rbp-33h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-29h] BYREF
  int *v56; // [rsp+A8h] [rbp-19h]
  __int64 v57; // [rsp+B0h] [rbp-11h]
  int *v58; // [rsp+B8h] [rbp-9h]
  __int64 v59; // [rsp+C0h] [rbp-1h]
  int *v60; // [rsp+C8h] [rbp+7h]
  __int64 v61; // [rsp+D0h] [rbp+Fh]
  int *v62; // [rsp+D8h] [rbp+17h]
  __int64 v63; // [rsp+E0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  v44 = 0LL;
  v39 = 0LL;
  v52 = 0;
  if ( byte_140E67628 )
  {
    LOBYTE(v1) = EtwEventEnabled(
                   *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                   &POP_ETW_EVENT_TRANSITIONTIMES);
    if ( (_BYTE)v1 )
    {
      v3 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
      v41 = PopQpcTimeInMs(&stru_140F10070.Timer.Dpc, &stru_140F10070.Timer.Processor);
      v40 = PopQpcTimeInMs(&stru_140F10070.Timer.TimerListEntry, &stru_140F10070.Timer.TimerListEntry.Blink);
      if ( stru_140F10070.Timer.DueTime.QuadPart )
      {
        v39 = 0LL;
        v36 = PopQpcTimeInMs(&v39, &stru_140F10070.Timer.DueTime);
        v19 = PopQpcTimeInMs(&stru_140F10070.RelativeTimerBias, &stru_140F10070.Timer);
        v18 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFTRACK_STANDBY;
        v34 = v36 + v19;
        v14 = 5;
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&stru_140F10070.SuspendEvent;
        v56 = &v34;
        v58 = &v36;
        v60 = &v40;
        v62 = &v41;
        v57 = 4LL;
        v59 = 4LL;
        v61 = 4LL;
        v63 = 4LL;
LABEL_34:
        LOBYTE(v1) = EtwWrite(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], v18, 0LL, v14, &UserData);
        return (char)v1;
      }
      LOBYTE(v1) = stru_140F10070.PropagateBoostsEntry.Next;
      if ( LODWORD(stru_140F10070.PropagateBoostsEntry.Next) )
      {
        v4 = *(_DWORD *)&stru_140F10070.WaitBlockFill11[80];
        v37 = (4 * LODWORD(stru_140F10070.PropagateBoostsEntry.Next)) & 0x3FFFFF;
        v43 = *(_DWORD *)&stru_140F10070.WaitBlockFill11[80];
        v38 = (unsigned __int64)stru_140F10070.WaitBlock[0].Object / v3;
        LOBYTE(v1) = stru_140F10070.PriorityFloorCounts[0];
        v34 = *(_DWORD *)stru_140F10070.PriorityFloorCounts;
        if ( (a1 & 8) == 0 )
        {
          UserData.Ptr = (ULONGLONG)&v37;
          v56 = &v43;
          *(_QWORD *)&UserData.Size = 4LL;
          v58 = &v38;
          v57 = 4LL;
          v59 = 4LL;
          LOBYTE(v1) = EtwWrite(
                         *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                         &POP_ETW_EVENT_PERFTRACK_HIBERNATE,
                         0LL,
                         3u,
                         &UserData);
          v20 = *(_DWORD *)&stru_140F10070.WaitBlockFill11[96];
          if ( !*(_DWORD *)&stru_140F10070.WaitBlockFill11[96] )
            return (char)v1;
          PopComputeDerivedHiberStats(&stru_140F10070.WaitBlockFill10[8], v3, &v44);
          v45 = v34;
          v21 = (unsigned __int64)stru_140F10070.MutantListHead.Blink >> 8;
          if ( (unsigned __int64)stru_140F10070.MutantListHead.Blink >> 8 > 0x7FFF )
            LOWORD(v21) = 0x7FFF;
          v46 = v21 & 0x7FFF | ((a1 & 0xFFE0) << 10);
          v47 = *(_WORD *)&stru_140F10070.AbOwnedEntryCount;
          if ( *(_QWORD *)&stru_140F10070.AbWaitEntryCount >> 8 >= 0xFFFFuLL )
            v47 = -1;
          v48 = 1000LL * *(_QWORD *)&stru_140F10070.WaitBlockFill11[112] / PopQpcFrequency;
          if ( 1000LL * *(_QWORD *)&stru_140F10070.WaitBlockFill11[112] / PopQpcFrequency >= 0xFFFF )
            v48 = -1;
          v49 = (unsigned __int64)stru_140F10070.SchedulerApc.ApcListEntry.Blink / v3;
          if ( (unsigned __int64)stru_140F10070.SchedulerApc.ApcListEntry.Blink / v3 >= 0xFFFF )
            v49 = -1;
          v50 = v20;
          if ( v20 >= 0xFFFF )
            v50 = -1;
          Lock = stru_140F10070.SuspendEvent.Header.Lock;
          if ( stru_140F10070.SuspendEvent.Header.LockNV >= 0xFFFFu )
            Lock = -1;
          v22 = WORD2(v44);
          v23 = HIDWORD(v44);
          if ( DWORD1(v44) > 0x3FF )
            v22 = 1023;
          v24 = v52 & 0xFFFFFC00 | v22 & 0x3FF;
          if ( HIDWORD(v44) > 0x1FF )
            v23 = 511;
          v25 = 1000
              * (*(_QWORD *)&stru_140F10070.UserAffinityPrimaryGroup
               - (unsigned __int64)stru_140F10070.SavedApcState.ApcListHead[1].Flink)
              / PopQpcFrequency;
          v26 = v24 ^ (v24 ^ (v23 << 10)) & 0x7FC00;
          if ( v25 > 0x1FFF )
            LODWORD(v25) = 0x1FFF;
          v27 = ((_DWORD)v25 << 19) | v26 & 0x7FFFF;
          v28 = (unsigned __int64)stru_140F10070.SuspendEvent.Header.WaitListHead.Blink >> 8;
          v52 = v27;
          if ( (unsigned __int64)stru_140F10070.SuspendEvent.Header.WaitListHead.Blink >> 8 > 0x7FFF )
            LOWORD(v28) = 0x7FFF;
          if ( *(_DWORD *)&stru_140F11D08.ApcStateFill[40] )
            v29 = 0x8000;
          else
            v29 = 0;
          v53 = v29 | v28 & 0x7FFF;
          v54 = *(_WORD *)((char *)&stru_140F10070.ThreadListEntry.Flink + 1);
          if ( (unsigned __int64)stru_140F10070.ThreadListEntry.Flink >> 8 >= 0xFFFF )
            v54 = -1;
          v14 = 6;
          p_Size = &UserData.Size;
          v31 = 6LL;
          v32 = &v45;
          do
          {
            *((_QWORD *)p_Size - 1) = v32++;
            *(_QWORD *)p_Size = 4LL;
            p_Size += 4;
            --v31;
          }
          while ( v31 );
          v18 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFTRACK_RESUME_FROM_HIBERNATE;
          goto LABEL_34;
        }
        if ( qword_140F12AA0 )
        {
          v35 = PopQpcTimeInMs(&qword_140F12AA0, &stru_140F10070.216) + v4;
          if ( (int)PopReadRegKeyValue(
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
                      L"LastLogOffEndTimePerfCounter",
                      8uLL,
                      0,
                      &v39) < 0 )
            v5 = 0;
          else
            v5 = PopQpcTimeInMs(&v39, &stru_140F10070.WaitBlockFill11[88]);
          v42 = v5;
          *(_QWORD *)&UserData.Size = 4LL;
          UserData.Ptr = (ULONGLONG)&v37;
          v57 = 4LL;
          v56 = &v35;
          v59 = 4LL;
          v58 = &v38;
          v60 = &v42;
          v61 = 4LL;
          EtwWrite(
            *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
            &POP_ETW_EVENT_PERFTRACK_HYBRID_SHUTDOWN,
            0LL,
            4u,
            &UserData);
          PopComputeDerivedHiberStats(&stru_140F10070.WaitBlockFill10[8], v3, &v44);
          v45 = v34;
          v6 = (unsigned __int64)stru_140F10070.MutantListHead.Blink >> 8;
          v47 = -1;
          if ( (unsigned __int64)stru_140F10070.MutantListHead.Blink >> 8 > 0x7FFF )
            LOWORD(v6) = 0x7FFF;
          v46 = v6 & 0x7FFF;
          if ( *(_QWORD *)&stru_140F10070.AbWaitEntryCount >> 8 <= 0xFFFFuLL )
            v47 = *(_WORD *)&stru_140F10070.AbOwnedEntryCount;
          v48 = -1;
          if ( 1000LL * *(_QWORD *)&stru_140F10070.WaitBlockFill11[112] / PopQpcFrequency <= 0xFFFF )
            v48 = 1000LL * *(_QWORD *)&stru_140F10070.WaitBlockFill11[112] / PopQpcFrequency;
          v49 = -1;
          if ( (unsigned __int64)stru_140F10070.SchedulerApc.ApcListEntry.Blink / v3 <= 0xFFFF )
            v49 = (unsigned __int64)stru_140F10070.SchedulerApc.ApcListEntry.Blink / v3;
          v50 = -1;
          if ( *(_DWORD *)&stru_140F10070.WaitBlockFill11[96] <= 0xFFFFu )
            v50 = *(_WORD *)&stru_140F10070.WaitBlockFill11[96];
          Lock = -1;
          if ( stru_140F10070.SuspendEvent.Header.LockNV <= 0xFFFFu )
            Lock = stru_140F10070.SuspendEvent.Header.Lock;
          v7 = WORD2(v44);
          v8 = HIDWORD(v44);
          v54 = -1;
          if ( DWORD1(v44) > 0x3FF )
            v7 = 1023;
          v9 = v52 & 0xFFFFFC00 | v7 & 0x3FF;
          if ( HIDWORD(v44) > 0x1FF )
            v8 = 511;
          v10 = 1000
              * (*(_QWORD *)&stru_140F10070.UserAffinityPrimaryGroup
               - (unsigned __int64)stru_140F10070.SavedApcState.ApcListHead[1].Flink)
              / PopQpcFrequency;
          v11 = v9 ^ (v9 ^ (v8 << 10)) & 0x7FC00;
          if ( v10 > 0x1FFF )
            LODWORD(v10) = 0x1FFF;
          v12 = ((_DWORD)v10 << 19) | v11 & 0x7FFFF;
          v13 = (unsigned __int64)stru_140F10070.SuspendEvent.Header.WaitListHead.Blink >> 8;
          v52 = v12;
          if ( (unsigned __int64)stru_140F10070.SuspendEvent.Header.WaitListHead.Blink >> 8 > 0x7FFF )
            LOWORD(v13) = 0x7FFF;
          v53 = v13 & 0x7FFF;
          if ( (unsigned __int64)stru_140F10070.ThreadListEntry.Flink >> 8 <= 0xFFFF )
            v54 = *(_WORD *)((char *)&stru_140F10070.ThreadListEntry.Flink + 1);
          v14 = 6;
          v15 = &UserData.Size;
          v16 = 6LL;
          v17 = &v45;
          do
          {
            *((_QWORD *)v15 - 1) = v17++;
            *(_QWORD *)v15 = 4LL;
            v15 += 4;
            --v16;
          }
          while ( v16 );
          v18 = &POP_ETW_EVENT_PERFTRACK_HYBRID_RESUME;
          goto LABEL_34;
        }
      }
    }
  }
  return (char)v1;
}
