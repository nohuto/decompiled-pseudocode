/*
 * XREFs of PopQueueDirectedDripsWork @ 0x14047CD84
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x14047CCB8 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14047CD20 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1409F8CA4 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDirectedDripsNotify @ 0x140B0A610 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B41B9C (PopDripsWatchdogCallbackHandler.c)
 *     PopInitializeDirectedDrips @ 0x140CD6E50 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140F12E08);
  v2 = _InterlockedOr64(&qword_140F12E08, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140F12E18, 0, 0);
  return v2;
}
