/*
 * XREFs of WheapLogIpmiSELEvent @ 0x1406DB4B0
 * Callers:
 *     WheaSelLogErrorPkt @ 0x1406D84A8 (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x1406D8594 (WheaSelLogEvent.c)
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1406DB488 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  unsigned int v4; // edi
  unsigned int v6; // r9d

  v4 = Size;
  if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
  {
    memset_0((char *)&CmpContextListLock.MutantListHead.Blink + 4, 0, 0xFECuLL);
    CmpContextListLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)0x15253534FLL;
    v6 = 4075;
    HIDWORD(CmpContextListLock.MutantListHead.Flink) = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    LODWORD(CmpContextListLock.MutantListHead.Blink) = v6;
    LODWORD(CmpContextListLock.MutantListHead.Flink) = v6 + 20;
    memmove((char *)&CmpContextListLock.MutantListHead.Blink + 4, Src, v6);
    if ( WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
    {
      if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
        guard_dispatch_icall_no_overrides(
          CmpContextListLock.SchedulerApc.SystemArgument2,
          &CmpContextListLock.ThreadListEntry.Blink);
      _InterlockedExchange((volatile __int32 *)&CmpContextListLock.SchedulerApcFill5[60], 0);
    }
  }
}
