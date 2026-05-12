/*
 * XREFs of RaidAdapterIrpComplete @ 0x140062C18
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     RaidpIsPerProcessorCompletionsFlushSet @ 0x14000EC70 (RaidpIsPerProcessorCompletionsFlushSet.c)
 */

char __fastcall RaidAdapterIrpComplete(__int64 a1, __int64 a2, ULONG a3)
{
  int v3; // eax
  struct _SLIST_ENTRY *v5; // rdi
  PSLIST_ENTRY v6; // rax
  void *v7; // rdx
  struct _KDPC *v8; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 624);
  ProcNumber = 0;
  if ( (v3 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5152));
  v5 = (struct _SLIST_ENTRY *)((a2 + 135) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( KeGetProcessorNumberFromIndex(a3, &ProcNumber) < 0 )
    goto LABEL_11;
  if ( (*(_BYTE *)(a1 + 4435) & 2) != 0 )
    KeGetCurrentProcessorNumberEx(&ProcNumber);
  if ( ProcNumber.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
    || (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group) )
  {
LABEL_11:
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 272), v5);
    v8 = (struct _KDPC *)(*(_QWORD *)(a1 + 8) + 200LL);
    v7 = 0LL;
    goto LABEL_12;
  }
  v6 = ExpInterlockedPushEntrySList(
         (PSLIST_HEADER)g_RaidPerProcessorState
       + 8 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6))
       + 5,
         v5);
  if ( !v6 )
  {
    LOBYTE(v6) = RaidpIsPerProcessorCompletionsFlushSet(&ProcNumber.Group);
    if ( !(_BYTE)v6 )
    {
      v7 = *(void **)(a1 + 8);
      v8 = (struct _KDPC *)((char *)g_RaidPerProcessorState
                          + 128 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
LABEL_12:
      LOBYTE(v6) = KeInsertQueueDpc(v8, v7, 0LL);
    }
  }
  return (char)v6;
}
