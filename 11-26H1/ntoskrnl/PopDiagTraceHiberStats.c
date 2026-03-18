/*
 * XREFs of PopDiagTraceHiberStats @ 0x140AF5348
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     PpmConvertTime @ 0x1403E63D0 (PpmConvertTime.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1404E7CA4 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     PopComputeDerivedHiberStats @ 0x140AF5758 (PopComputeDerivedHiberStats.c)
 *     PopPotsLogHibernatePerformance @ 0x140AF5820 (PopPotsLogHibernatePerformance.c)
 *     PopQpcTimeInMs @ 0x140C06CF0 (PopQpcTimeInMs.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140C08C90 (PopSstDiagQueryResumeTimestamp.c)
 */

BOOLEAN __fastcall PopDiagTraceHiberStats(int a1)
{
  int v1; // eax
  void *v2; // rdi
  __int64 ResumeTimestamp; // rax
  _KAFFINITY_EX *UserAffinity; // rbx
  ULONG *p_Size; // r15
  unsigned __int64 *v6; // r12
  _BYTE *Data; // r13
  __int64 *v8; // r14
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rax
  int v13; // esi
  ULONG DataSize; // ebx
  BOOLEAN result; // al
  _QWORD DestinationString[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h]
  _KAFFINITY_EX *v18; // [rsp+58h] [rbp-B0h]
  __int128 v19; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v20[480]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+258h] [rbp+150h] BYREF

  LODWORD(v17) = a1;
  v19 = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  v1 = PopOpenPowerKey((__int64)DestinationString);
  v2 = (void *)DestinationString[0];
  if ( v1 < 0 )
    v2 = 0LL;
  ResumeTimestamp = PopSstDiagQueryResumeTimestamp();
  UserAffinity = stru_140F10070.UserAffinity;
  *(_QWORD *)&stru_140F10070.UserAffinityPrimaryGroup = ResumeTimestamp;
  HIDWORD(stru_140F10070.IoSelfBoostsEntry.Next) = dword_140F0FDA4;
  LODWORD(stru_140F10070.IoSelfBoostsEntry.Next) = dword_140F0FE38;
  v18 = stru_140F10070.UserAffinity;
  stru_140F10070.SuspendEvent.Header.LockNV = PopQpcTimeInMs(
                                                &stru_140F10070.Timer.Header.WaitListHead,
                                                &stru_140F10070.Timer.Header.WaitListHead.Blink);
  stru_140F10070.WaitBlock[1].Object = (PVOID)(unsigned int)PopQpcTimeInMs(
                                                              &stru_140F10070.216,
                                                              &stru_140F10070.WaitBlockFill11[88]);
  PopComputeDerivedHiberStats(&stru_140F10070.WaitBlockFill10[8], UserAffinity, &v19);
  p_Size = &UserData.Size;
  DestinationString[0] = 59LL;
  v6 = (unsigned __int64 *)v20;
  Data = v20;
  v8 = &qword_140004D70;
  do
  {
    v9 = *(_DWORD *)v8;
    v10 = *(v8 - 1);
    if ( (*(_DWORD *)v8 & 0x40000000) != 0 )
      v11 = (unsigned __int64 *)&v20[v10 - 8];
    else
      v11 = (unsigned __int64 *)((char *)&stru_140F10070.WaitBlock[0].WaitListEntry.Blink + v10);
    if ( (v9 & 2) != 0 )
      v12 = *v11;
    else
      v12 = *(unsigned int *)v11;
    *v6 = v12;
    if ( v9 < 0 )
    {
      v12 /= (unsigned __int64)UserAffinity;
      *v6 = v12;
    }
    if ( (v9 & 0x10000000) != 0 )
      *v6 = PpmConvertTime(v12, PopQpcFrequency, 0x3E8uLL);
    v13 = *(_DWORD *)v8 & 0x20;
    DataSize = v13 != 0 ? 8 : 4;
    if ( v2 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], (PCWSTR)*(v8 - 2));
      ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, v13 != 0 ? 11 : 4, Data, DataSize);
    }
    *((_QWORD *)p_Size - 1) = Data;
    *p_Size = DataSize;
    Data += 8;
    UserAffinity = v18;
    v8 += 3;
    p_Size[1] = 0;
    ++v6;
    p_Size += 4;
    --DestinationString[0];
  }
  while ( DestinationString[0] );
  stru_140F10070.SchedulerApc.Reserved[0] = (PVOID)((unsigned __int64)stru_140F10070.SchedulerApc.Reserved[0]
                                                  / (unsigned __int64)UserAffinity);
  *(_QWORD *)&stru_140F10070.WaitBlockFill11[16] /= (unsigned __int64)UserAffinity;
  *(_QWORD *)stru_140F10070.PriorityFloorCounts = 1000LL
                                                * *(_QWORD *)&stru_140F10070.UserAffinityPrimaryGroup
                                                / PopQpcFrequency
                                                - *(unsigned int *)&stru_140F10070.WaitBlockFill11[96]
                                                - *(unsigned int *)&stru_140F10070.WaitBlockFill11[104];
  if ( v2 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"KernelResumeIoCpuTime");
    ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &stru_140F10070.SchedulerApcFill5[32], 4u);
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberIoCpuTime");
    ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &stru_140F10070.WaitBlockFill11[16], 4u);
    if ( stru_140F10070.SchedulerApc.SystemArgument2 )
    {
      dword_140F0FD84 += PopQpcTimeInMs(&stru_140F10070.RelativeTimerBias, &stru_140F10070.SchedulerApcFill5[80]);
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HybridBootAnimationTime");
      ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &dword_140F0FD84, 4u);
    }
    *(_QWORD *)&stru_140F10070.PriorityFloorCounts[8] = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ResumeCompleteTimestamp");
    ZwSetValueKey(v2, (PUNICODE_STRING)&DestinationString[1], 0, 0xBu, &stru_140F10070.PriorityFloorCounts[8], 8u);
    ZwClose(v2);
  }
  result = PopPotsLogHibernatePerformance(&stru_140F10070.WaitBlockFill10[8], (unsigned int)v17);
  if ( byte_140E67628 )
  {
    result = EtwEventEnabled(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_HIBER_STATS);
    if ( result )
      return EtwWrite(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_HIBER_STATS,
               0LL,
               0x3Bu,
               &UserData);
  }
  return result;
}
