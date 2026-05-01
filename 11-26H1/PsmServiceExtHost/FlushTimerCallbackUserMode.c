/*
 * XREFs of FlushTimerCallbackUserMode @ 0x18008CD70
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x18001CC68 (EnableFlushTimer.c)
 *     LookUpTableFlushComplete @ 0x180061FF0 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x18008CDC0 (LookUpTableFlushPartial.c)
 */

void __fastcall FlushTimerCallbackUserMode(PTP_CALLBACK_INSTANCE Instance, __int64 Context, PTP_TIMER Timer)
{
  if ( *(_BYTE *)(Context + 356) )
  {
    *(_BYTE *)(Context + 356) = 0;
    LookUpTableFlushComplete(Context);
  }
  else
  {
    LookUpTableFlushPartial(Context);
  }
  if ( *(_DWORD *)(Context + 256) )
    EnableFlushTimer(*(struct _TP_TIMER **)(Context + 344), *(_DWORD *)(Context + 352));
}
