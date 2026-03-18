/*
 * XREFs of SepAdtDetermineInsertQueue @ 0x1404B5D30
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     SepAdtGenerateDiscardAudit @ 0x140812D00 (SepAdtGenerateDiscardAudit.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char __fastcall SepAdtDetermineInsertQueue(__int64 a1)
{
  char v1; // bl
  __int64 Pool2; // rax
  __int64 v4; // rcx
  volatile unsigned int ThreadTimerDelay; // eax
  _OWORD P[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v1 = 0;
  if ( BYTE4(RtlpBootStatHandleLock.QueuedScb) || *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) == 4612 )
    return 1;
  if ( LOBYTE(RtlpBootStatHandleLock.Spare26) )
  {
    if ( LODWORD(RtlpBootStatHandleLock.InGlobalForegroundList) >= SepAdtMinListLength )
    {
      ++RtlpBootStatHandleLock.ThreadTimerDelay;
      return v1;
    }
    LOBYTE(RtlpBootStatHandleLock.Spare26) = 0;
    if ( KeGetCurrentIrql() >= 2u )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v4 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 24) = Pool2;
        *(_QWORD *)(Pool2 + 16) = SepAdtGenerateDiscardAudit;
        ThreadTimerDelay = RtlpBootStatHandleLock.ThreadTimerDelay;
        *(_QWORD *)v4 = 0LL;
        *(_DWORD *)(v4 + 32) = ThreadTimerDelay;
        *(_BYTE *)(v4 + 36) = 1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v4, DelayedWorkQueue);
      }
    }
    else
    {
      v7 = RtlpBootStatHandleLock.ThreadTimerDelay;
      memset(P, 0, sizeof(P));
      SepAdtGenerateDiscardAudit(P);
    }
    RtlpBootStatHandleLock.ThreadTimerDelay = 0;
  }
  if ( LODWORD(RtlpBootStatHandleLock.InGlobalForegroundList) < SepAdtMaxListLength )
    return 1;
  LOBYTE(RtlpBootStatHandleLock.Spare26) = 1;
  RtlpBootStatHandleLock.ThreadTimerDelay = 1;
  return v1;
}
