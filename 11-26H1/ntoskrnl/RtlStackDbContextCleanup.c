/*
 * XREFs of RtlStackDbContextCleanup @ 0x1406261C0
 * Callers:
 *     ObpDestroyStackAndObjectTables @ 0x1407C7A74 (ObpDestroyStackAndObjectTables.c)
 *     ObpInitStackAndObjectTables @ 0x1407C7C48 (ObpInitStackAndObjectTables.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 RtlStackDbContextCleanup()
{
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *v1; // rbx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v3; // r8
  struct _LIST_ENTRY *i; // rcx
  struct _KTHREAD *Thread; // rdi
  struct _KTHREAD *v6; // rbx
  __int64 result; // rax
  struct _KTHREAD *v8; // r8
  struct _KTHREAD *j; // rcx
  struct _LIST_ENTRY *v10; // rbx

  Blink = ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink;
  v1 = ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink;
  while ( v1 )
  {
    Flink = v1->Flink;
    v1 = Flink;
    if ( ((unsigned __int8)Flink & 1) != 0 )
      break;
LABEL_9:
    if ( !Flink )
      goto LABEL_17;
    v3 = v1;
    for ( i = Blink; ((__int64)i->Flink & 1) == 0; i = i->Flink )
    {
      if ( i->Flink == v1 )
      {
        i->Flink = v1->Flink;
        --*(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[16];
        v1->Flink = (struct _LIST_ENTRY *)((unsigned __int64)v1->Flink | 0x8000000000000002uLL);
        v1 = i;
        goto LABEL_16;
      }
    }
    v3 = 0LL;
LABEL_16:
    guard_dispatch_icall_no_overrides(v3, ObpStackTraceLock.SchedulerApc.SystemArgument1);
  }
  for ( Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
        Blink < (struct _LIST_ENTRY *)((char *)ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink
                                     + 8
                                     * ((unsigned __int64)*(unsigned int *)&ObpStackTraceLock.SchedulerApcFill5[20] >> 5));
        Blink = (struct _LIST_ENTRY *)((char *)Blink + 8) )
  {
    v1 = Blink->Flink;
    if ( ((__int64)Blink->Flink & 1) == 0 )
    {
      Flink = Blink->Flink;
      goto LABEL_9;
    }
  }
LABEL_17:
  Thread = ObpStackTraceLock.SchedulerApc.Thread;
  v6 = ObpStackTraceLock.SchedulerApc.Thread;
  while ( v6 )
  {
    result = *(_QWORD *)&v6->Header.Lock;
    v6 = (struct _KTHREAD *)result;
    if ( (result & 1) != 0 )
      break;
LABEL_25:
    if ( !result )
      goto LABEL_33;
    v8 = v6;
    for ( j = Thread; (*(_QWORD *)&j->Header.Lock & 1) == 0; j = *(struct _KTHREAD **)&j->Header.Lock )
    {
      if ( *(struct _KTHREAD **)&j->Header.Lock == v6 )
      {
        *(_QWORD *)&j->Header.Lock = *(_QWORD *)&v6->Header.Lock;
        --*(_DWORD *)&ObpStackTraceLock.SchedulerApc.Type;
        *(_QWORD *)&v6->Header.Lock |= 0x8000000000000002uLL;
        v6 = j;
        goto LABEL_32;
      }
    }
    v8 = 0LL;
LABEL_32:
    guard_dispatch_icall_no_overrides(v8, ObpStackTraceLock.SchedulerApc.SystemArgument1);
  }
  Thread = (struct _KTHREAD *)((char *)Thread + 8);
  result = (__int64)ObpStackTraceLock.SchedulerApc.Thread;
  while ( Thread < (struct _KTHREAD *)((char *)ObpStackTraceLock.SchedulerApc.Thread
                                     + 8 * ((unsigned __int64)ObpStackTraceLock.SchedulerApc.SpareLong0 >> 5)) )
  {
    v6 = *(struct _KTHREAD **)&Thread->Header.Lock;
    if ( (*(_QWORD *)&Thread->Header.Lock & 1) == 0 )
    {
      result = *(_QWORD *)&Thread->Header.Lock;
      goto LABEL_25;
    }
    Thread = (struct _KTHREAD *)((char *)Thread + 8);
  }
LABEL_33:
  v10 = ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink;
  if ( ObpStackTraceLock.SchedulerApc.Thread )
    result = guard_dispatch_icall_no_overrides(
               ObpStackTraceLock.SchedulerApc.Thread,
               ObpStackTraceLock.SchedulerApc.SystemArgument1);
  if ( v10 )
    return guard_dispatch_icall_no_overrides(v10, ObpStackTraceLock.SchedulerApc.SystemArgument1);
  return result;
}
