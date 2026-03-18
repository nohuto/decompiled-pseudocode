/*
 * XREFs of EtwpLoggerDpc @ 0x1404D63A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpRequestFlushTimer @ 0x1402198F0 (EtwpRequestFlushTimer.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

void __fastcall EtwpLoggerDpc(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  __int16 v5; // di

  _m_prefetchw(&DeferredContext[34].Header.WaitListHead);
  v5 = _InterlockedAnd((volatile signed __int32 *)&DeferredContext[34].Header.WaitListHead, 0xFFFFFCFF);
  if ( (v5 & 0x100) != 0 )
    KeSetEvent(DeferredContext + 20, 0, 0);
  if ( (v5 & 0x200) != 0 )
    EtwpRequestFlushTimer((__int64)DeferredContext, 0LL, SystemArgument1);
}
