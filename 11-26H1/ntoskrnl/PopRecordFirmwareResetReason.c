/*
 * XREFs of PopRecordFirmwareResetReason @ 0x140CD0800
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

char __fastcall PopRecordFirmwareResetReason(__int64 a1)
{
  __int64 v1; // rdx
  struct _LIST_ENTRY *v2; // rax

  v1 = *(_QWORD *)(a1 + 240);
  LOBYTE(v2) = *(_BYTE *)(v1 + 3440);
  stru_140E66FF0.SchedulerApcFill3[8] = (unsigned __int8)v2;
  if ( *(_BYTE *)(v1 + 3440) )
  {
    v2 = *(struct _LIST_ENTRY **)(v1 + 3448);
    stru_140E66FF0.SchedulerApc.ApcListEntry.Flink = v2;
    *(_OWORD *)&stru_140E66FF0.SchedulerApcFill5[24] = *(_OWORD *)(v1 + 3456);
    *(_OWORD *)&stru_140E66FF0.SchedulerApcFill5[40] = *(_OWORD *)(v1 + 3472);
  }
  return (char)v2;
}
