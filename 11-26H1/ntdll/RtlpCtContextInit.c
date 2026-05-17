/*
 * XREFs of RtlpCtContextInit @ 0x18014969C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801493F0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     TpAllocWork @ 0x18004E830 (TpAllocWork.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpCtContextFree @ 0x18014964C (RtlpCtContextFree.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 */

__int64 __fastcall RtlpCtContextInit(__int64 **a1, int a2)
{
  __int64 *Atom; // rbx
  int Event; // edi
  _PEB_LDR_DATA *v6; // rdx
  __int64 v7; // r8

  *a1 = 0LL;
  Atom = (__int64 *)RtlpAllocateAtom(24LL);
  if ( Atom )
  {
    *(_OWORD *)Atom = 0LL;
    Atom[2] = 0LL;
    Event = ZwCreateEvent(Atom + 2, 2031619LL, 0LL, 0LL, 0);
    if ( Event < 0
      || (Event = TpAllocWork(Atom, (__int64)RtlpRtlpCtWaitForWnfQuiescentWorker, (int)Atom, 0LL), Event < 0)
      || (Event = RtlpSubscribeWnfStateChangeNotificationInternal(
                    Atom + 1,
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
      RtlpCtContextFree(Atom, v6, v7);
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
