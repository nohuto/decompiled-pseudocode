/*
 * XREFs of StorSetIoGatewayEmptyEvent @ 0x140059BBC
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStopDeviceIrp @ 0x1401862D0 (RaidAdapterStopDeviceIrp.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

int __fastcall StorSetIoGatewayEmptyEvent(__int64 a1, struct _KEVENT *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rbp
  __int64 v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  for ( i = 0; i < *(_DWORD *)(*(_QWORD *)(a1 + 48) + 1032LL); ++i )
  {
    v5 = a1 + 320LL * i;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5, &LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 192), 0, 0) )
    {
      *(_QWORD *)(v5 + 200) = a2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      break;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( i >= *(_DWORD *)(v6 + 1032) )
    LODWORD(v6) = KeSetEvent(a2, 0, 0);
  return v6;
}
