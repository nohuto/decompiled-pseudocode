/*
 * XREFs of VfWdCheckForSettingsChange @ 0x140C3FF60
 * Callers:
 *     ViSettingsIoCheckForChanges @ 0x140C3F2B0 (ViSettingsIoCheckForChanges.c)
 *     VfWdSetCancelTimeout @ 0x140C40080 (VfWdSetCancelTimeout.c)
 * Callees:
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x140430460 (KeRemoveQueueDpcEx.c)
 *     ViWdStartTimer @ 0x140C40424 (ViWdStartTimer.c)
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
