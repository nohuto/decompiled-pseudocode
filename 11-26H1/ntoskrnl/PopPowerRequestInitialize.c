/*
 * XREFs of PopPowerRequestInitialize @ 0x140CD69F8
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     PopInitializeTimer @ 0x1407CBCB8 (PopInitializeTimer.c)
 *     PopInitializeWorkItem @ 0x1407CBD0C (PopInitializeWorkItem.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     PopPowerRequestStatsInitialize @ 0x140CDCEA8 (PopPowerRequestStatsInitialize.c)
 */

__int64 PopPowerRequestInitialize()
{
  __int64 result; // rax
  void *v1; // r8
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
    stru_140F12EA0.SchedulerAssist = 0LL;
    stru_140F12EA0.TracingPrivate[0] = 0LL;
    stru_140F12EA0.QueuedScb = 0LL;
    PopInitializeWorkItem(
      (__int64)&stru_140F12EA0.KernelWaitTime,
      (__int64)PopPowerRequestCallbackWorker,
      (__int64)&stru_140F12EA0.KernelShadowStackInitial);
    stru_140F12EA0.KernelShadowStackBase = v1;
    stru_140F12EA0.KernelShadowStackInitial = v1;
    stru_140F12EA0.Spare35[0] = (unsigned __int64)&stru_140F12EA0.WpsFeedback;
    stru_140F12EA0.WpsFeedback = (_KTHREAD_WPS_FEEDBACK *)&stru_140F12EA0.WpsFeedback;
    memset_0(&stru_140F12EA0.PriorityFloorCounts[8], 0, 0x68uLL);
    *(_QWORD *)&stru_140F12EA0.PriorityFloorCounts[8] = &stru_140F12EA0.PriorityFloorCounts[8];
    stru_140F12EA0.WriteOperationCount = (__int64)PopPowerRequestTableCompare;
    v2 = (char *)&unk_140E019F8;
    stru_140F12EA0.WriteTransferCount = 0LL;
    stru_140F12EA0.OtherOperationCount = (__int64)PopPowerRequestTableAllocate;
    v3 = (char *)&unk_140E01A00;
    v4 = 6LL;
    stru_140F12EA0.ReadTransferCount = (__int64)PopPowerRequestTableFree;
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
    *(_OWORD *)&stru_140F12EA0.Spare35[1] = 0LL;
    PopInitializeTimer(
      (__int64)&stru_140F12EA0.WaitBlock[2].Object,
      (__int64)PopPowerRequestExecutionRequiredTimeoutCallback,
      0LL,
      (__int64)PopPowerRequestExecutionRequiredTimeoutWorker,
      0LL);
    PopInitializeTimer(
      (__int64)&stru_140F12EA0.SavedApcStateFill[40],
      (__int64)PopPowerRequestDebounceTimerCallback,
      0LL,
      (__int64)PopPowerRequestDebounceTimerWorker,
      0LL);
    PopPowerRequestStatsInitialize();
    if ( TtmIsEnabled() )
      LODWORD(stru_140F12EA0.IoSelfBoostsEntry.Next) = 1;
    return 0LL;
  }
  return result;
}
