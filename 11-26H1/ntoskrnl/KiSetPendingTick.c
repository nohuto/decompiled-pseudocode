/*
 * XREFs of KiSetPendingTick @ 0x14047CCA4
 * Callers:
 *     KiSetClockTickRate @ 0x14021DD30 (KiSetClockTickRate.c)
 *     KiRestoreClockTickRate @ 0x140418994 (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405ED634 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405EDA84 (KeResumeClockTimerFromIdle.c)
 *     KeInitializeClockOtherProcessors @ 0x140BF4EF0 (KeInitializeClockOtherProcessors.c)
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall KiSetPendingTick(char a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int8 result; // al
  __int64 v3; // rdx

  if ( KiClockTimerPerCpu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = CurrentPrcb->PendingTickFlags;
    CurrentPrcb->PendingTickFlags = result ^ (a1 ^ result) & 1;
  }
  else
  {
    v3 = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    result = *(_BYTE *)(v3 + 34);
    *(_BYTE *)(v3 + 34) = result ^ (a1 ^ result) & 1;
  }
  return result;
}
