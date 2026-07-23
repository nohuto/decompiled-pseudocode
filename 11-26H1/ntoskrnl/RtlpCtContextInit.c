/*
 * XREFs of RtlpCtContextInit @ 0x14080EBA8
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1406227E0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     RtlpCtContextFree @ 0x14080EB48 (RtlpCtContextFree.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpCtContextInit(__int64 *a1, int a2)
{
  __int64 Pool2; // rdi
  int v5; // ebx
  struct _KEVENT *v6; // rax
  _QWORD *v8; // rax

  *a1 = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    v6 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
    *(_QWORD *)(Pool2 + 16) = v6;
    if ( v6
      && (KeInitializeEvent(v6, NotificationEvent, 0),
          v8 = (_QWORD *)ExAllocatePool2(0x40uLL),
          (*(_QWORD *)Pool2 = v8) != 0LL) )
    {
      v8[3] = Pool2;
      v8[2] = RtlpRtlpCtWaitForWnfQuiescentWorker;
      *v8 = 0LL;
      v5 = ExSubscribeWnfStateChange(
             (int)Pool2 + 8,
             (unsigned int)&WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED,
             8,
             a2,
             (__int64)RtlpRtlpCtSelfSubscribeCallback,
             Pool2);
      if ( v5 >= 0 )
      {
        *a1 = Pool2;
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    RtlpCtContextFree((PVOID *)Pool2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
