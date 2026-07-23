/*
 * XREFs of SepAdtDetermineInsertQueue @ 0x1404AF180
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     SepAdtGenerateDiscardAudit @ 0x140818B60 (SepAdtGenerateDiscardAudit.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char __fastcall SepAdtDetermineInsertQueue(__int64 a1)
{
  char v1; // bl
  __int64 Pool2; // rax
  __int64 v4; // rcx
  LONG SignalState; // eax
  _OWORD P[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v1 = 0;
  if ( *((_BYTE *)&RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue + 5)
    || *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) == 4612 )
  {
    return 1;
  }
  if ( RtlpBootStatHandleLock.SuspendEvent.Header.Type )
  {
    if ( LODWORD(RtlpBootStatHandleLock.WriteTransferCount) >= SepAdtMinListLength )
    {
      ++RtlpBootStatHandleLock.SuspendEvent.Header.SignalState;
      return v1;
    }
    RtlpBootStatHandleLock.SuspendEvent.Header.Type = 0;
    if ( KeGetCurrentIrql() >= 2u )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v4 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 24) = Pool2;
        *(_QWORD *)(Pool2 + 16) = SepAdtGenerateDiscardAudit;
        SignalState = RtlpBootStatHandleLock.SuspendEvent.Header.SignalState;
        *(_QWORD *)v4 = 0LL;
        *(_DWORD *)(v4 + 32) = SignalState;
        *(_BYTE *)(v4 + 36) = 1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v4, DelayedWorkQueue);
      }
    }
    else
    {
      v7 = (unsigned int)RtlpBootStatHandleLock.SuspendEvent.Header.SignalState;
      memset(P, 0, sizeof(P));
      SepAdtGenerateDiscardAudit(P);
    }
    RtlpBootStatHandleLock.SuspendEvent.Header.SignalState = 0;
  }
  if ( LODWORD(RtlpBootStatHandleLock.WriteTransferCount) < SepAdtMaxListLength )
    return 1;
  RtlpBootStatHandleLock.SuspendEvent.Header.Type = 1;
  RtlpBootStatHandleLock.SuspendEvent.Header.SignalState = 1;
  return v1;
}
