/*
 * XREFs of RtlpCtContextInit @ 0x18014954C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801492A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     TpAllocWork @ 0x180038DB0 (TpAllocWork.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18008E48C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpCtContextFree @ 0x1801494FC (RtlpCtContextFree.c)
 *     ZwCreateEvent @ 0x18015F740 (ZwCreateEvent.c)
 */

__int64 __fastcall RtlpCtContextInit(_QWORD *a1, int a2)
{
  PVOID Atom; // rbx
  int Event; // edi

  *a1 = 0LL;
  Atom = RtlpAllocateAtom(0x18uLL);
  if ( Atom )
  {
    *(_OWORD *)Atom = 0LL;
    *((_QWORD *)Atom + 2) = 0LL;
    Event = ZwCreateEvent((PHANDLE)Atom + 2, 0x1F0003u, 0LL, NotificationEvent, 0);
    if ( Event < 0
      || (Event = TpAllocWork((PTP_WORK *)Atom, RtlpRtlpCtWaitForWnfQuiescentWorker, Atom, 0LL), Event < 0)
      || (Event = RtlpSubscribeWnfStateChangeNotificationInternal(
                    (_QWORD *)Atom + 1,
                    WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED,
                    a2,
                    (int)RtlpRtlpCtSelfSubscribeCallback,
                    (__int64)Atom,
                    0LL,
                    0,
                    4,
                    17),
          Event < 0) )
    {
      RtlpCtContextFree((PTP_WORK *)Atom);
    }
    else
    {
      *a1 = Atom;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Event;
}
