/*
 * XREFs of EnableFlushTimer @ 0x18001CC68
 * Callers:
 *     CrmLogSrvActivityStopStop @ 0x18001C010 (CrmLogSrvActivityStopStop.c)
 *     FlushTimerCallbackUserMode @ 0x18008CD70 (FlushTimerCallbackUserMode.c)
 * Callees:
 *     <none>
 */

void __fastcall EnableFlushTimer(struct _TP_TIMER *a1, unsigned int a2)
{
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( !dword_1800E3400 )
    {
      pftDueTime = (struct _FILETIME)(-10000LL * a2);
      SetThreadpoolTimer(a1, &pftDueTime, 0, 0x1388u);
    }
  }
}
