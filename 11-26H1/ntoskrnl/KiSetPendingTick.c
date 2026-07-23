/*
 * XREFs of KiSetPendingTick @ 0x140476614
 * Callers:
 *     KiSetClockTickRate @ 0x14021F6C0 (KiSetClockTickRate.c)
 *     KiRestoreClockTickRate @ 0x14040CECC (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405EFFA4 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 *     KeInitializeClockOtherProcessors @ 0x140BFAEF0 (KeInitializeClockOtherProcessors.c)
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
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
