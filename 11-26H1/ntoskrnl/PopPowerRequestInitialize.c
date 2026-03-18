/*
 * XREFs of PopPowerRequestInitialize @ 0x140CD0850
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectType @ 0x14077B990 (ObCreateObjectType.c)
 *     PopInitializeTimer @ 0x1407C8C18 (PopInitializeTimer.c)
 *     PopInitializeWorkItem @ 0x1407C8C6C (PopInitializeWorkItem.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 *     PopPowerRequestStatsInitialize @ 0x140CD6B54 (PopPowerRequestStatsInitialize.c)
 */

__int64 PopPowerRequestInitialize()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  char *v2; // rcx
  char *v3; // r8
  __int64 v4; // rdx
  _QWORD *v5; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  __int16 v7; // [rsp+40h] [rbp-29h] BYREF
  char v8; // [rsp+42h] [rbp-27h]
  int v9; // [rsp+48h] [rbp-21h]
  __int128 v10; // [rsp+4Ch] [rbp-1Dh]
  int v11; // [rsp+5Ch] [rbp-Dh]
  int v12; // [rsp+64h] [rbp-5h]
  int v13; // [rsp+6Ch] [rbp+3h]
  void (__fastcall *v14)(__int64, _BYTE *, __int64, __int64); // [rsp+80h] [rbp+17h]
  void (__fastcall *v15)(unsigned int *, __int64, __int64, struct _KLOCK_ENTRIES *); // [rsp+88h] [rbp+1Fh]

  DestinationString = 0LL;
  memset_0(&v7, 0, 0x78uLL);
  RtlInitUnicodeString(&DestinationString, L"PowerRequest");
  v8 |= 0x14u;
  v14 = PopPowerRequestClose;
  v7 = 120;
  v15 = PopPowerRequestDelete;
  v12 = 512;
  v13 = 168;
  v9 = 402;
  v10 = PopPowerRequestMapping;
  v11 = 2031616;
  result = ObCreateObjectType(&DestinationString, &v7, 0LL, (__int64)&PopPowerRequestObjectType);
  if ( (int)result >= 0 )
  {
    stru_140F12D20.Header.WaitListHead.Flink = 0LL;
    *(_QWORD *)&stru_140F12D20.Header.Lock = 0LL;
    stru_140F12D20.Header.WaitListHead.Blink = 0LL;
    PopInitializeWorkItem(
      (__int64)&stru_140F12D20.SystemCallNumber,
      (__int64)PopPowerRequestCallbackWorker,
      (__int64)&stru_140F12D20.ThreadLock);
    stru_140F12D20.CycleTime = v1;
    stru_140F12D20.ThreadLock = v1;
    stru_140F12D20.InitialStack = &stru_140F12D20.QuantumTarget;
    stru_140F12D20.QuantumTarget = (unsigned __int64)&stru_140F12D20.QuantumTarget;
    memset_0(&stru_140F12D20.ApcStateFill[40], 0, 0x68uLL);
    *(_QWORD *)&stru_140F12D20.ApcStateFill[40] = &stru_140F12D20.ApcStateFill[40];
    stru_140F12D20.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)PopPowerRequestTableCompare;
    v2 = (char *)&unk_140E019F8;
    stru_140F12D20.Timer.TimerListEntry.Flink = 0LL;
    stru_140F12D20.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PopPowerRequestTableAllocate;
    v3 = (char *)&unk_140E01A00;
    v4 = 6LL;
    stru_140F12D20.Timer.DueTime.QuadPart = (unsigned __int64)PopPowerRequestTableFree;
    do
    {
      *(_WORD *)v2 = 0;
      v5 = v2 + 8;
      v2[2] = 6;
      *((_DWORD *)v2 + 1) = 1;
      *((_QWORD *)v2 + 2) = v3;
      v2 += 48;
      v3 += 48;
      *v5 = v5;
      --v4;
    }
    while ( v4 );
    *(_OWORD *)&stru_140F12D20.StateSaveArea = 0LL;
    PopInitializeTimer(
      (__int64)&stru_140F12D20.512,
      (__int64)PopPowerRequestExecutionRequiredTimeoutCallback,
      0LL,
      (__int64)PopPowerRequestExecutionRequiredTimeoutWorker,
      0LL);
    PopInitializeTimer(
      (__int64)&stru_140F12D20.320,
      (__int64)PopPowerRequestDebounceTimerCallback,
      0LL,
      (__int64)PopPowerRequestDebounceTimerWorker,
      0LL);
    PopPowerRequestStatsInitialize();
    if ( TtmIsEnabled() )
      LODWORD(stru_140F12D20.Timer.TimerListEntry.Blink) = 1;
    return 0LL;
  }
  return result;
}
