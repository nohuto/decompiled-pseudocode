/*
 * XREFs of KeDeepSleepProcessor @ 0x1405F3464
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeInterlockedSetProcessorAffinityEx @ 0x140420700 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x140420840 (KeInterlockedClearProcessorAffinityEx.c)
 *     HviIsXboxNanovisorPresent @ 0x1406E0C74 (HviIsXboxNanovisorPresent.c)
 *     KiSetUserTbFlushPending @ 0x14072D090 (KiSetUserTbFlushPending.c)
 */

unsigned __int8 KeDeepSleepProcessor()
{
  char v0; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int Number; // edx
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v0 = 0;
  if ( (HvlEnlightenments & 4) == 0 && !(unsigned __int8)HviIsXboxNanovisorPresent() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    Number = CurrentPrcb->Number;
    CurrentPrcb->DeepSleep = 1;
    KeInterlockedSetProcessorAffinityEx((__int64)&KiDpcCorralLock.Header.WaitListHead.Blink, Number);
    if ( !CurrentPrcb->DeepSleep )
    {
      KeInterlockedClearProcessorAffinityEx((__int64)&KiDpcCorralLock.Header.WaitListHead.Blink, CurrentPrcb->Number);
      if ( KiFlushPcid )
      {
        v5 = __readcr3();
        __writecr3(v5);
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process->AddressPolicy )
          KiSetUserTbFlushPending(Process, v3, v4);
      }
      else
      {
        v7 = __readcr4();
        if ( (v7 & 0x20080) != 0 )
        {
          __writecr4(v7 ^ 0x80);
          __writecr4(v7);
        }
        else
        {
          v8 = __readcr3();
          __writecr3(v8);
        }
      }
    }
    return CurrentPrcb->DeepSleep;
  }
  return v0;
}
