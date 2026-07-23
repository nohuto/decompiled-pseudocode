/*
 * XREFs of KeRemoveSystemServiceTable @ 0x1407BBC20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 */

char __fastcall KeRemoveSystemServiceTable(int a1)
{
  __int64 v3; // rcx

  if ( (unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) )
    return 1;
  if ( (unsigned int)(a1 - 1) <= 1
    && ((_QWORD)xmmword_1412018E0 || stru_140FC11F0.Spare18 || stru_140FC11F0.IoSelfBoostsEntry.Next) )
  {
    if ( a1 == 1 )
    {
      stru_140FC11F0.Spare18 = 0LL;
      stru_140FC11F0.ThreadFlags2 = 0;
      stru_140FC11F0.QueueListEntry.Flink = 0LL;
    }
    else
    {
      v3 = 32LL * (unsigned int)(a1 - 1);
      *(struct _LIST_ENTRY **)((char *)&stru_140FC11F0.MutantListHead.Blink + v3) = 0LL;
      *(_DWORD *)((char *)&stru_140FC11F0.SchedulerSharedSystemSlot + v3) = 0;
      *(struct _SINGLE_LIST_ENTRY **)((char *)&stru_140FC11F0.PropagateBoostsEntry.Next + v3) = 0LL;
    }
    return 1;
  }
  return 0;
}
