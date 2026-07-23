/*
 * XREFs of ObpInitStackTrace @ 0x140CD3FDC
 * Callers:
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ObpTraceAllocateMemory @ 0x140531C58 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ObpInitStackAndObjectTables @ 0x1407C7C48 (ObpInitStackAndObjectTables.c)
 *     ObpSetPoolTags @ 0x1407C8138 (ObpSetPoolTags.c)
 */

int ObpInitStackTrace()
{
  __int64 v0; // rdi
  int v1; // ebx
  _KAFFINITY_EX *Memory; // rax
  __int64 v3; // rax
  __int64 v4; // rbx

  LODWORD(ObpStackTraceLock.MutantListHead.Flink) = 275;
  *(_QWORD *)&ObpStackTraceLock.Header.Lock = 0LL;
  v0 = -1LL;
  v1 = 0;
  ObpStackTraceLock.PropagateBoostsEntry.Next = 0LL;
  ObpStackTraceLock.SchedulerSharedSystemSlot = ObpPushStackInfoDpc;
  Memory = (_KAFFINITY_EX *)ObpPushStackInfoQueue;
  ObpStackTraceLock.ThreadListEntry.Flink = (struct _LIST_ENTRY *)ObpPushStackInfoQueue;
  *(_QWORD *)&ObpStackTraceLock.PriorityFloorCounts[8] = 0LL;
  *(_QWORD *)&ObpStackTraceLock.AbWaitEntryCount = 0LL;
  ObpStackTraceLock.ThreadListEntry.Blink = 0LL;
  ObpStackTraceLock.SuspendEvent.Header.WaitListHead.Flink = 0LL;
  ObpStackTraceLock.SchedulerApc.SystemArgument2 = 0LL;
  ObpStackTraceLock.Timer.Header.WaitListHead.Flink = 0LL;
  HIDWORD(ObpStackTraceLock.UserAffinity) = 0;
  *(_DWORD *)&ObpStackTraceLock.SavedApcStateFill[8] = 0;
  *(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[80] = 0;
  if ( LOWORD(ObpStackTraceLock.Header.WaitListHead.Flink) )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *((_WORD *)&ObpStackTraceLock.Header.WaitListHead.Flink + v3) );
    v4 = (unsigned __int16)(2 * v3);
    Memory = (_KAFFINITY_EX *)ObpTraceAllocateMemory(v4 + 2);
    ObpStackTraceLock.Affinity = Memory;
    if ( !Memory )
      return (int)Memory;
    LOWORD(ObpStackTraceLock.AffinityVersion) = v4;
    WORD1(ObpStackTraceLock.AffinityVersion) = v4 + 2;
    LODWORD(Memory) = (unsigned int)memmove(Memory, &ObpStackTraceLock.Header.WaitListHead, (unsigned __int16)(v4 + 2));
    v1 = 32;
  }
  if ( LOWORD(ObpStackTraceLock.Timer.TimerListEntry.Blink) )
  {
    do
      ++v0;
    while ( *((_WORD *)&ObpStackTraceLock.Timer.TimerListEntry.Blink + v0) );
    LODWORD(Memory) = ObpSetPoolTags((__int64)&ObpStackTraceLock.Timer.TimerListEntry.Blink, v0);
    v1 |= 0x10u;
  }
  if ( v1 )
  {
    if ( LODWORD(ObpStackTraceLock.Timer.Header.WaitListHead.Blink) )
      v1 |= 0x40u;
    LODWORD(Memory) = ObpInitStackAndObjectTables();
    if ( (int)Memory < 0 )
    {
      ObpSetPoolTags(0LL, 0);
      LODWORD(Memory) = ObpTraceFlags;
      if ( (ObpTraceFlags & 0x20) != 0 )
      {
        ObpTraceFreeMemory(ObpStackTraceLock.Affinity);
        LODWORD(Memory) = RtlInitUnicodeStringEx((PUNICODE_STRING)&ObpStackTraceLock.AffinityVersion, 0LL);
      }
    }
    else
    {
      LODWORD(ObpStackTraceLock.UserAffinity) = v1 | 1;
      ObpTraceFlags = v1 | 1;
      if ( (v1 & 0x20) != 0 )
        ObpStackTraceLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)&ObpStackTraceLock.AffinityVersion;
      ExpHandleTableFastRefsDisabled = 1;
    }
  }
  return (int)Memory;
}
