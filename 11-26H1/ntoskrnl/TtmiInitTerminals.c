/*
 * XREFs of TtmiInitTerminals @ 0x1407F18AC
 * Callers:
 *     TtmInit @ 0x1407EBF08 (TtmInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 */

__int64 TtmiInitTerminals()
{
  __int64 result; // rax
  __int64 v1; // rcx
  const wchar_t *v2; // rax
  int v3; // eax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-39h] BYREF
  __int16 Src; // [rsp+40h] [rbp-29h] BYREF
  char v6; // [rsp+42h] [rbp-27h]
  int v7; // [rsp+48h] [rbp-21h]
  __int128 v8; // [rsp+4Ch] [rbp-1Dh]
  int v9; // [rsp+5Ch] [rbp-Dh]
  int v10; // [rsp+64h] [rbp-5h]
  int v11; // [rsp+6Ch] [rbp+3h]
  __int64 (__fastcall *v12)(); // [rsp+78h] [rbp+Fh]
  __int64 (__fastcall *v13)(PEPROCESS); // [rsp+80h] [rbp+17h]
  __int64 (__fastcall *v14)(); // [rsp+88h] [rbp+1Fh]
  char v15; // [rsp+D0h] [rbp+67h] BYREF

  result = TtmIsEnabled();
  if ( (_BYTE)result )
  {
    if ( !PspSiloMonitorLock.ExpectedRunTime )
      PspSiloMonitorLock.ExpectedRunTime = 3000;
    PsAltSystemCallRegistrationLock.OtherOperationCount = -300000000LL;
    ExInitializeResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.QueuedScb);
    KeInitializeTimer((PKTIMER)&PsAltSystemCallRegistrationLock.MutantListHead.Blink);
    KeInitializeDpc(
      (PRKDPC)&PsAltSystemCallRegistrationLock.PriorityFloorCounts[24],
      (PKDEFERRED_ROUTINE)TtmpTerminalInactivityTimerDpcRoutine,
      0LL);
    PsAltSystemCallRegistrationLock.SuspendEvent.Header.WaitListHead.Flink = 0LL;
    *(_QWORD *)&PsAltSystemCallRegistrationLock.SuspendEvent.Header.Lock = TtmpTerminalInactivityWorkerRoutine;
    PsAltSystemCallRegistrationLock.SchedulerApc.SystemArgument2 = 0LL;
    memset_0(&Src, 0, 0x78uLL);
    Src = 120;
    v7 = 400;
    v6 = v6 & 0xF1 | 6;
    v9 = 2031619;
    v12 = TtmpOpenTerminalHandle;
    v10 = 512;
    v13 = TtmpCloseTerminalHandle;
    v1 = 0x7FFFLL;
    v11 = 288;
    v8 = TtmpTerminalMapping;
    v14 = TtmpDeleteTerminal;
    v2 = L"Terminal";
    SourceString = 0LL;
    while ( *v2 )
    {
      ++v2;
      if ( !--v1 )
        goto LABEL_10;
    }
    SourceString.Buffer = L"Terminal";
    SourceString.Length = -2 - 2 * v1;
    SourceString.MaximumLength = -2 * v1;
LABEL_10:
    v3 = ObCreateObjectTypeEx(&SourceString, &Src, (__int64)&PspSiloMonitorLock.WaitBlock[2]);
    if ( v3 < 0 )
      KeBugCheckEx(0x19Bu, 1uLL, v3, 0LL, 0LL);
    return ExSubscribeWnfStateChange(
             (unsigned int)&v15,
             (unsigned int)&WNF_SHEL_INACTIVITY_TIMEOUT_IN_MS,
             1,
             0,
             (__int64)TtmpWnfInactivityTimeoutCallback,
             0LL);
  }
  else
  {
    PspSiloMonitorLock.WaitBlock[2].WaitListEntry.Flink = 0LL;
  }
  return result;
}
