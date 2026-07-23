/*
 * XREFs of PopDripsWatchdogTimerCallback @ 0x1404F11D0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

char __fastcall PopDripsWatchdogTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = a2 + 112;
  if ( a1 == a2 + 112 || (v3 = a2 + 384, a1 == a2 + 384) )
    LOBYTE(a1) = PopQueueWorkItem(v3 + 136, DelayedWorkQueue);
  return a1;
}
