/*
 * XREFs of PopQueueDirectedDripsWork @ 0x140483414
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x140483348 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1404833B0 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140A3D284 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDirectedDripsNotify @ 0x140B08694 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B3FB6C (PopDripsWatchdogCallbackHandler.c)
 *     PopInitializeDirectedDrips @ 0x140CD0CA8 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140F12AC8);
  v2 = _InterlockedOr64(&qword_140F12AC8, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&unk_140F12AD8, 0, 0);
  return v2;
}
