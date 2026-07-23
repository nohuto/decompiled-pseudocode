/*
 * XREFs of MiSignalPartitionTrimThreads @ 0x1402A6860
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 * Callees:
 *     MiComputeSystemTrimCriteria @ 0x1402A59C4 (MiComputeSystemTrimCriteria.c)
 *     MiUpdatePartitionMemoryUsage @ 0x1402A60BC (MiUpdatePartitionMemoryUsage.c)
 *     MiComputeAgingNeed @ 0x1402A85EC (MiComputeAgingNeed.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

char __fastcall MiSignalPartitionTrimThreads(__int64 a1)
{
  __int64 v1; // rax
  char updated; // di
  __int64 v4; // rcx
  struct _KEVENT *v5; // rcx

  LOBYTE(v1) = *(_BYTE *)(a1 + 21388);
  if ( !(_BYTE)v1 )
    return v1;
  if ( *(_DWORD *)(a1 + 21392) && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 21392), 0xFFFFFFFF) == 1 )
    _InterlockedExchange((volatile __int32 *)(a1 + 21252), 1);
  updated = MiUpdatePartitionMemoryUsage(a1);
  if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 && (unsigned int)MiComputeSystemTrimCriteria(a1, 0LL) )
  {
    v4 = 21312LL;
LABEL_7:
    v5 = (struct _KEVENT *)(a1 + v4);
    if ( v5 )
      KeSetEvent(v5, 0, 0);
    goto LABEL_9;
  }
  if ( (updated & 2) != 0 )
  {
    v4 = 21336LL;
    goto LABEL_7;
  }
LABEL_9:
  LODWORD(v1) = MiComputeAgingNeed(a1, 0LL);
  if ( (_DWORD)v1 )
  {
    v1 = 21264LL;
  }
  else
  {
    if ( (updated & 1) == 0 )
      return v1;
    v1 = 21288LL;
  }
  if ( v1 + a1 )
    LOBYTE(v1) = KeSetEvent((PRKEVENT)(v1 + a1), 0, 0);
  return v1;
}
