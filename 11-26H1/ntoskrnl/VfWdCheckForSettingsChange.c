/*
 * XREFs of VfWdCheckForSettingsChange @ 0x140C39F50
 * Callers:
 *     ViSettingsIoCheckForChanges @ 0x140C392A0 (ViSettingsIoCheckForChanges.c)
 *     VfWdSetCancelTimeout @ 0x140C3A070 (VfWdSetCancelTimeout.c)
 * Callees:
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x140423370 (KeRemoveQueueDpcEx.c)
 *     ViWdStartTimer @ 0x140C3A414 (ViWdStartTimer.c)
 */

__int64 __fastcall VfWdCheckForSettingsChange(char a1)
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    _InterlockedExchange(&ViWdCancelling, 1);
    KeCancelTimer(&ViWdIrpTimer);
    KeRemoveQueueDpcEx((int *)&ViWdIrpTimerDpc, 1);
    result = (unsigned int)_InterlockedExchange(&ViWdCancelling, 0);
    if ( (a1 & 0x10) != 0 )
    {
      result = (unsigned int)VfWdCancelTimeoutTicks;
      if ( VfWdCancelTimeoutTicks )
        return ViWdStartTimer();
    }
  }
  return result;
}
