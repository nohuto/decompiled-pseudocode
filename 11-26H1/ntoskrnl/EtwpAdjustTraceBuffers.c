/*
 * XREFs of EtwpAdjustTraceBuffers @ 0x140482320
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAdjustStackLookasideBuffers @ 0x1404823D4 (EtwpAdjustStackLookasideBuffers.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140482450 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpAdjustLastBranchLookasideBuffers @ 0x14048259C (EtwpAdjustLastBranchLookasideBuffers.c)
 *     PspGetNextSilo @ 0x1409FF6D8 (PspGetNextSilo.c)
 */

void EtwpAdjustTraceBuffers()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 NextSilo; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *Flink; // rcx

  if ( EtwpHostSiloState && !*(_DWORD *)(EtwpHostSiloState + 4340) )
  {
    EtwpAdjustSiloTraceBuffers();
    v1 = 0LL;
    while ( 1 )
    {
      LOBYTE(v0) = 1;
      NextSilo = PspGetNextSilo(v1, v0);
      v3 = NextSilo;
      if ( !NextSilo )
        break;
      CurrentThread = KeGetCurrentThread();
      Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
      CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)NextSilo;
      Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
      if ( Flink )
      {
        if ( !HIDWORD(Flink[271].Flink) )
          EtwpAdjustSiloTraceBuffers();
      }
      v1 = v3;
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
    }
    EtwpAdjustStackLookasideBuffers();
    EtwpAdjustLastBranchLookasideBuffers();
    _InterlockedExchange((volatile __int32 *)&stru_140F03830.TrapFrame, 0);
  }
}
